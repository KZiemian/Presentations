#!/bin/bash

# Script for checking if C files for "Podstawy informatyki" compiles and
# for saving their text output in .txt files.

# Importing functions used in this script.
source ../BASH-scripts/useful-functions-01.sh





##################################################
run_code="true"
# run_code="false"
java_file_name="PinJ-06-A-While-loop.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-06-A-Text-output.txt"



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
java_file_name="PinJ-06-B-For-loop.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-06-B-Text-output.txt"



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
java_file_name="PinJ-06-C-For-loop-in-Java-is-quite-advanced.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-06-C-Text-output.txt"



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
java_file_name="PinJ-06-D-Instruction-break.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-06-D-Text-output.txt"



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
java_file_name="PinJ-06-E-Instruction-continue.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-06-E-Text-output.txt"



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
java_file_name="PinJ-07-A-Classes.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-07-A-Text-output.txt"



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
java_file_name="PinJ-07-B-Classes-are-quite-complex.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-07-B-Text-output.txt"



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
java_file_name="PinJ-07-C-Classes-are-quite-complex.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-07-C-Text-output.txt"



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
java_file_name="PinJ-07-D-Special-property-of-the-fields.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-07-D-Text-output.txt"



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
java_file_name="PinJ-07-E-Traps-of-assigning-objects.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-07-E-Text-output.txt"



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
java_file_name="PinJ-07-F-Traps-of-comparing-objects.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-07-F-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi
