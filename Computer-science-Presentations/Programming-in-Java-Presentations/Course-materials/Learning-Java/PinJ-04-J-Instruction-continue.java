class Main {
    public static void main(String[] args) {
	// Instruction continue end execution of the current body of the loop
	// and go to the next iteration of it (body of the loop).

	System.out.println("Program before the for loop.");

	for (int i = 0; i < 10; i++) {
	    if (i % 2 == 1) {
		continue;
	    }

	    System.out.println("i == " + i + ".");
	}

	System.out.println("\nCode after the for loop.\n\n");



	int intVar1 = 0;

	System.out.println("We go inside the while loop.");

	while (intVar1 < 50) {
	    // Remeber to check when the loop will end.
	    intVar1++;

	    if (intVar1 % 9 != 0) {
		continue;
	    }

	    System.out.println("intVar1 == " + intVar1 + ".");
	}
    }
}
