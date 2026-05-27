#!/bin/bash

function funkcja_01() {
    var1=2
    var2=3

    echo "var1 == $var1."
    echo "var2 == $var2."

    var3=$(($var1 + $var2))

    echo "var3 == $var3."
}
