#!/bin/bash

# Script for checking if C files for "Podstawy informatyki" compiles and
# for saving their text output in .txt files.

# Importing functions used in this script.
source ../BASH-scripts/useful-functions-01.sh





##################################################
# run_code="true"
run_code="false"
java_file_name="PinJ-08-A-Methods.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-08-A-Text-output.txt"



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
java_file_name="PinJ-08-B-Methods.java"
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
# run_code="true"
run_code="false"
java_file_name="PinJ-08-C-Constructor.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-08-C-Text-output.txt"



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
java_file_name="PinJ-08-D-Default-constructor.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-08-D-Text-output.txt"



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
java_file_name="PinJ-08-E-Constructor-gone-wrong.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-08-E-Text-output.txt"



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
java_file_name="PinJ-08-F-Multiple-constructors.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-08-F-Text-output.txt"



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
java_file_name="PinJ-09-A-Back-to-the-methods.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-09-A-Text-output.txt"



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
java_file_name="PinJ-09-B-Lamp-class.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-09-B-Text-output.txt"



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
java_file_name="PinJ-09-C-More-about-return.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-09-C-Text-output.txt"



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
java_file_name="PinJ-09-D-Static-methods-aka-functions.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-09-D-Text-output.txt"



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
java_file_name="PinJ-09-E-Static-methods-belongs-to-the-class.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-09-E-Text-output.txt"



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
java_file_name="PinJ-09-F-Static-fields.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-09-F-Text-output.txt"



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
java_file_name="PinJ-09-G-Library-of-functions.java"
java_file_top_class_name="Main"
save_output_text="true"
text_output_file_name="prog-09-G-Text-output.txt"



if [[ $run_code == "true" ]]; then
    manage_a_Java_program_PinJ $java_file_name $java_file_top_class_name \
			       $save_output_text $text_output_file_name
elif [[ $run_code != "false" ]]; then
    echo -e "ERROR. In the code for Java file $Java_file_name we have" \
	 "wrong value of \"run_code\" variable: \"$run_code\".\n"

    exit 1
fi
