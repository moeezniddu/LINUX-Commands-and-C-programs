#!/bin/bash

echo "Enter the first number:"
read num1
echo "Enter the second number:"
read num2

echo "Enter an operator (+, -, *, /):"
read op

case $op in
  "+")
    result=$(($num1 + $num2))
    ;;
  "-")
    result=$(($num1 - $num2))
    ;;
  "*")
    result=$(($num1 * $num2))
    ;;
  "/")
    if [ $num2 -ne 0 ]; then
      result=$(echo "$num1 / $num2" | bc)
    else
      echo "Error: Division by zero is not allowed."
      exit 1
    fi
    ;;
  *)
    echo "Error: Invalid operator."
    exit 1
    ;;
esac

echo "The result is: $result"

