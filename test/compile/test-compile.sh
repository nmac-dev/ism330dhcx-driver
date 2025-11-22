echo "-- Test Compile --"

REPO__DIR="$(git rev-parse --show-toplevel)"


## Libraries

C_NSTD__LIB="c-nstd"
ISM330DHCX__LIB="ism330dhcx"

ln -sf "$REPO__DIR/driver/$C_NSTD__LIB" "$C_NSTD__LIB"
ln -sf "$REPO__DIR/driver"              "$ISM330DHCX__LIB"


## Main

TEST_MAIN__DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
MAIN_C="test_compile.c"
OUT="test_out"


## Compile Test

gcc $MAIN_C             \
    -I $TEST_MAIN__DIR  \
    -o $OUT

chmod +x $OUT

RESULT="$(./$OUT)"

if [[ $RESULT =~ "Hello, World!\n" ]]; then
    echo "FAILED"
else
    echo "PASSED"
fi


## Clean-up

rm     $OUT
unlink $C_NSTD__LIB
unlink $ISM330DHCX__LIB
