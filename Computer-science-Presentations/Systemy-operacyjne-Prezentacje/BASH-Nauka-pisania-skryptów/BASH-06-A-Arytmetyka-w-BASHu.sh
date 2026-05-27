#!/bin/bash

var1=$(( 2 + 3 ))

echo "var1 == $var1."

var2=$(( $var1 + 5 ))

echo "var2 == $var2."

# Czemu raz $(( )) a raz (( )).
(( var2++ ))

echo "var2 == $var2."

(( var2 += 4 ))
echo "var2 == $var2."

var2=$(( 4 * 5 ))
echo "var2 == $var2."

echo ${#var1}
