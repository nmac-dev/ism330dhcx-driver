### @file test-compile.sh
### @brief Test script for validating the compilation of the ISM330DHCX driver as a static or installed library.


## Variables

REPO__D="$(git rev-parse --show-toplevel)"
DRIVER__D="$REPO__D/ism330dhcx"
SRC__D="$DRIVER__D/src"


RED='\033[0;31m'
CYAN='\033[0;36m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color


## Functions

echo_status() {

    local color="$1"
    local message="$2"

    echo -e "${color}${message}${NC}"
}

### @brief Remove a file system entity (file, directory, or symbolic link).
### @param fs_entity The path to the file system entity to remove.
remove_fs_entity() {

    local fs_entity="$1"
    local use_sudo="$2"

    local sudo_cmd=""

    if [[ use_sudo -eq 1 ]]; then
        local sudo_cmd="sudo"
    fi

    if [[ -L $fs_entity ]]; then
        $sudo_cmd unlink $fs_entity
    fi

    if [[ -f $fs_entity ]]; then
        $sudo_cmd rm $fs_entity
    fi

    if [[ -d $fs_entity ]]; then
        $sudo_cmd rm -rf $fs_entity
    fi
}


### @brief Exit the script with a clean-up of generated files and symbolic links.
exit_script() {

    remove_fs_entity $OUT
    remove_fs_entity $ISM330DHCX_LIB__F

    exit $1
}


## ARGV

echo_status $CYAN "-- Test Compile --"

ARG_TEST_STATIC=0
ARG_TEST_INSTALL=0

while getopts "is" opt; do
    case $opt in
        i) ARG_TEST_INSTALL=1 ;;
        s) ARG_TEST_STATIC=1  ;;
        *) echo "Invalid option: '-$OPTARG'."
           echo " '-i' Test installation of the library and compilation against the installed version."
           echo " '-s' Test compilation against the static library without installation."
           exit_script 0 ;;
    esac
done

if [[ $ARG_TEST_STATIC -eq 0 && $ARG_TEST_INSTALL -eq 0 ]]; then
    echo_status $RED "No test specified. Use '-i' for install test or '-s' for static library test."
    exit_script 1
fi


## Codebase

# library

ISM330DHCX_LIB__D="ism330dhcx"
ISM330DHCX_LIB__F="libism330dhcx.a"
ISM330DHCX_LIB__PATH="$ISM330DHCX_LIB__D/$ISM330DHCX_LIB__F"


# sources

SRC__C=( "$SRC__D"/*.c )

# main

TEST_MAIN__D="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
MAIN__C="$TEST_MAIN__D/test_compile.c"
OUT="$TEST_MAIN__D/test_out"


## CMake Build

CMAKE_BUILD__D="$TEST_MAIN__D/build"

mkdir -p $CMAKE_BUILD__D
cmake -S $REPO__D -B $CMAKE_BUILD__D
cmake --build $CMAKE_BUILD__D -j


## Validate CMake Build

if [[ ! -f $CMAKE_BUILD__D/$ISM330DHCX_LIB__PATH ]]; then
    echo_status $RED "CMake build failed: Static library not found."
    exit_script 2
fi


## Static Library Test

if [[ $ARG_TEST_STATIC -eq 1 ]]; then

    cd $CMAKE_BUILD__D
    make

    cp $ISM330DHCX_LIB__PATH $TEST_MAIN__D/$ISM330DHCX_LIB__F
    cd $TEST_MAIN__D
    remove_fs_entity $CMAKE_BUILD__D


    # compile

    gcc $MAIN__C            \
        -I $REPO__D         \
        $ISM330DHCX_LIB__F  \
        -o $OUT

fi


## Install Test

if [[ $ARG_TEST_INSTALL -eq 1 ]]; then

    LIB_INSTALL__D="/usr/local"

    sudo cmake --install $CMAKE_BUILD__D --prefix $LIB_INSTALL__D
    rm -rf $CMAKE_BUILD__D


    # compile

    gcc $MAIN__C                         \
        -DISM330DHCX_USE_SYSTEM_INCLUDES \
        -I $LIB_INSTALL__D/include       \
        -L $LIB_INSTALL__D/lib           \
        -lism330dhcx                     \
        -o $OUT


    # remove installed library

    remove_fs_entity $LIB_INSTALL__D/include/ism330dhcx    1
    remove_fs_entity $LIB_INSTALL__D/lib/ISM330DHCX_LIB__F 1
    remove_fs_entity $LIB_INSTALL__D/lib/libism330dhcx.so  1
    remove_fs_entity $LIB_INSTALL__D/lib/cmake/ism330dhcx* 1
fi


## Result

if [[ $? -ne 0 ]]; then
    echo_status $RED "FAILED"
    exit_script 3
fi

if [[ ! -f $OUT ]]; then
    echo_status $RED "Executable not found. Compilation failed."
    exit_script 4
fi

chmod +x $OUT

RESULT="$($OUT)"

if [[ $RESULT =~ "Hello, World!\n" ]]; then
    echo_status $RED "FAILED"
else
    echo_status $GREEN "PASSED"
fi


## Clean-up

exit_script 0
