#!/bin/bash

# Script for checking if C files for "Podstawy informatyki" compiles and
# for saving their text output in .txt files.

# Importing functions used in this script.
source ../BASH-scripts/useful-functions-01.sh





##################################################
# run_code="true"
run_code="false"
java_file_name="PinJ-01-A-Hello-World.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-01-A-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
java_file_name="PinJ-01-B-How-to-implement-lamp-in-Java.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-01-B-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
java_file_name="PinJ-02-A-Comments.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-02-A-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
java_file_name="PinJ-02-B-System-out-println.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-02-B-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
java_file_name="PinJ-02-C-Printing-to-output-and-strings.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-02-C-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
java_file_name="PinJ-02-D-Arithmetics-and-joining-strings.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-02-D-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
java_file_name="PinJ-02-E-Traps-of-joining-strings.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-02-E-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
java_file_name="PinJ-02-F-Variables.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-02-F-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
java_file_name="PinJ-02-G-Basic-types.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-02-G-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi





##################################################
# run_code="true"
run_code="false"
java_file_name="PinJ-02-H-Basic-types-are-copied.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-02-H-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi
