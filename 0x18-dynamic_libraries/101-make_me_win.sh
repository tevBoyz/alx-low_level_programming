#!/bin/bash
wget -P .. https://github.com/tevBoyz/alx-low_level_programming/blob/master/0x18-dynamic_libraries/modlib.so
export LD_PRELOAD="$PWD/../modlib.so"
