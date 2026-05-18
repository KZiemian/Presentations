#!/bin/bash

# echo "Z kim rozmawiam?"

# read your_name

# echo "Witaj, $your_name."

# man read

# -p - prompt

# echo "Z kim rozmawiam?"
# read -p "Przedstaw się: " your_name

# echo "Witaj $your_name."

# -s - silent. Nie będzie pokazywany tekst, który wpisujemy.

echo "Z kim rozmawiam?"
read -s -p "Przedstaw się: " your_name
# Pusta linia, by tekst lepiej wyglądał.
echo ""
echo "Witaj $your_name."


# https://ryanstutorials.net/bash-scripting-tutorial/bash-input.php
# echo Thankyou $uservar we now have your login details
# Thankyou -> Thank you
