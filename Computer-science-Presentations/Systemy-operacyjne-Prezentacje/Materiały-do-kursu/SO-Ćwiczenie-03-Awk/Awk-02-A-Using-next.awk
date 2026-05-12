#!/usr/bin/awk -f

$2 == "car" {
    printf "Car: %s.\n", $1;
}

$3 > 30 {
    printf "Less than 15: %s.\n", $1;
}
