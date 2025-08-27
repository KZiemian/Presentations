class Main {
    public static void main(String[] args) {
	// If you know how if-else work in other languages, there is basicaly
	// nothing new to learn in Java.

	int intVar1 = 3;

	if (intVar1 > 5) {
	    System.out.println("Value of variable intVar1 is equal to " +
			       intVar1 + ", which is bigger that 5.\n");
	} else {
	    System.out.println("Value of variable intVar1 is qualt to " +
			       intVar1 + ", which is lesser or equal " +
			       "to 5.\n");
	}

	intVar1 = -1;

	if (intVar1 > 5) {
	    System.out.println("Value of variable intVar1 is equal to " +
			       intVar1 + ", which is bigger that 5.");
	} else if (intVar1 >= 0) {
	    System.out.println("Value of variable intVar1 is equal to " +
			       intVar1 + ", hence it is non-negative.");
	} else {
	    System.out.println("Value of variable intVar1 is equal to " +
			       intVar1 + " and is negative.");
	}
    }
}
