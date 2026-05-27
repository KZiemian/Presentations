#!/usr/bin/awk -f

{
    switch ($2) {
	case "car":
	    print "You have a car."
	    break;
	case "bike":
	    print "You have a bike.";
    }
}
