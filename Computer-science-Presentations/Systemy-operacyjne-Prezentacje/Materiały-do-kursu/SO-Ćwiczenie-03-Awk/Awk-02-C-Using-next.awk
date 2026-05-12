#!/usr/bin/awk -f

NR == 1 {
    next;
}

$2 == "car" {
    printf "Car: %s.\n", $1;
    next;
}

$3 > 20 {
    printf "More than 20: %s.\n", $1;
    next;
}
