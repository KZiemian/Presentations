#!/bin/bash

# Script for checking if C files for "Podstawy informatyki" compiles
# and for saving their text output in .txt files.

c_file_name="PI-11-A-Funkcja-sleep.c"
text_output_file="PI-11-A-Text-output.txt"

gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
compilation_status=$?

if [[ $compilation_status -eq 0 ]]; then
    ./prog.out >> $text_output_file
else
    echo "Problem with compiling $c_file_name."
fi



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



# c_file_name="PI-02-B-Komentarze-w-kodzie-źródłowym.c"
# text_output_file="PI-02-B-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi



# c_file_name="PI-02-C-Pisanie-tekstu-na-ekranie.c"
# text_output_file="PI-02-C-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi



# c_file_name="PI-02-D-Stringi.c"
# text_output_file="PI-02-D-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi


# ########## Comments need change in the place with "????".
# c_file_name="PI-02-E-Liczby.c"
# text_output_file="PI-02-E-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi



# c_file_name="PI-02-F-Liczby-zmiennoprzecinkowe.c"
# text_output_file="PI-02-F-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi


# # "PI-03-A-Błędy-w-języku-C-Część-01.c" This files ilustating various erros,
# # and by design it doesn't compile.



# c_file_name="PI-03-B-Błędy-w-języku-C-Część-02.c"
# text_output_file="PI-03-B-Text-output.txt"

# gcc -ansi --std=c99 -pedantic $c_file_name -o prog.out
# compilation_status=$?

# if [[ $compilation_status -eq 0 ]]; then
#     ./prog.out >> $text_output_file
# else
#     echo "Problem with compiling $c_file_name."
# fi
