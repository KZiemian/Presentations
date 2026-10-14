class Main {
    public static void main(String[] args) {
	System.out.print("Instruction break just ends the loop once " +
			 "and for all and Java goes to the code further " +
			 "down the file.\n\n");

	int intVar1 = 0;

	System.out.println("Remember to check if the while loop " +
			   "will end at the right moment.");
	System.out.print("We go inside the while loop.\n\n");


	while (intVar1 < 100) {
	    System.out.println("intVar1 == " + intVar1 + ".");

	    if (intVar1 == 4) {
		System.out.println("The \"i\" variable is equal to 4, " +
				   "so we break from the while loop.");
		break;
	    }

	    intVar1++;
	}

	System.out.print("\nCode after the while loop.\n\n\n\n");



	System.out.println("Program before the for loop.");
	System.out.print("We go inside the for loop.\n\n");

	for (int i = 0; i < 1000; i++) {
	    System.out.println("i == " + i + ".");

	    if (i == 3) {
		System.out.println("The \"i\" variable is equal to 3, " +
				   "so we break from the for loop.");
		break;
	    }
	}

	System.out.print("\nCode after the for loop.\n");
    }
}
