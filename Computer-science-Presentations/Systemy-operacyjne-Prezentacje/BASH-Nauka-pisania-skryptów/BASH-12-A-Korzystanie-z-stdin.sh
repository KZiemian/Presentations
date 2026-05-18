#!/bin/bash

# fd -- file descryptor

# STDIN -> /proc/<processID>/fd/0
# Przykładowo: /proc/100/fd/0
# STDOUT -> /proc/<processID>/fd/1
# STDERR -> /proc/<processID>/fd/2
# Skrót /proc/<processID>/fd/0 to /dev/stdin lub /proc/self/fd/0
# Skrót /proc/<processID>/fd/1 to /dev/stdout lub /proc/self/fd/1
# Skrót /proc/<processID>/fd/2 to /dev/stderr lub /proc/self/fd/2

echo "Podaj tekst w czterech kolumnach."

cat /dev/stdin | awk '{ print $2, $3 }'
# Ctrl-d by przerwać wpisywanie.

# cat /dev/stdin | cut -d' ' -f 2,3 | sort
# -d' ' - dziel na spacjach.
# -f 2,3 - druga i trzecia kolumna.

# Kiedy użyć argumentu, kiedy read, a kiedy STDIN?


# https://ryanstutorials.net/bash-scripting-tutorial/bash-input.php
# we look at If statements, If -> if??
#  which of these methods ->  Which of these methods
# Add to the previous script to -> Add to the previous script code to
