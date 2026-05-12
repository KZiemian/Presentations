#!/usr/bin/awk -f

BEGIN {
    printf "%d + %d == %d.\n", 2, 3, 2 + 3;
    printf "%d - %d == %d.\n", 2, 3, 2 - 3;
    printf "%d * %d == %d.\n", 2, 3, 2 * 3;
    printf "%d / %d == %d.\n\n", 2, 3, 2 / 3;

    printf "%d / %d równa się %d, bo tak działa komputer.\n", 2, 3, 2 / 3;
    printf "Czemu życie nie mogłoby być proste?\n";
}
