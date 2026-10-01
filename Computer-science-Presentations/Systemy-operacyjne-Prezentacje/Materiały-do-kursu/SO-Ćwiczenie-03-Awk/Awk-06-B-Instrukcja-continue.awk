#!/usr/bin/awk -f

BEGIN {
    for (i = 0; i < 20; i++) {
	if (i % 2 == 0)	{
	    printf "%d jest liczbą parzystą.\n", i;
	}
    }
}
