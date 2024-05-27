#!/bin/bash

# Declaring an array
myArray=("apple" "banana" "cherry")

# Accessing elements of the array
echo "First element: ${myArray[0]}"
echo "Second element: ${myArray[1]}"
echo "Third element: ${myArray[2]}"

# Iterating over the array
for fruit in "${myArray[@]}"; do
    echo "Fruit: $fruit"
done

# Adding an element to the array
myArray+=("date")

# Printing the updated array
echo "Updated array: ${myArray[@]}"

