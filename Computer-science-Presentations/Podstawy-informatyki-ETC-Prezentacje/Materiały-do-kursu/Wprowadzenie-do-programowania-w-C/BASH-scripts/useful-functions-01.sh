#!/bin/bash

# Function for compile files in C and saving it text output to test file
# We call it
# compile_c_file run_function c_file_name executable_output_file_name \
# save_text_file text_output_file_name
# run_function -> "true", "false"
# save_text_file -> "true", "false"
# If save_text_file == "false", then we call this fuction as
# compile_c_file run_function c_file_name executable_output_file_name \
# "false"

function manage_a_C_program_PI() {
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

    local c_file_name=$1
    local executable_output_file_name=$2
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



    gcc -ansi --std=c99 -pedantic $c_file_name \
	-o $executable_output_file_name

    compilation_status=$?



    if [[ $compilation_status -eq 0 ]]; then
	echo -e "Successful compiled: $c_file_name.\n"
    else
	echo -e "Problem with compiling file $c_file_name.\n"

	return
    fi

    if [[ $save_output_text == "true" ]]; then
	./$executable_output_file_name >> $text_output_file_name
    fi





    return
}




function manage_a_Go_program_PI() {
    local number_of_arguments=$#

    if [[ $number_of_arguments -eq 0 ]]; then
	echo -e "ERROR. Function compile_c_file() was called with 0" \
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

    local go_file_name=$1
    local executable_output_file_name=$2
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



    gcc -ansi --std=c99 -pedantic $c_file_name \
	-o $executable_output_file_name

    compilation_status=$?



    if [[ $compilation_status -eq 0 ]]; then
	echo -e "Successful compiled: $c_file_name.\n"
    else
	echo -e "Problem with compiling file $c_file_name.\n"

	return
    fi

    if [[ $save_output_text == "true" ]]; then
	./$executable_output_file_name >> $text_output_file_name
    fi





    return
}





function clean_two_files() {
    local number_of_arguments=$#



    if [[ $number_of_arguments -eq 0 ]]; then
	echo -e "ERROR. Function clean_two_files() was called with 0" \
	     "arguments!!!\n"

	return
    elif [[ $number_of_arguments -eq 1 ]]; then
	echo "ERROR. Function clean_two_files() was called with only" \
	     "1 argument."
	echo "This function requires 2 arguments."
	echo "Current values of arguments: "
	echo -e "$@.\n"

	return
    elif [[ $number_of_arguments -ne 2 ]]; then
	 echo "ERROR. Function clean_two_files() was called with" \
	      "$number_of_arguments arguments."
	 echo "This function requires 2 arguments."
	 echo "Current values of arguments: "
	 echo -e "$@.\n"

	 return
    fi



    local file_1_name=$1
    local file_2_name=$2



    if [[ -e $file_1_name ]]; then
	echo "File exists: $file_1_name."

	rm $file_1_name
    fi

    if [[ -e $file_2_name ]]; then
	echo "File exists: $file_2_name."

	rm $file_2_name
    fi
}
