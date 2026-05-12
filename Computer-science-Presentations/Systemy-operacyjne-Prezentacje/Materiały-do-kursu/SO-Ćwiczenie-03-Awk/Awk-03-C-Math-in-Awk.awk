#!/usr/bin/awk -f

BEGIN {
    var1 = 3;
    var2 = 4;

    printf "Instrukcja: var1 == %d.\n", var1;
    printf "var2 == %d.\n\n", var2;


    var3 = var1 + var2;

    printf "Instrukcja: var3 = var1 + var2;\n"
    printf "%d + %d == %d.\n\n", var1, var2, var3;


    var3 = var1 - var2;

    printf "Instrukcja: var3 = var1 - var2;\n";
    printf "%d - %d == %d.\n\n", var1, var2, var3;


    var3 = var1 * var2;

    printf "Instrukcja: var3 = var1 * var2;\n";
    printf "%d * %d == %d.\n\n", var1, var2, var3;


    var3 = var1 / var2;

    printf "Instrukcja: var3 = var1 / var2;\n";
    printf "%d / %d == %d.\n\n\n", var1, var2, var3;


    var1 = 0;

    printf "var1 == %d.\n\n", var1;

    var1 += 10;
    printf "Instrukcja: var1 += 10;\n";
    printf "var1 == %d.\n\n", var1;

    var1 -= 3;
    printf "Instrukcja: var1 -= 3;\n";
    printf "var1 == %d.\n\n", var1;

    var1 *= 2;
    printf "Instrukcja: var1 *= 2;\n";
    printf "var1 == %d.\n\n", var1;

    var1 /= 3;

    printf "Instrukcja: var1 /= 3;\n";
    printf "var1 == %d.\n", var1;
}
