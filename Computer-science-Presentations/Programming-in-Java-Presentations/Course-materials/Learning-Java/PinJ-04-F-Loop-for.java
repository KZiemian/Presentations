class Main {
    public static void main(String[] args) {
	// We start with for loop, very similar to this from C and C++.

	for (int i = 0; i < 5; i++) {
	    System.out.println("i == " + i + ".");
	}

	// As in C and C++ at the beggining of for loop we have
	// 1) initialization: int i = 0;
	// 2) loop condition: i < 5;
	// 3) step: i++.

	// In Java, if you need variable for counting how many times your
	// loop body executions was exectured, you should always define
	// it as above, in initialization part of the control statement. Such
	// variable is in most cases named "i".

	// Variable defined in initialization part of for loop exists ONLY
	// inside the loop. Not before and not after.

	// System.out.println("Before for loop.");
	// System.out.println("i == " + i + ".");

	System.out.println("\nInside for loop.");
	for (int i = 0; i < 5; i++) {
	    System.out.println("i == " + i + ".");
	}

	// System.out.println("\nAfter for loop.");
	// System.out.println("i == " + i + ".");
    }
}
