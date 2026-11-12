#!/bin/bash

# Script for cleaning up files with excecutbles of C programs and text
# output produced by this executables.


# Importing functions used in this script.
source ../BASH-scripts/useful-functions-01.sh





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-15-A.out"
text_file_to_clean_up="Text-output-15-A.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-15-B.out"
text_file_to_clean_up="Text-output-15-B.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-16-A.out"
text_file_to_clean_up="Text-output-16-A.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-16-B.out"
text_file_to_clean_up="Text-output-16-B.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-16-C.out"
text_file_to_clean_up="Text-output-16-C.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-17-A.out"
text_file_to_clean_up="Text-output-17-A.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-17-B.out"
text_file_to_clean_up="Text-output-17-B.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-17-C.out"
text_file_to_clean_up="Text-output-17-C.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-17-D.out"
text_file_to_clean_up="Text-output-17-D.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-10-D.out"
text_file_to_clean_up="prog-10-D-Text-output.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-08-B.out"
text_file_to_clean_up="prog-08-B-Text-output.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi
