#!/bin/bash

# Script for checking if C files for "Podstawy informatyki" compiles and
# for saving their text output in .txt files.

# Importing functions used in this script.
source ../BASH-scripts/useful-functions-01.sh





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-13-A-Czytanie-z-pliku-z-użyciem-pętli.c"
executable_output_file_name="prog-13-A.out"
save_output_text="true"
text_output_file_name="Text-output-13-A.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-13-C-Czytanie-z-pliku-z-użyciem-pętli.c"
executable_output_file_name="prog-13-C.out"
save_output_text="true"
text_output_file_name="Text-output-13-C.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-13-D-Przetwarzanie-danych-z-pliku.c"
executable_output_file_name="prog-13-D.out"
save_output_text="true"
text_output_file_name="Text-output-13-D.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-14-A-Błędy-w-języku-C-Część-06.c"
executable_output_file_name="prog-14-A.out"
save_output_text="true"
text_output_file_name="Text-output-14-A.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-14-B-Błędy-w-języku-C-Część-07.c"
executable_output_file_name="prog-14-B.out"
save_output_text="true"
text_output_file_name="Text-output-14-B.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-14-C-Błędy-w-języku-C-Część-08.c"
executable_output_file_name="prog-14-C.out"
save_output_text="true"
text_output_file_name="Text-output-14-C.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-14-D-Błędy-w-języku-C-Część-09.c"
executable_output_file_name="prog-14-D.out"
save_output_text="true"
text_output_file_name="Text-output-14-D.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-14-E-Błędy-w-języku-C-Część-10.c"
executable_output_file_name="prog-14-E.out"
save_output_text="true"
text_output_file_name="Text-output-14-E.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-14-F-Błędy-w-języku-C-Część-11.c"
executable_output_file_name="prog-14-F.out"
save_output_text="true"
text_output_file_name="Text-output-14-F.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi
