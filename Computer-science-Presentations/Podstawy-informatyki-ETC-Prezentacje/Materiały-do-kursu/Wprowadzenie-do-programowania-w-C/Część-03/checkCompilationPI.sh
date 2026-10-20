#!/bin/bash

# Script for checking if C files for "Podstawy informatyki" compiles and
# for saving their text output in .txt files.

# Importing functions used in this script.
source ../BASH-scripts/useful-functions-01.sh





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-06-A-Czym-jest-instrukcja.c"
executable_output_file_name="prog-06-A.out"
save_output_text="true"
text_output_file_name="prog-06-A-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-06-B-Porównanie-a-przypisanie.c"
executable_output_file_name="prog-06-B.out"
save_output_text="true"
text_output_file_name="prog-06-B-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-06-C-Operatory-porównania.c"
executable_output_file_name="prog-06-C.out"
save_output_text="true"
text_output_file_name="prog-06-C-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-06-D-Nieszczęsna-funkcja-scanf.c"
executable_output_file_name="prog-06-D.out"
save_output_text="false"



if [[ $run_code == "true" ]]; then
    echo -e "Program in file $c_file_name use dangerous scanf()" \
	 "function, to take user input. So producing output file" \
	 "for it, requires user action.\n"

    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-06-E-Jeszcze-o-nieszczęsnej-funkcji-scanf.c"
executable_output_file_name="prog-06-E.out"
save_output_text="false"



if [[ $run_code == "true" ]]; then
    echo -e "Program in file $c_file_name use dangerous scanf()" \
	 "function, to take user input. So producing output file" \
	 "for it, requires user action.\n"

    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-06-F-Sterowanie-programem.c"
executable_output_file_name="prog-06-F.out"
save_output_text="false"



if [[ $run_code == "true" ]]; then
    echo -e "Program in file $c_file_name use dangerous scanf()" \
	 "function, to take user input. So producing output file" \
	 "for it, requires user action.\n"

    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-06-G-Wyrażenia-i-orzeczenia.c"
executable_output_file_name="prog-06-G.out"
save_output_text="true"
text_output_file_name="prog-06-G-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-07-A-Różne-wersje-ifa.c"
executable_output_file_name="prog-07-A.out"
save_output_text="false"



if [[ $run_code == "true" ]]; then
    echo -e "Program in file $c_file_name use dangerous scanf()" \
	 "function, to take user input. So producing output file" \
	 "for it, requires user action.\n"

    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-07-B-Przykładowy-program-01.c"
executable_output_file_name="prog-07-B.out"
save_output_text="false"



if [[ $run_code == "true" ]]; then
    echo -e "Program in file $c_file_name use dangerous scanf()" \
	 "function, to take user input. So producing output file" \
	 "for it, requires user action.\n"

    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-08-A-Błędy-w-języku-C-Część-04.c"
executable_output_file_name="prog-08-A.out"
save_output_text="false"



if [[ $run_code == "true" ]]; then
    echo -e "Program in file $c_file_name use dangerous scanf()" \
	 "function, to take user input. So producing output file" \
	 "for it, requires user action.\n"

    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-08-B-Błędy-w-języku-C-Część-05.c"
executable_output_file_name="prog-08-B.out"
save_output_text="false"



if [[ $run_code == "true" ]]; then
    echo -e "Program in file $c_file_name use dangerous scanf()" \
	 "function, to take user input. So producing output file" \
	 "for it, requires user action.\n"

    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi
