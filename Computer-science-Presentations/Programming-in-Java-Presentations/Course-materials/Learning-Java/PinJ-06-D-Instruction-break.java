class Main {
    public static void main(String[] args) {
	// Instruction break just ends the loop once and for all and Java goes
	// to the code further down the file.

	System.out.print("Program before the for loop.\n\n");

	System.out.println("We go inside the for loop.");

	for (int i = 0; i < 1000; i++) {
	    System.out.println("i == " + i + ".");

	    if (i == 3) {
		System.out.println("The i is equal to 3, so we break " +
				   "from the for loop.");
		break;
	    }
	}

	System.out.print("\nCode after the for loop.\n\n\n");



	int intVar1 = 0;

	System.out.println("We go inside the while loop.");

	while (intVar1 < 100) {
	    System.out.println("intVar1 == " + intVar1 + ".");

	    if (intVar1 == 4) {
		System.out.println("The i is equal to 4, so we break " +
				   "from the while loop.");
		break;
	    }

	    // Remember to check if the while loop will ever end.
	    intVar1++;
	}

	System.out.println("\nCode after the while loop.");
    }
}
