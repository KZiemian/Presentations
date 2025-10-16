class Main {
    public static void main(String[] args) {
	// For loop in Java is very similar to this from C and C++.

	for (int i = 0; i < 5; i++) {
	    System.out.println("i == " + i + ".");
	}

	// As in C and C++ at the beginning of for loop we have
	// 1) initialization: int i = 0;
	// 2) loop condition: i < 5;
	// 3) step: i++.
	//
	// In Java, if you need variable for counting how many times your
	// loop body executions were executed, you should always define
	// it as above, in the initialization part of the control statement.
	// Such variables are in most cases named "i".

	// Variables defined in the initialization part of the for loop
	// exist ONLY inside the loop. Not before and not after.

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
