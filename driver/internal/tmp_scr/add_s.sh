#!/bin/bash

SRC_F=$1

type_def_s="typedef struct[[:space:]]*"
type_t="}[[:space:]]*(_ism330dhcx_rm_.*_s);"

structs=($(sed -En "s/$type_t/\1/p" "$SRC_F"))

for _s in "${structs[@]}"; do

    sed -Ei "
        0,/^typedef struct[[:space:]]*$/ {
            s/^typedef struct[[:space:]]*$/typedef struct ${_s}/
        }
    " "$SRC_F"
done

