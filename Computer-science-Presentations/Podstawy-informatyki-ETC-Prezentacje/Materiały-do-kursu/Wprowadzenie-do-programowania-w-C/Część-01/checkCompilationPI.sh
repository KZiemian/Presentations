#!/bin/bash

# Importing functions used in this script.
source ../BASH-scripts/useful-functions-01.sh



# Script for checking if C files for "Podstawy informatyki" compiles and
# for saving their text output in .txt files.



##################################################
# run_code="true"
run_code="false"
c_file_name="PI-01-A-Program-pokazowy-w-C.c"
executable_output_file_name="prog-01-A.out"
save_output_text="true"
text_output_file_name="prog-01-A-Text-output.txt"



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
c_file_name="PI-01-B-Program-pokazowy-w-C.c"
executable_output_file_name="prog-01-B.out"
save_output_text="false"



if [[ $run_code == "true" ]]; then
    echo "Program in file $c_file_name produce simple animation, so" \
	 "we don't need to save it text output to the file."

    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-02-A-Hello-World.c"
executable_output_file_name="prog-02-A.out"
save_output_text="true"
text_output_file_name="prog-02-A-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-02-B-Komentarze-w-kodzie-źródłowym.c"
executable_output_file_name="prog-02-B.out"
save_output_text="true"
text_output_file_name="prog-02-B-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi




##################################################
# run_code="true"
run_code="false"
c_file_name="PI-02-C-Pisanie-tekstu-na-ekranie.c"
executable_output_file_name="prog-02-C.out"
save_output_text="true"
text_output_file_name="prog-02-C-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-02-D-Stringi.c"
executable_output_file_name="prog-02-D.out"
save_output_text="true"
text_output_file_name="prog-02-D-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-02-E-Liczby.c"
executable_output_file_name="prog-02-E.out"
save_output_text="true"
text_output_file_name="prog-02-E-Text-output.txt"



if [[ $run_code == "true" ]]; then
    echo "In file $c_file_name, comments need change in the place" \
	 "when we have \"????\"."

    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
c_file_name="PI-02-F-Liczby-zmiennoprzecinkowe.c"
executable_output_file_name="prog-02-F.out"
save_output_text="true"
text_output_file_name="prog-02-F-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-03-A-Błędy-w-języku-C-Część-01.c"



if [[ $run_code == "true" ]]; then
    echo -e "File $c_file_name is for demonstrating various errors in C" \
	 "code and by design, it won't compile.\n"
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
c_file_name="PI-03-B-Błędy-w-języku-C-Część-02.c"
executable_output_file_name="prog-03-B.out"
save_output_text="true"
text_output_file_name="prog-03-B-Text-output.txt"



if [[ $run_code == "true" ]]; then
    echo -e "File $c_file_name is designed do show typical programmers" \
	 "mistakes and becuase of that, it show warnings during" \
	 "compilation.\n"

    manage_a_C_program_PI $c_file_name $executable_output_file_name \
			  $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for C file $c_file_name with have wrong" \
	 "value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi
