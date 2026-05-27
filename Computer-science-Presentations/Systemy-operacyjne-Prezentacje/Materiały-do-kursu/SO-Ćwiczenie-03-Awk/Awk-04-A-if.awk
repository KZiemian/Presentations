#!/usr/bin/awk -f

BEGIN {
    var1 = 10;

    printf "Pierwsza instrukcja warunkowa if.\n\n";

    if (var1 > 7) {
	printf "var1 == %d, jest większa od 5.\n", var1;
    }



    printf "\n\n\nDruga instrukcja warunkowa if.\n\n";

    var1 = 3;
    # var1 = 8;

    if (var1 < 5) {
	printf "var1 == %d, jest mniejsza od 5.\n", var1;
    } else {
        printf "var1 == %d, jest większa bądź równa 5.\n", var1;
    }



    printf "\n\n\nTrzecia instrukcja warunkowa if.\n\n";

    # var1 = 9;
    # var1 = 12;
    var1 = 17;

    if (var1 < 10) {
	printf "var1 == %d, jest mniejsza od 10.\n", var1;
    } else if (var1 < 15) {
        printf "var1 == %d, jest większa bądź równy od 10 i mniejsza od 15.\n",
        var1;
    } else {
	printf "var1 == %d, jest większa bądź równy 15.\n", var1;
    }
}
