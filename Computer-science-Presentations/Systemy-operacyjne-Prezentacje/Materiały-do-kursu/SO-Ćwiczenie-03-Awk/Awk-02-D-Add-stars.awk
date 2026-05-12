#!/usr/bin/awk -f

# ; nie są niezbędne, ale czasem program bez nich nie działa jak trzeba.

NR == 1 {
    print $0;
    next;
}

# Next - przejdź do następnego rekordu.

$3 >= 40 {
    printf "****: %s\n", $0;
    next;
}

$3 >= 30 {
    printf "***:  %s\n", $0;
    next;
}

$2 >= 20 {
    printf "**:   %s\n", $0;
    next;
}

1 >= 10 {
    printf "*:    %s\n", $0;
    next;
}

$3 < 10 {
    print $0;
}
