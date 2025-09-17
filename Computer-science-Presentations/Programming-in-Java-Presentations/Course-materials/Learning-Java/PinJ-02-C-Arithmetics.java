class Main {
    public static void main(String[] args) {
	// Java of course allow us to perform basic arithmetic operations
	// on integers and floating-point numbers.

	// Since "=" is an assignment operator in Java, no surprise here,
	// we will use comparison operator "==" to symbolize that two things
	// are equal.
	System.out.println("2 + 3 == " + (2 + 3) + ".");
	System.out.println("5 - 3 == " + (5 - 3) + ".");
	System.out.println("3 * 4 == " + (3 * 4) + ".");
	System.out.println("20 / 2 == " + (20 / 2) + ".");

	System.out.println("\nLike in C and C++, we need to be careful " +
			   "when dividing two integers.");
	System.out.println("3 / 4 == " + (3 / 4) + ".");
	System.out.println("\n10 % 3 == " + (10 % 3) + ".");



	System.out.println("\n\nNow floating point numbers.");
	System.out.println("1.5 + 2.25 == " + (1.5 + 2.25) + ".");
	System.out.println("3.5 - 2.65 == " + (3.5 - 2.65) + ".");
	System.out.println("1.5 * 3.0 == " + (1.5 * 3.0) + ".");
	System.out.println("\nDivision of floating-point numbers works " +
			   "as we should expect.");
	System.out.println("3.0 / 4.0 == " + (3.0 / 4.0) + ".");

	// We already see many times that we can join (concatenate) strings
	// using the "+" operator.
	System.out.println("\nJoining " + "strings.");
    }
}
