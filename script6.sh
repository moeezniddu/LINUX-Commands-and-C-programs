#!/bin/bash


greeting="Hello, World!"
echo "Greeting: $greeting"


name="Waqar Afridi"
echo "Length of name: ${#name}"


firstName="Waqar"
lastName="Afridi"
fullName="${firstName} ${lastName}"
echo "Full Name: $fullName"


fullName2=""
fullName2+=$firstName
fullName2+=$lastName
echo "Full Name (alternative): $fullName2"

