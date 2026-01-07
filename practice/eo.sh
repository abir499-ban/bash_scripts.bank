#!/usr/bin/bash

read -p "enter a number" num

if [[ $((num % 2)) -eq 0 ]]
then
    echo "$num is even"
else
    echo "$num is odd"
fi

exit 0