#!/bin/bash

./BASH-03-Brak-nazwy.sh A1 A2 A3 A4 A5 A6 A7 A8 A9 B C

echo "\$#: $#"
echo "\$@: $@"
echo "\$?: $?"
echo "\$\$: $$"

echo "\$USER: $USER"
echo "\$HOSTNAME: $HOSTNAME"
echo "\$RANDOM: $RANDOM"
echo "\$LINENO: $LINENO"

# env commad show other variables
