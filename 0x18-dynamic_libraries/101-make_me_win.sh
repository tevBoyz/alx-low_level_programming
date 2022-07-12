#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/tevBoyz/alx-low_level_programming/master/0x18-dynamic_libraries/modlib.so
export LD_PRELOAD=/tmp/modlib.so
