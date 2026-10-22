#!/bin/bash

# Script for cleaning up files with excecutbles of C programs and text
# output produced by this executables.

# Importing functions used in this script.
source ../BASH-scripts/useful-functions-01.sh





##################################################
run_code="true"
# run_code="false"
text_file_to_clean_up="prog-03-A-Text-output.txt"


if [[ $run_code == "true" && -e $text_file_to_clean_up ]]; then
    echo "File exists: $text_file_to_clean_up."

    rm $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
text_file_to_clean_up="prog-03-B-Text-output.txt"


if [[ $run_code == "true" && -e $text_file_to_clean_up ]]; then
    echo "File exists: $text_file_to_clean_up."

    rm $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
text_file_to_clean_up="prog-03-C-Text-output.txt"


if [[ $run_code == "true" && -e $text_file_to_clean_up ]]; then
    echo "File exists: $text_file_to_clean_up."

    rm $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
text_file_to_clean_up="prog-03-D-Text-output.txt"


if [[ $run_code == "true" && -e $text_file_to_clean_up ]]; then
    echo "File exists: $text_file_to_clean_up."

    rm $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
text_file_to_clean_up="prog-03-E-Text-output.txt"


if [[ $run_code == "true" && -e $text_file_to_clean_up ]]; then
    echo "File exists: $text_file_to_clean_up."

    rm $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
text_file_to_clean_up="prog-04-A-Text-output.txt"


if [[ $run_code == "true" && -e $text_file_to_clean_up ]]; then
    echo "File exists: $text_file_to_clean_up."

    rm $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
text_file_to_clean_up="prog-04-B-Text-output.txt"


if [[ $run_code == "true" && -e $text_file_to_clean_up ]]; then
    echo "File exists: $text_file_to_clean_up."

    rm $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
text_file_to_clean_up="prog-04-C-Text-output.txt"


if [[ $run_code == "true" && -e $text_file_to_clean_up ]]; then
    echo "File exists: $text_file_to_clean_up."

    rm $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
text_file_to_clean_up="prog-05-C-Text-output.txt"


if [[ $run_code == "true" && -e $text_file_to_clean_up ]]; then
    echo "File exists: $text_file_to_clean_up."

    rm $text_file_to_clean_up
fi
