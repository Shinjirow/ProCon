#!/usr/local/bin/bash

COMPILE="clang++ -std=c++14"
EXE="a.out"
IN="input.txt"

for c in {a..f}
do
    Lc=`echo ${c} | tr a-z A-Z`
    alias ${c}="${COMPILE} -o ${EXE} prob${Lc}.cpp && ./${EXE} < ${IN}; rm ${EXE}"
done
