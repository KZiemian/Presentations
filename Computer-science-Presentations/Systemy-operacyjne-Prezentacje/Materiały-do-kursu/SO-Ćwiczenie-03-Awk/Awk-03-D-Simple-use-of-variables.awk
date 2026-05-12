#!/usr/bin/awk -f

BEGIN {
    numberOfColumn = 4;
}

{
    print $numberOfColumn;
    # To samo co $4.
}
