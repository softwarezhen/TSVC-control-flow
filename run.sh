#!/bin/bash
make clean
make
echo "===novec==="
bin/tsvc-novec
echo "===vec==="
bin/tsvc-vec