#!/bin/bash

# Script for checking if C files for "Podstawy informatyki" compiles and
# for saving their text output in .txt files.

# Importing functions used in this script.
source ../BASH-scripts/useful-functions-01.sh





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-11-A-Czytanie-z-pliku.c"
executable_output_file_name="prog-11-A.out"
save_output_text="true"
text_output_file_name="Text-output-11-A.txt"



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
c_file_name="PI-11-B-Czytanie-z-pliku.c"
executable_output_file_name="prog-11-B.out"
save_output_text="true"
text_output_file_name="Text-output-11-B.txt"



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
c_file_name="PI-11-D-Czytanie-z-pliku.c"
executable_output_file_name="prog-11-D.out"
save_output_text="true"
text_output_file_name="Text-output-11-D.txt"



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
c_file_name="PI-11-F-Czytanie-z-pliku.c"
executable_output_file_name="prog-11-F.out"
save_output_text="true"
text_output_file_name="Text-output-11-F.txt"



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
c_file_name="PI-11-H-Czytanie-z-pliku.c"
executable_output_file_name="prog-11-H.out"
save_output_text="true"
text_output_file_name="Text-output-11-H.txt"



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
c_file_name="PI-12-A-Funkcja-sleep.c"
executable_output_file_name="prog-12-A.out"
save_output_text="true"
text_output_file_name="Text-output-12-A.txt"



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
c_file_name="PI-12-B-Pętla-while.c"
executable_output_file_name="prog-12-B.out"
save_output_text="true"
text_output_file_name="Text-output-12-B.txt"



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
c_file_name="PI-12-C-Pętla-while.c"
executable_output_file_name="prog-12-C.out"
save_output_text="true"
text_output_file_name="Text-output-12-C.txt"



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
c_file_name="PI-12-D-Pętla-for.c"
executable_output_file_name="prog-12-D.out"
save_output_text="true"
text_output_file_name="Text-output-12-D.txt"



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
c_file_name="PI-12-E-Przykładowy-program-03.c"
executable_output_file_name="prog-12-E.out"
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
c_file_name="PI-12-F-Przykład-nieskończonej-pętli.c"
executable_output_file_name="prog-12-F.out"
save_output_text="false"



if [[ $run_code == "true" ]]; then
    echo -e "Program in file $c_file_name produce infinite loop" \
	 "to ilustrate this programming problem. As such, saving" \
	 "output is impossible.\n"

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
c_file_name="PI-12-G-Zmienna-wewnętrzna-pętli.c"
executable_output_file_name="prog-12-G.out"
save_output_text="true"
text_output_file_name="Text-output-12-G.txt"



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
c_file_name="PI-12-H-Starsza-wersja-pętli-for.c"
executable_output_file_name="prog-12-H.out"
save_output_text="true"
text_output_file_name="Text-output-12-H.txt"



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
c_file_name="PI-12-I-Której-pętli-użyć.c"
executable_output_file_name="prog-12-I.out"
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
c_file_name="PI-12-J-Pętle-i-liczby-zmiennoprzecinkowe.c"
executable_output_file_name="prog-12-J.out"
save_output_text="true"
text_output_file_name="Text-output-12-J.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi
