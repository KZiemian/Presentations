#!/bin/bash

var1=2
var2=3

let "var3 = var1 + var3"

echo "$var1 + $var2 == $var3."

let "var3 = var1 - var2"

echo "$var1 - $var2 == $var3."

let "var3 = var1 * var2"

echo "$var1 * $var2 == $var3."

let "var3 = var1 / var2"

echo "$var1 / $var2 == $var3."

# https://ryanstutorials.net/bash-scripting-tutorial/bash-arithmetic.php
# \*, / ->?? *, /
# Bash -> BASH
# command date) -> command date).
# eg. if I ran -> Eg. if I ran

echo -n "expr 3 + 4 == "
expr 3 + 4

echo -n "expr \"3 + 4\" == "
expr "3 + 4"

# Syntax error
# expr 2 * 5
echo -n "expr 2 \* 5 == "
expr 2 \* 5

echo -n "expr \"2 * 5\" == "
expr "2 * 5"

echo -n "expr 10 % 3 == "
expr 11 % 2

var1=$( expr 10 - 3 )
echo "var1 == $var1."
