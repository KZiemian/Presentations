class Main {
    public static void main(String[] args) {
	// Java of course allows us to perform basic arithmetic operations
	// on integers and floating-point numbers.
	//
	// Since "=" is an assignment operator in Java, no surprise here,
	// we will use comparison operator "==" to symbolize that two things
	// are equal.
	System.out.print("2 + 3 == " + (2 + 3) + ".\n");
	System.out.print("5 - 3 == " + (5 - 3) + ".\n");
	System.out.print("3 * 4 == " + (3 * 4) + ".\n");
	System.out.print("20 / 2 == " + (20 / 2) + ".\n\n");

	System.out.print("Like in C and C++, we need to be careful " +
			   "when dividing two integers.\n");
	System.out.print("3 / 4 == " + (3 / 4) + ".\n\n");
	System.out.print("10 % 3 == " + (10 % 3) + ".\n\n\n");



	System.out.print("Now floating point numbers.\n");
	System.out.print("1.5 + 2.25 == " + (1.5 + 2.25) + ".\n");
	System.out.print("3.5 - 2.65 == " + (3.5 - 2.65) + ".\n");
	System.out.print("1.5 * 3.0 == " + (1.5 * 3.0) + ".\n");
	System.out.print("Division of floating-point numbers works " +
			   "as we should expect.\n");
	System.out.print("3.0 / 4.0 == " + (3.0 / 4.0) + ".\n\n");

	// We already see many times that we can join (concatenate) strings
	// using the "+" operator.
	System.out.print("Joining " + "strings.\n");
    }
}
