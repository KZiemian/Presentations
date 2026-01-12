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



# Program PI-01-B-Program-pokazowy-w-C.c doesn't output text, that requiers
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



c_file_name="PI-02-B-Liczby.c"
text_output_file="PI-02-B-Text-output.txt"

gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
compilation_status=$?

if [[ $compilation_status -eq 0 ]]; then
    ./prog.out >> $text_output_file
else
    echo "Problem with compiling $c_file_name."
fi



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



# c_file_name="PI-04-A-Operatory-porównania.c"
# text_output_file="PI-04-A-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi



# Program from file "PI-04-B-Nieszczęsna-funkcja-scanf.c",
# "PI-04-C-Jeszcze-o-nieszczęsnej-funkcji-scanf.c",
# "PI-04-D-Sterowanie-programem.c", "PI-04-E-Różne-wersje-ifa.c"
# are taking input from the user, using problematic function scanf().
# As such, when prog.out will be run it will block the script.

# c_file_name="PI-04-B-Nieszczęsna-funkcja-scanf.c"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -ne 0 ]]; then
#     echo "Problem with compiling $c_file_name."
# fi



# c_file_name="PI-04-C-Jeszcze-o-nieszczęsnej-funkcji-scanf.c"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -ne 0 ]]; then
#     echo "Problem with compiling $c_file_name."
# fi




# c_file_name="PI-04-D-Sterowanie-programem.c"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -ne 0 ]]; then
#     echo "Problem with compiling $c_file_name."
# fi



# c_file_name="PI-04-E-Różne-wersje-ifa.c"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -ne 0 ]]; then
#     echo "Problem with compiling $c_file_name."
# fi



# c_file_name="PI-04-F-Wyrażenia-i-instrukcje.c"
# text_output_file="PI-04-F-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi




# Program from file "PI-04-G-Przykładowy-program-01.c" also take
# input from the user.

# c_file_name="PI-04-G-Przykładowy-program-01.c"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -ne 0 ]]; then
#     echo "Problem with compiling $c_file_name."
# fi


# ???
# go_file_name="PI-05-A-Zmienne-boolowskie-w-Go.go"

# go run $go_file_name >> PI-05-A-Text-output.txt
# running_status=$?

# if [[ $running_status -ne 0 ]]; then
#     echo "Problem with running $go_file_name."
# fi


# ????
# c_file_name="PI-05-B-Zmienne-pseudoboolowskie-w-C.c"
# text_output_file="PI-05-B-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi


# ????
# c_file_name="PI-05-C-Zmienne-pseudoboolowskie-i-stdbool-h.c"
# text_output_file="PI-05-C-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fin





c_file_name="PI-13-A-Tablice.c"
text_output_file="PI-13-A-Text-output.txt"

gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
compilation_status=$?

if [[ $compilation_status -eq 0 ]]; then
    ./prog.out >> $text_output_file
else
    echo "Problem with compiling $c_file_name."
fi
