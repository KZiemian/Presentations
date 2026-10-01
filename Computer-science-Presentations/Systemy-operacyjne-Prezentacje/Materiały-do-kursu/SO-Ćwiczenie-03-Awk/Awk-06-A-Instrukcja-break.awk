#!/usr/bin/awk -f

BEGIN {
    for (i = 0; ; i++) {
	printf "i == %d.\n", i;

	if (i == 5) {
	    print "Zmienna i jest równa 5, więc kończymy.";
            break;
	}
    }
}
