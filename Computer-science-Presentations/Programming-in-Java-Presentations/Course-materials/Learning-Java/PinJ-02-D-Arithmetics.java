class Main {
    public static void main(String[] args) {
	// Java of course allows us to perform basic arithmetic operations
	// on integers and floating-point numbers.
	//
	// Since "=" is an assignment operator in Java, no surprise here,
	// we will use comparison operator "==" to symbolize that two things
	// are equal.
	System.out.println("2 + 3 == " + (2 + 3) + ".");
	System.out.println("5 - 3 == " + (5 - 3) + ".");
	System.out.println("3 * 4 == " + (3 * 4) + ".");
	System.out.println("20 / 2 == " + (20 / 2) + ".\n");

	System.out.println("Like in C and C++, we need to be careful " +
			   "when dividing two integers.");
	System.out.println("3 / 4 == " + (3 / 4) + ".\n");
	System.out.println("10 % 3 == " + (10 % 3) + ".\n\n");



	System.out.println("Now floating point numbers.");
	System.out.println("1.5 + 2.25 == " + (1.5 + 2.25) + ".");
	System.out.println("3.5 - 2.65 == " + (3.5 - 2.65) + ".");
	System.out.println("1.5 * 3.0 == " + (1.5 * 3.0) + ".\n");
	System.out.println("Division of floating-point numbers works " +
			   "as we should expect.");
	System.out.println("3.0 / 4.0 == " + (3.0 / 4.0) + ".\n");

	// We already see many times that we can join (concatenate) strings
	// using the "+" operator.
	System.out.println("Joining " + "strings.");
    }
}
