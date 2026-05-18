#!/bin/bash

hello_1() {
    echo "Witaj, tu funkcja hello_1()."
}

# W BASHu nawiasy funkcji są tylko dla ozdoby.

hello_1

function hello_2 {
    echo "Witaj, tu funkcja hello_2()."
}

hello_2

function hello_3() {
    echo "Witaj, tu funkcja hello_3()."
}

hello_3

# https://ryanstutorials.net/bash-scripting-tutorial/bash-functions.php
# ( the actual function -> (the actual function
