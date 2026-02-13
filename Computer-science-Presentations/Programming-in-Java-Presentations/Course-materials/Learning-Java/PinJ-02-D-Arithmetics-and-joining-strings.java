class Main {
    public static void main(String[] args) {
	// Java of course allows us to perform basic arithmetic operations
	// on integers and floating-point numbers.
	//
	// Since "=" is an assignment operator in Java, no surprise here,
	// we will use comparison operator "==" to symbolize that two things
	// are equal.
	System.out.print("Four basic arithmetical operations.\n");
	System.out.print("2 + 3 == " + (2 + 3) + ".\n");
	System.out.print("5 - 3 == " + (5 - 3) + ".\n");
	System.out.print("3 * 4 == " + (3 * 4) + ".\n");
	System.out.print("20 / 2 == " + (20 / 2) + ".\n\n");

	System.out.print("Like in C and C++, we need to be careful " +
			   "when you divide two integers.\n");
	System.out.print("3 / 4 == " + (3 / 4) + ".\n\n");

	System.out.print("Like other programming languages, Java has " +
			 "modulo operator %.\n");
	System.out.print("0 == 0 + 2 * 0, so 0 % 2 == " + (0 % 2) + ".\n");
	System.out.print("1 == 1 + 0 * 2, so 1 % 2 == " + (1 % 2) + ".\n");
	System.out.print("2 == 0 + 2 * 1, so 2 % 2 == " + (2 % 2) + ".\n");
	System.out.print("3 == 1 + 2 * 1, so 3 % 2 == " + (3 % 2) + ".\n");
	System.out.print("4 == 0 + 2 * 2, so 4 % 2 == " + (4 % 2) + ".\n");
	System.out.print("5 == 1 + 2 * 2, so 5 % 2 == " + (5 % 2) + ".\n\n");

	System.out.print("0 == 0 + 3 * 0, so 0 % 3 == " + (0 % 3) + ".\n");
	System.out.print("1 == 1 + 3 * 0, so 1 % 3 == " + (1 % 3) + ".\n");
	System.out.print("2 == 2 + 3 * 0, so 2 % 3 == " + (2 % 3) + ".\n");
	System.out.print("3 == 0 + 3 * 1, so 3 % 3 == " + (3 % 3) + ".\n");
	System.out.print("4 == 1 + 3 * 1, so 4 % 3 == " + (4 % 3) + ".\n");
	System.out.print("5 == 2 + 3 * 1, so 5 % 3 == " + (5 % 3) + ".\n");
	System.out.print("6 == 0 + 3 * 2, so 6 % 3 == " + (6 % 3) + ".\n");
	System.out.print("7 == 1 + 3 * 2, so 7 % 3 == " + (7 % 3) + ".\n");
	System.out.print("8 == 2 + 3 * 2, so 8 % 3 == " + (8 % 3) + ".\n");
	System.out.print("9 == 0 + 3 * 3, so 9 % 3 == " + (9 % 3) + ".\n");
	System.out.print("10 == 1 + 3 * 3, so 9 % 3 == " + (10 % 3) +
			 ".\n\n");

	System.out.print("Using modulo operator % with negative numbers " +
			 "is slightly more complicated.\n");
	System.out.print("0 == 0 + 2 * 0, so 0 % 2 == " + (0 % 2) + ".\n");
	System.out.print("-1 == -1 + 2 * 0, so -1 % 2 == " + (-1 % 2) +
			 ".\n");
	System.out.print("-2 == 0 + 2 * (-1), so -2 % 2 == " + (-2 % 2) +
			 ".\n");
	System.out.print("-3 == -1 + 2 * (-1), so -3 % 2 == " + (-3 % 2) +
			 ".\n");
	System.out.print("-4 == 0 + 2 * (-2), so -4 % 2 == " + (-4 % 2) +
			 ".\n");
	System.out.print("-5 == -1 + 2 * (-2), so -5 % 2 == " + (-5 % 2) +
			 ".\n\n");

	System.out.print("0 == 0 + 3 * 0, so 0 % 3 == " + (0 % 3) + ".\n");
	System.out.print("-1 == -1 + 3 * 0, so -1 % 3 == " + (-1 % 3) +
			 ".\n");
	System.out.print("-2 == -2 + 3 * 0, so -2 % 3 == " + (-2 % 3) +
			 ".\n");
	System.out.print("-3 == 0 + 3 * (-1), so -3 % 3 == " + (-3 % 3) +
			 ".\n");
	System.out.print("-4 == -1 + 3 * (-1), so -4 % 3 == " + (-4 % 3) +
			 ".\n");
	System.out.print("-5 == -2 + 3 * (-1), so -5 % 3 == " + (-5 % 3) +
			 ".\n");
	System.out.print("-6 == 0 + 3 * (-2), so -6 % 3 == " + (-6 % 3) +
			 ".\n");
	System.out.print("-7 == -1 + 3 * (-2), so -7 % 3 == " + (-7 % 3) +
			 ".\n");
	System.out.print("-8 == -2 + 3 * (-3), so -8 % 3 == " + (-8 % 3) +
			 ".\n");
	System.out.print("-9 == 0 + 3 * (-3), so -9 % 3 == " + (-9 % 3) +
			 ".\n");
	System.out.print("-10 == -1 + 3 * (-3), so -10 % 3 == " +
			 (-10 % 3) + ".\n\n\n\n");



	System.out.print("For basic arithmetical operations for " +
			 "floating point numbers.\n");
	System.out.print("1.5 + 2.25 == " + (1.5 + 2.25) + ".\n");
	System.out.print("3.5 - 2.65 == " + (3.5 - 2.65) + ".\n");
	System.out.print("1.5 * 3.0 == " + (1.5 * 3.0) + ".\n");
	System.out.print("Division of floating-point numbers works " +
			   "as we should expect.\n");
	System.out.print("3.0 / 4.0 == " + (3.0 / 4.0) + ".\n\n\n\n");

	// We already see many times that we can join (concatenate) strings
	// using the "+" operator.
	System.out.print("We can join (concatenate) strings using \"+\" " +
			 "operator.\n");
	System.out.print("Instruction: \"Joining\" + \"strings.\\n\"\n");
	System.out.print("Joining " + "strings.\n");
    }
}
