#!/usr/bin/bash

read -p "Enter first number" num1
read -p "Enter second number" num2

diff=$((num1 - num2))
quotient=$((num1 / num2))

echo "Difference is $diff"
echo "Quotient is $quotient"

exit 0