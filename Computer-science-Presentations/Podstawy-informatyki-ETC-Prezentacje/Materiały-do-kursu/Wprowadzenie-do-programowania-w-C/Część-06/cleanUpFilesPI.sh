#!/bin/bash

# Script for cleaning up files with excecutbles of C programs and text
# output produced by this executables.


# Importing functions used in this script.
source ../BASH-scripts/useful-functions-01.sh





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-13-A.out"
text_file_to_clean_up="Text-output-13-A.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-13-C.out"
text_file_to_clean_up="Text-output-13-C.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-13-D.out"
text_file_to_clean_up="Text-output-13-D.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-14-A.out"
text_file_to_clean_up="Text-output-14-A.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-14-B.out"
text_file_to_clean_up="Text-output-14-B.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-14-C.out"
text_file_to_clean_up="Text-output-14-C.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-14-D.out"
text_file_to_clean_up="Text-output-14-D.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-14-E.out"
text_file_to_clean_up="Text-output-14-E.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi





##################################################
run_code="true"
# run_code="false"
executable_file_to_clean_up="prog-14-F.out"
text_file_to_clean_up="Text-output-14-F.txt"


if [[ $run_code == "true" ]]; then
    clean_two_files $executable_file_to_clean_up $text_file_to_clean_up
fi
