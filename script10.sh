#!/bin/bash

# Define a function named greet that takes one parameter
greet() {
    # The parameter is accessed using $1
    echo "Hello, $1!"
}

# Call the function with a parameter
greet "Waqar"
