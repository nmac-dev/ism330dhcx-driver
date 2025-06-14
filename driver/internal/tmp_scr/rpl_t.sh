#!/bin/bash

SRC_F=$1

type_def_s="typedef struct[[:space:]]*"
type_t="(_ism330dhcx_rm_.*_s)[[:space:]]*;"

structs=($(sed -En "s/$type_t/\1/p" "$SRC_F"))

for _s in "${structs[@]}"; do

    sed -Ei "
        0,/$type_def_s$/ {
            s/^(.*)(_ism330dhcx_rm_.*)(_s)[[:space:]]*;$/\1\2_t;/
        }
    " "$SRC_F"
done
