#!/bin/bash

# Script for cleaning up files with excecutbles of C programs and text
# output produced by this executables.

# Importing functions used in this script.
source ../BASH-scripts/useful-functions-01.sh





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-01-A.out"
text_file_to_clean_up="prog-01-A-Text-output.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-01-B.out"
text_file_to_clean_up="prog-01-B-Text-output.txt"



if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-02-A.out"
text_file_to_clean_up="prog-02-A-Text-output.txt"



if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-02-B.out"
text_file_to_clean_up="prog-02-B-Text-output.txt"



if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-02-C.out"
text_file_to_clean_up="prog-02-C-Text-output.txt"



if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-02-D.out"
text_file_to_clean_up="prog-02-D-Text-output.txt"



if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-02-E.out"
text_file_to_clean_up="prog-02-E-Text-output.txt"



if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-02-F.out"
text_file_to_clean_up="prog-02-F-Text-output.txt"



if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-03-B.out"
text_file_to_clean_up="prog-03-B-Text-output.txt"



if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi
