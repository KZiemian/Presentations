class Main {
    public static void main(String[] args) {
	System.out.print("For loop in Java is very similar to this " +
			 "from C and C++.\n\n");

	for (int i = 0; i < 5; i++) {
	    System.out.println("i == " + i + ".");
	}

	System.out.print("\nAs in C and C++ at the beginning of for loop " +
			 "we have\n" +
			 "1) initialization: int i = 0;\n" +
			 "2) loop condition: i < 5;\n" +
			 "3) step: i++.\n\n");

	System.out.print("In Java, if you need a variable for counting " +
			 "how many times your loop body executions were " +
			 "executed, you should always define " +
			 "it as above, in the initialization part of the " +
			 "loop statement.\n" +
			 "Such variables are in most cases named \"i\".\n\n");

	System.out.print("Variables defined in the initialization " +
			 "part of the for loop exist ONLY inside " +
			 "the loop. Not before and not after.\n\n");

	System.out.println("Before the for loop.");
	System.out.print("Code below will cause an error, because " +
			   "variable \"i\" is not yet defined.\n\n");
	// System.out.println("i == " + i + ".");

	System.out.println("Inside the for loop.");
	for (int i = 0; i < 5; i++) {
	    System.out.println("i == " + i + ".");
	}

	System.out.println("\nAfter teh for loop.");
	System.out.println("Code below will cause an error, because " +
			   "the variable \"i\" is gone at this moment.");
	// System.out.println("i == " + i + ".");
    }
}
