#!/usr/bin/awk -f

# echo 3 5 | awk -f Awk-04-B-if.awk

{
    var1 = $1;
    var2 = $2;

    if (var1 < var2) {
	printf "Pierwsza wartość %d, jest mniejsza od drugiej wartości %d.\n",
        var1, var2;
    } else {
       printf "Pierwsza wartość %d, jest większa bądź równa pierwszej wartość.\n", var1, var2;
    }
}
