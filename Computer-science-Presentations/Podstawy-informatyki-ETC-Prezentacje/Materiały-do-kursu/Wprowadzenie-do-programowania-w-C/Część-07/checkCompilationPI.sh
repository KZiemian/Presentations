#!/bin/bash

# Script for checking if C files for "Podstawy informatyki" compiles and
# for saving their text output in .txt files.

# Importing functions used in this script.
source ../BASH-scripts/useful-functions-01.sh





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-15-A-break.c"
executable_output_file_name="prog-15-A.out"
save_output_text="true"
text_output_file_name="Text-output-15-A.txt"



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
c_file_name="PI-15-B-continue.c"
executable_output_file_name="prog-15-B.out"
save_output_text="true"
text_output_file_name="Text-output-15-B.txt"



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
c_file_name="PI-16-A-Funkcje-matematyczne.c"
executable_output_file_name="prog-16-A.out"
save_output_text="true"
text_output_file_name="Text-output-16-A.txt"



if [[ $run_code == "true" ]]; then
    echo -e "Compiling $c_file_name.\n"

    gcc -ansi --std=c99 -pedantic $c_file_name -lm \
	-o $executable_output_file_name

    ./$executable_output_file_name >> $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-16-B-Przykład-szukania-miejsca-zerowego.c"
executable_output_file_name="prog-16-B.out"
save_output_text="true"
text_output_file_name="Text-output-16-B.txt"



if [[ $run_code == "true" ]]; then
    echo -e "Compiling $c_file_name.\n"

    gcc -ansi --std=c99 -pedantic $c_file_name -lm \
	-o $executable_output_file_name

    ./$executable_output_file_name >> $text_output_file_name

elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-16-C-Testowanie-miejsca-zerowego.c"
executable_output_file_name="prog-16-C.out"
save_output_text="true"
text_output_file_name="Text-output-16-C.txt"



if [[ $run_code == "true" ]]; then
    echo -e "Compiling $c_file_name.\n"

    gcc -ansi --std=c99 -pedantic $c_file_name -lm \
	-o $executable_output_file_name

    ./$executable_output_file_name >> $text_output_file_name

elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-17-A-Funkcje.c"
executable_output_file_name="prog-17-A.out"
save_output_text="true"
text_output_file_name="Text-output-17-A.txt"



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
c_file_name="PI-17-B-Definiowanie-funkcji.c"
executable_output_file_name="prog-17-B.out"
save_output_text="true"
text_output_file_name="Text-output-17-B.txt"



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
c_file_name="PI-17-C-Definiowanie-funkcji.c"
executable_output_file_name="prog-17-C.out"
save_output_text="true"
text_output_file_name="Text-output-17-C.txt"



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
c_file_name="PI-17-D-Funkcja-liniowa.c"
executable_output_file_name="prog-17-D.out"
save_output_text="true"
text_output_file_name="Text-output-17-D.txt"



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
go_file_name="PI-17-E-Język-Go-jest-prostszy-w-czystaniu.go"
save_output_text="true"
text_output_file_name="Text-output-17-E.txt"



if [[ $run_code == "true" ]]; then
    go run $go_file_name >> $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for Go file $c_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-17-F-Przykłady-funkcji.c"
executable_output_file_name="prog-17-F.out"
save_output_text="true"
text_output_file_name="Text-output-17-F.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi
