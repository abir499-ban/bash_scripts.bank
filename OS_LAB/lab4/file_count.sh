#!/usr/bin/bash

for file in *.c
do
    if [ ! -f $file ]
    then
        echo "not a valid file"
    else
        wc -m $file
        wc -w $file
    fi
done

exit 0

# output:
# 920 FCFS.c
# 133 FCFS.c