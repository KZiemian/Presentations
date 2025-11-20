#!/bin/bash

# Script for checking if C files for "Podstawy informatyki" compiles. And
# for saving their text output in .txt files.

# c_file_name="PI-01-A-Program-pokazowy-w-C.c"
# text_output_file="PI-01-A-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi



# Program PI-01-B-Program-pokazowy-w-C.c doesn't output text, which requiers
# checking.



# c_file_name="PI-02-A-Hello-World.c"
# text_output_file="PI-02-A-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi



# c_file_name="PI-02-B-Liczby.c"
# text_output_file="PI-02-B-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi



# c_file_name="PI-02-C-Liczby-zmiennoprzecinkowe.c"
# text_output_file="PI-02-C-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi



# c_file_name="PI-03-A-Zmienne.c"
# text_output_file="PI-03-A-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi



# c_file_name="PI-03-B-Obliczenia-na-zmiennych-typu-int.c"
# text_output_file="PI-03-B-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi



# c_file_name="PI-03-C-O-nazwach-zmiennych.c"
# text_output_file="PI-03-C-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi



# c_file_name="PI-03-D-Zmienne-typu-double.c"
# text_output_file="PI-03-D-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi



# c_file_name="PI-03-E-Korzystanie-ze-zmiennych.c"
# text_output_file="PI-03-E-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi



# c_file_name="PI-03-F-Korzystanie-ze-zmiennych.c"
# text_output_file="PI-03-F-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi



# c_file_name="PI-03-G-Porównanie-a-przypisanie.c"
# text_output_file="PI-03-G-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi



# c_file_name="PI-03-H-Problemy-z-typami-zmiennych.c"
# text_output_file="PI-03-H-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi



c_file_name="PI-04-A-Operatory-porównania.c"
text_output_file="PI-04-A-Text-output.txt"

gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
compilation_status=$?

if [[ $compilation_status -eq 0 ]]; then
    ./prog.out >> $text_output_file
else
    echo "Problem with compiling $c_file_name."
fi



# File"PI-04-B-Nieszczęsna-funkcja-scanf.c" take input for the user,
# using problematic function scanf(). As such, when prog.out will be run
# it will block the script.

# c_file_name="PI-04-B-Nieszczęsna-funkcja-scanf.c"
# text_output_file="PI-04-B-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi
