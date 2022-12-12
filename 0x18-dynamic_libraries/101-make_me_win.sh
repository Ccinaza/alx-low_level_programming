#!/bin/bash
wget -P /tmp https://github.com/Ccinaza/alx-low_level_programming/master/0x18-dynamic_libraries/putshack.so
export LD_PRELOAD=/tmp/nrandom.so
