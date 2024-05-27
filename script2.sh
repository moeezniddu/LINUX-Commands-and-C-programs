#!/bin/bash


echo -n "Enter a number: "
read num


if (( num > 0 )); then
    echo "The number $num is positive."
    
elif (( num < 0 )); then
    echo "The number $num is negative."
else
    echo "The number $num is zero."
fi

