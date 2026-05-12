#!/usr/bin/awk -f

BEGIN {
    oddNumber = 3;
}

NR == oddNumber {
    printf "%d: %s.\n", oddNumber, $0;

    oddNumber += 2;
}
