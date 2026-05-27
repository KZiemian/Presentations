#!/bin/bash

let var1=2+3

echo "var1 == $var1."

# Błąd składni.
# let var2=2 + 3

# let "var2 == $var2."

let "var3 = 3 + 4"

echo "var3 == $var3."

# Syntax error.
# var3++;

echo "var3 == $var3."

let var3++
echo "var3 == $var3."

let "var3 = 10"

let var3--

echo "var3 == $var3."



let var4=2+3

echo "var4 == $var4."


let var4=2-3

echo "var4 == $var4."


let var4=2*3

echo "var4 == $var4"


let var4=8/3

echo "var4 == $var4."


let var4=11%5

echo "var4 == $var4."
