#!/usr/bin/awk -f

BEGIN {
    numberOfItems = 0;
}

NR == 1 {
    next;
}

{
    numberOfItems += $3;
}

END {
    printf "Całkowita liczba przedmiotów do sprzedania: %d.\n", numberOfItems;
}
