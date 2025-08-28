class Main {
    public static void main(String[] args) {
	// Instruction break just end loop when loop execute it and go
	// to the code further down the file.

	System.out.println("Program before the for loop.\n");

	System.out.println("We go inside the for loop.");

	for (int i = 0; i < 1000; i++) {
	    System.out.println("i == " + i + ".");

	    if (i == 3) {
		System.out.println("The i is equal to 3, so we break " +
				   "from the for loop.");
		break;
	    }
	}

	System.out.println("\nCode after the for loop.\n\n");



	int intVar1 = 0;

	System.out.println("We go inside the while loop.");

	while (intVar1 < 100) {
	    System.out.println("intVar1 == " + intVar1 + ".");

	    if (intVar1 == 4) {
		System.out.println("The i is equal to 4, so we break " +
				   "from the while loop.");
		break;
	    }

	    // Remeber to check when the while loop will end.
	    intVar1++;
	}

	System.out.println("\nCode after the while loop.");
    }
}
