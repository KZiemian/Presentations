#!/usr/bin/awk -f

BEGIN {
    print "Przed rozpoczęciem skanowania tekstu.";
}

{
    print;
}

END {
    print "Po zakończeniu skanowania tekstu.";
}
