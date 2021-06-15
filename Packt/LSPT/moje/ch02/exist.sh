#!/bin/bash

# Check if the user supplied exactly one argument
if [ "$#" -ne 1 ]; then
    echo "You must supply exactly one argument."
    echo "Example: $0 /etc"
    exit 1
fi

# Check if the file/directory exists
test -e "$1"
if [ "$?" -eq 0 ]; then
    echo "File or directory exist"
elif [ "$?" -eq 1 ]; then
    echo "File or directory does not exist"
    exit 3
else
    echo "Unknown return value from test..."
    exit 1 # Unknown error
fi

exit 0

