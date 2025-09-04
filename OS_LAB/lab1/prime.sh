#!/usr/bin/bash


read -p "Enter a number" num

c=0

for ((i=1 ; i<=num ; i++));
do
    if [[ $((num%i)) -eq 0 ]]
    then
        ((c++))
    fi 
done

if [[ $c -eq 2 ]]
then
    echo "$num is prime"
else
    echo "$num is not prime"
fi