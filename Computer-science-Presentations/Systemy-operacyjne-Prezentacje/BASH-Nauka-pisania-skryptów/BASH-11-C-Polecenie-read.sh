#!/bin/bash

echo -n "Podaj liczbę całkowitą: "
read number1

echo -n "Podaj liczbę całkowitą, większą od poprzedniej: "
read number2

echo "$number1 + $number2 == $(($number + $number2))"
