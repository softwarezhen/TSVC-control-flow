#!/bin/bash
make clean
make
echo "===novec==="
bin/tsvc-novec > novec-run
echo "===vec==="
bin/tsvc-vec > vec-run