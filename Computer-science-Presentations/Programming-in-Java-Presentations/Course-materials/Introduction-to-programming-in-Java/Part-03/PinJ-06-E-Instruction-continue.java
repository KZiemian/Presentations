class Main {
    public static void main(String[] args) {

	// Instruction continue end execution of the current body of the loop
	// and go to the next iteration of it (the body of the loop).

	System.out.println("Program before the for loop.");

	for (int i = 0; i < 10; i++) {
	    if ((i % 2) == 1) {
		System.out.println("Instruction: continue;");

		continue;
	    }

	    System.out.println("i == " + i + ".");
	}

	System.out.println("\nCode after the for loop.\n\n");



	int integerNumber1 = 0;

	System.out.println("We go inside the while loop.");

	while (integerNumber1 < 50) {

	    // Remember to check that your loop will end at some point.

	    integerNumber1++;

	    if ((integerNumber1 % 9) != 0) {
		System.out.println("Instruction: continue;");

		continue;
	    }

	    System.out.println("integerNumber1 == " + integerNumber1 + ".");
	}
    }
}
