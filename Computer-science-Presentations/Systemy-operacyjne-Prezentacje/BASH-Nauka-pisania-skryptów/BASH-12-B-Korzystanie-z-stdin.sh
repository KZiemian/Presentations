#!/bin/bash

input=$(cat /dev/stdin)

for elem in $input; do
    echo "elem == $elem"
done
