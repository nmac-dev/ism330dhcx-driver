echo "-- Test Compile --"


## Variables

REPO__D="$(git rev-parse --show-toplevel)"
DRIVER__D="$REPO__D/ism330dhcx"
SRC__D="$DRIVER__D/src"


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


cd build
make

cp $ISM330DHCX__LIB/libism330dhcx.a $TEST_MAIN__D/ism330dhcx.a
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
unlink $ISM330DHCX__LIB
rm     $ISM330DHCX__LIB.a
