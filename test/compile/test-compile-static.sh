echo "-- Test Compile --"


## Variables

REPO__D="$(git rev-parse --show-toplevel)"
DRIVER__D="$REPO__D/driver"
SRC__D="$DRIVER__D/src"


## Libraries

C_NSTD__LIB="c-nstd"
ISM330DHCX__LIB="ism330dhcx"

ln -sf "$REPO__D/driver/$C_NSTD__LIB" "$C_NSTD__LIB"
ln -sf "$REPO__D/driver"              "$ISM330DHCX__LIB"


## Sources

# Compile all driver source files so new modules are picked up automatically
SRC__C=( "$SRC__D"/*.c )


## Main

TEST_MAIN__D="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
MAIN__C="$TEST_MAIN__D/test_compile_static.c"
OUT="$TEST_MAIN__D/test_out"


## CMake Build

mkdir -p build
cmake -S $REPO__D -B build
cmake --build build -j


cd build
make

cp driver/libism330dhcx.a $TEST_MAIN__D/ism330dhcx.a
cd $TEST_MAIN__D
rm -rf build


## Compile Test

ls $ISM330DHCX__LIB

gcc    $MAIN__C            \
    -I $ISM330DHCX__LIB    \
       $ISM330DHCX__LIB.a  \
    -o $OUT


if [[ $? -ne 0 ]]; then
    echo "FAILED"
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

rm     $OUT
unlink $C_NSTD__LIB
unlink $ISM330DHCX__LIB
rm     $ISM330DHCX__LIB.a
