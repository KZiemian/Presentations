#!/bin/bash

# Function for compile files in Java and saving it text output to test file
# We call it?????
# compile_c_file run_function c_file_name executable_output_file_name \
# save_text_file text_output_file_name
# run_function -> "true", "false"
# save_text_file -> "true", "false"
# If save_text_file == "false", then we call this fuction as
# compile_c_file run_function c_file_name executable_output_file_name \
# "false"

function manage_a_Java_program_PinJ() {
    local number_of_arguments=$#

    if [[ $number_of_arguments -eq 0 ]]; then
	echo -e "ERROR. Function manage_a_C_Program_PI() was called with 0" \
	     "arguments!!!\n"

	return
    elif [[ $number_of_arguments -ne 3 && $number_of_arguments -ne 4 ]]; then
	echo -n "ERROR. Function compile_c_file() was called with wrong" \
	     "number of arguments: $number_of_arguments. This function" \
	     "requires 3 or 4 arguments."
	echo "Current values of arguments: "
	echo -e "$@.\n"

	return
    fi



    local compilation_status=1

    local java_file_name=$1
    local java_file_top_class_name=$2
    local save_output_text=$3



    if [[ $save_output_text == "true" ]]; then
	# -z $4 returns true, if value of argument number 4 is string
	# with zero length.
	if [[ -z $4 ]]; then
	    echo -e "ERROR. Function compile_c_file() running with" \
		 "c_file_name argument: $c_file_name, was called" \
		 "with \"save_output_text\" equalt to " \
		 "\"$save_output_text\", but with empty"\
		 "\"text_output_file_name\".\n"
	    return
	else
	    local text_output_file_name=$4
	fi
    elif [[ $save_output_text != "false" ]]; then
	echo -e "ERROR. Function compile_c_file() running with c_file_name" \
	     "argument: $c_file_name, was called with wrong value of" \
	     "\"save_output_text\" argument: \"$save_output_text\".\n"

	return
    fi



    javac $java_file_name

    compilation_status=$?



    if [[ $compilation_status -eq 0 ]]; then
	echo -e "Successful compiled: $java_file_name.\n"
    else
	echo -e "Problem with compiling file $java_file_name.\n"

	return
    fi

    if [[ $save_output_text == "true" ]]; then
	java $java_file_top_class_name >> $text_output_file_name
    fi





    return
}
