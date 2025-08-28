#!/usr/bin/bash


read -p "enter first float number" num1
read -p "enter second float number" num2

product=$(echo "$num1 * $num2" | bc -l)

echo "Product is $product"
