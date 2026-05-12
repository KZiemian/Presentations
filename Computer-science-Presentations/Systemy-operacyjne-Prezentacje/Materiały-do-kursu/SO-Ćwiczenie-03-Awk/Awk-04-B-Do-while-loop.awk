#!/usr/bin/awk -f

BEGIN {
    i = 1;

    do {
	printf "%d^2 == %d.\n", i, i * i;

	i += 1;
    } while (i <= 10)
}
