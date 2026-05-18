echo "-- Test Compile --"


## Variables

REPO__D="$(git rev-parse --show-toplevel)"
DRIVER__D="$REPO__D/ism330dhcx"
SRC__D="$DRIVER__D/src"

exit_script() {

    if [[ -f $OUT ]]; then
        rm $OUT
    fi

    if [[ -f $ISM330DHCX__LIB.a ]]; then
        rm $ISM330DHCX__LIB.a
    fi

    if [[ -L $ISM330DHCX__LIB ]]; then
        unlink $ISM330DHCX__LIB
    fi

    exit 1
}

## Libraries

ISM330DHCX__LIB="ism330dhcx"

ln -sf "$DRIVER__D" "$ISM330DHCX__LIB"


## Sources

SRC__C=( "$SRC__D"/*.c )


## Main

TEST_MAIN__D="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
MAIN__C="$TEST_MAIN__D/test_compile.c"
OUT="$TEST_MAIN__D/test_out"


## CMake Build

mkdir -p build
cmake -S $REPO__D -B build
cmake --build build -j

sudo cmake --install build --prefix /usr/local
rm -rf build


## Compile Test

rm -f $ISM330DHCX__LIB

gcc $MAIN__C                         \
    -DISM330DHCX_USE_SYSTEM_INCLUDES \
    -I /usr/local/include            \
    -L /usr/local/lib                \
    -lism330dhcx                     \
    -o $OUT


if [[ $? -ne 0 ]]; then
    echo "FAILED"
    exit_script
    exit 1
fi

chmod +x $OUT

RESULT="$($OUT)"

if [[ $RESULT =~ "Hello, World!\n" ]]; then
    echo "FAILED"
else
    echo "PASSED"
fi


## Clean-up

exit_script
