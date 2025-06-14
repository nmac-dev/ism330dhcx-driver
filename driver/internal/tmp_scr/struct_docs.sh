#!/bin/bash

SRC_F=$1

_spc="[[:space:]]"
_d="[[:digit:]]"

type_doc="\/\/\/$_spc*@struct$_spc+"
type_reg="typedef$_spc+reg_u$_d+_s$_spc+(_ism330dhcx_rm_.*)_s;"

structs=($(sed -En "s/$type_reg/\1/p" "$SRC_F"))

for _s in "${structs[@]}"; do

    sed -Ei "
        0,/$type_doc($_s)_s$_spc*$/ {
            s/$type_doc($_s)_s$/\/\/\/ @typedef \1_t/
        }
    " "$SRC_F"

done
