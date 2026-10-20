#!/bin/bash

# Script for checking if C files for "Podstawy informatyki" compiles and
# for saving their text output in .txt files.

# Importing functions used in this script.
source ../BASH-scripts/useful-functions-01.sh





##################################################
# run_code="true"
run_code="false"
go_file_name="PI-09-A-Zmienne-boolowskie-w-Go.go"
save_output_text="true"
text_output_file_name="prog-09-A-Text-output.txt"



if [[ $run_code == "true" ]]; then
    go run $go_file_name >> $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for Go file $c_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-09-B-Zmienne-pseudoboolowskie-w-C.c"
executable_output_file_name="prog-09-B.out"
save_output_text="true"
text_output_file_name="prog-09-B-Text-output.txt"



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
c_file_name="PI-09-C-Zmienne-pseudoboolowskie-i-stdbool-h.c"
executable_output_file_name="prog-09-C.out"
save_output_text="true"
text_output_file_name="prog-09-C-Text-output.txt"



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
go_file_name="PI-09-D-Sensowny-typ-bool.go"
save_output_text="true"
text_output_file_name="prog-09-D-Text-output.txt"



if [[ $run_code == "true" ]]; then
    go run $go_file_name >> $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for Go file $c_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-09-E-Alebra-Boolea-w-C.c"
executable_output_file_name="prog-09-E.out"
save_output_text="true"
text_output_file_name="prog-09-E-Text-output.txt"



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
c_file_name="PI-09-F-Przykład-wykorzystania-iloczynu-logicznego.c"
executable_output_file_name="prog-09-F.out"
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
c_file_name="PI-10-A-Inkrementacja-zmiennej-i-pokrewne-tematy.c"
executable_output_file_name="prog-10-A.out"
save_output_text="true"
text_output_file_name="prog-10-A-Text-output.txt"



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
c_file_name="PI-10-B-Operator-plus-plus-etc.c"
executable_output_file_name="prog-10-B.out"
save_output_text="true"
text_output_file_name="prog-10-B-Text-output.txt"



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
c_file_name="PI-10-C-Przykładowy-program-02.c"
executable_output_file_name="prog-10-C.out"
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
cpp_file_name="PI-10-D-Hello-World.cpp"
executable_output_file_name="prog-10-D.out"
save_output_text="true"
text_output_file_name="prog-10-D-Text-output.txt"



if [[ $run_code == "true" ]]; then
    echo "Improve this part of script."

    g++ $cpp_file_name -o $executable_output_file_name
    ./$executable_output_file_name >> $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the BASH code for Go file $c_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
# run_code="false"
# c_file_name="PI-10-C-Przykładowy-program-02.c"
# executable_output_file_name="prog-10-C.out"
# save_output_text="false"



# if [[ $run_code == "true" ]]; then
#     echo -e "Program in file $c_file_name use dangerous scanf()" \
# 	 "function, to take user input. So producing output file" \
# 	 "for it, requires user action.\n"

#     manage_a_C_program_PI $c_file_name $executable_output_file_name \
# 			  $save_output_text
# elif [[ $run_code != "false" ]]; then
#     echo -e "ERROR. In the BASH code for C file $c_file_name we have wrong" \
# 	 "value of \"run_code\" variable: \"$run_code\".\n"

#     exit 1
# fi
