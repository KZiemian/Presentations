#!/usr/bin/awk -f

BEGIN {
    for (i = 1; i <= 10; i++) {
	printf "%d^2 == %d.\n", i, i * i;
    }
}
