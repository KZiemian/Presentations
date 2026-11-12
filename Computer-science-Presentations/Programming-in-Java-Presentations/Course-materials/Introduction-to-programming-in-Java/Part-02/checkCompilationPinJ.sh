#!/bin/bash

# Script for checking if C files for "Podstawy informatyki" compiles and
# for saving their text output in .txt files.

# Importing functions used in this script.
source ../BASH-scripts/useful-functions-01.sh





##################################################
run_code="true"
# run_code="false"
java_file_name="PinJ-03-A-Additional-operations-on-variables.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-03-A-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
java_file_name="PinJ-03-B-Additional-operations-on-variables.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-03-B-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
java_file_name="PinJ-03-C-Incrementation-of-variables.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-03-C-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
java_file_name="PinJ-03-D-Standard-traps-of-incrementations.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-03-D-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
java_file_name="PinJ-04-A-Comperasion-operators.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-04-A-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
java_file_name="PinJ-04-B-Comperasion-operators.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-04-B-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
java_file_name="PinJ-04-C-Logical-operators.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-04-C-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
java_file_name="PinJ-05-A-Taking-input-from-the-user.java"
java_file_top_class_name="Main"
save_output_text="false"



if [[ $run_code == "true" ]]; then
    echo -e "Program in file $java_file_name take input from the user." \
	 "So producing output file for it, requires user action.\n"

    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
java_file_name="PinJ-05-B-if-else.java"
java_file_top_class_name="Main"
save_output_text="false"



if [[ $run_code == "true" ]]; then
    echo -e "Program in file $java_file_name take input from the user." \
	 "So producing output file for it, requires user action.\n"

    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
run_code="true"
# run_code="false"
java_file_name="PinJ-05-C-if-else-and-assigments.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-05-C-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi
