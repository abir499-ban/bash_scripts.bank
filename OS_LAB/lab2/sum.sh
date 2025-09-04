#! /usr/bin/bash

read -p "enter a number" N

s=0

for ((i=1; i<=N; i++))
do
    s=$((s+i))
done 

echo "Sum = $s"