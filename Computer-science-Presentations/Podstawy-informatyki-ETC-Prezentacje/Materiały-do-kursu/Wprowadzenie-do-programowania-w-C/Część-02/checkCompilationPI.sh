#!/bin/bash

# Script for checking if C files for "Podstawy informatyki" compiles and
# for saving their text output in .txt files.

# Importing functions used in this script.
source ../BASH-scripts/useful-functions-01.sh





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-04-A-Zmienne.c"
executable_output_file_name="prog-04-A.out"
save_output_text="true"
text_output_file_name="prog-04-A-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name  $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-04-B-Obliczenia-na-zmiennych-typu-int.c"
executable_output_file_name="prog-04-B.out"
save_output_text="true"
text_output_file_name="prog-04-B-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name  $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-04-C-O-nazwach-zmiennych.c"
executable_output_file_name="prog-04-C.out"
save_output_text="true"
text_output_file_name="prog-04-C-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name  $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-04-D-Zmienne-typu-double.c"
executable_output_file_name="prog-04-D.out"
save_output_text="true"
text_output_file_name="prog-04-D-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name  $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-04-E-Korzystanie-ze-zmiennych.c"
executable_output_file_name="prog-04-E.out"
save_output_text="true"
text_output_file_name="prog-04-E-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name  $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-04-F-Korzystanie-ze-zmiennych.c"
executable_output_file_name="prog-04-F.out"
save_output_text="true"
text_output_file_name="prog-04-F-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name  $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-04-G-Potęgowanie-w-języku-C.c"
executable_output_file_name="prog-04-G.out"
save_output_text="true"
text_output_file_name="prog-04-G-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name  $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-04-H-Potęgowanie-w-języku-C.c"
executable_output_file_name="prog-04-H.out"
save_output_text="true"
text_output_file_name="prog-04-H-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name  $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-04-I-Problemy-z-typami-zmiennych.c"
executable_output_file_name="prog-04-I.out"
save_output_text="true"
text_output_file_name="prog-04-I-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name  $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-05-A-Błędy-w-języku-C-Część-03.c"
executable_output_file_name="prog-05-A.out"
save_output_text="true"
text_output_file_name="prog-05-A-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name  $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi
