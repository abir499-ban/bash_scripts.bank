#! /usr/bin/bash

read -p "enter a number" N

a=0
b=1
c=$((a+b))

echo "Fibonacci series"
echo $a 
echo $b 

i=2

while [[ $i -le $N ]]
do 
    echo $c
    a=$b 
    b=$c 
    c=$((a+b))
    i=$((i+1))
done