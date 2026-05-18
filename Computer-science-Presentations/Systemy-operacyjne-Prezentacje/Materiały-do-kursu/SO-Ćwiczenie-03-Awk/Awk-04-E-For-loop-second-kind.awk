#!/usr/bin/awk -f

BEGIN {
    array1["Giraud"] = "Jean";
    array1["Glaeser"] = "Georges";
    array1["Jouffret"] = "Esprit";

    for (key in array1) {
	printf "array1[%s] == %s.\n", key, array1[key];
    }
}
