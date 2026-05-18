#!/usr/bin/awk -f

BEGIN {
    array1[1] = 10;
    array1[2] = 20;
    array1[3] = 30;

    i = 1;
    printf "array1[%d] == %d.\n", i, array1[i];
    i = 2;
    printf "array1[%d] == %d.\n", i, array1[i];
    i = 3;
    printf "array1[%d] == %d.\n\n", i, array1[i];

    printf "To niestety też działa.\n";

    i = 1;
    printf "array2[%d] == %d.\n", i, array2[i];
    i = 2;
    printf "array2[%d] == %d.\n", i, array2[i];
    i = 3;
    printf "array2[%d] == %d.\n\n", i, array2[i];

    array3["Giraud"] = "Jean";
    array3["Glaeser"] = "Georges";
    array3["Jouffret"] = "Esprit";

    key = "Giraud";
    printf "array3[%s] == %s.\n", key, array3[key];
    key = "Glaeser";
    printf "array3[%s] == %s.\n", key, array3[key];
    key = "Jouffret";
    printf "array3[%s] == %s.\n\n", key, array3[key];
}
