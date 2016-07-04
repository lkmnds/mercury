#!/bin/bash

for file in "."/*.mer
do
    xxd -i < $file > $file.xxd
    echo ', 0' >> $file.xxd
done
