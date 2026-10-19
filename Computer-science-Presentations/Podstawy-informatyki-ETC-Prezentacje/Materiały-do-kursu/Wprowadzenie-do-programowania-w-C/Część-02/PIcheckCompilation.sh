#!/bin/bash

# Script for checking if C files for "Podstawy informatyki" compiles. And
# for saving their text output in .txt files.



# "PI-03-A-Błędy-w-języku-C-Część-01.c" This files ilustating various erros,
# and by design it doesn't compile.


c_file_name="PI-04-A-Zmienne.c"
text_output_file="PI-04-A-Text-output.txt"

gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
compilation_status=$?

if [[ $compilation_status -eq 0 ]]; then
    echo "Successful compiled: $c_file_name."

    ./prog.out >> $text_output_file
else
    echo "Problem with compiling $c_file_name."
fi



c_file_name="PI-04-B-Obliczenia-na-zmiennych-typu-int.c"
text_output_file="PI-04-B-Text-output.txt"

gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
compilation_status=$?

if [[ $compilation_status -eq 0 ]]; then
    echo "Successful compiled: $c_file_name."

    ./prog.out >> $text_output_file
else
    echo "Problem with compiling $c_file_name."
fi



c_file_name="PI-04-C-O-nazwach-zmiennych.c"
text_output_file="PI-04-C-Text-output.txt"

gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
compilation_status=$?

if [[ $compilation_status -eq 0 ]]; then
    echo "Successful compiled: $c_file_name."

    ./prog.out >> $text_output_file
else
    echo "Problem with compiling $c_file_name."
fi



c_file_name="PI-04-D-Zmienne-typu-double.c"
text_output_file="PI-04-D-Text-output.txt"

gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
compilation_status=$?

if [[ $compilation_status -eq 0 ]]; then
    echo "Successful compiled: $c_file_name."

    ./prog.out >> $text_output_file
else
    echo "Problem with compiling $c_file_name."
fi



c_file_name="PI-04-E-Korzystanie-ze-zmiennych.c"
text_output_file="PI-04-E-Text-output.txt"

gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
compilation_status=$?

if [[ $compilation_status -eq 0 ]]; then
    echo "Successful compiled: $c_file_name."

    ./prog.out >> $text_output_file
else
    echo "Problem with compiling $c_file_name."
fi


c_file_name="PI-04-F-Korzystanie-ze-zmiennych.c"
text_output_file="PI-04-F-Text-output.txt"

gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
compilation_status=$?

if [[ $compilation_status -eq 0 ]]; then
    echo "Successful compiled: $c_file_name."

    ./prog.out >> $text_output_file
else
    echo "Problem with compiling $c_file_name."
fi



c_file_name="PI-04-G-Potęgowanie-w-języku-C.c"
text_output_file="PI-04-G-Text-output.txt"

gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
compilation_status=$?

if [[ $compilation_status -eq 0 ]]; then
    echo "Successful compiled: $c_file_name."

    ./prog.out >> $text_output_file
else
    echo "Problem with compiling $c_file_name."
fi



c_file_name="PI-04-H-Potęgowanie-w-języku-C.c"
text_output_file="PI-04-H-Text-output.txt"

gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
compilation_status=$?

if [[ $compilation_status -eq 0 ]]; then
    echo "Successful compiled: $c_file_name."

    ./prog.out >> $text_output_file
else
    echo "Problem with compiling $c_file_name."
fi



c_file_name="PI-04-I-Problemy-z-typami-zmiennych.c"
text_output_file="PI-04-I-Text-output.txt"

gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
compilation_status=$?

if [[ $compilation_status -eq 0 ]]; then
    echo "Successful compiled: $c_file_name."

    ./prog.out >> $text_output_file
else
    echo "Problem with compiling $c_file_name."
fi



c_file_name="PI-05-A-Błędy-w-języku-C-Część-03.c"
text_output_file="PI-04-I-Text-output.txt"

gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
compilation_status=$?

if [[ $compilation_status -eq 0 ]]; then
    echo "Successful compiled: $c_file_name."

    ./prog.out >> $text_output_file
else
    echo "Problem with compiling $c_file_name."
fi
