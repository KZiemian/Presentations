#!/usr/bin/awk -f

$2 == "car" {
    printf "Car: %s.\n", $1;
}

$3 > 20 {
    printf "More than 20: %s.\n", $1;
}
