class Main {
    public static void main(String[] args) {
	// Java, like C, use symbol "&&" for conjunction, "||" for alternative
	// and "!" for negation.

	System.out.print("(true && true) == " + (true && true) + ".\n");
	System.out.print("(true && false) == " + (true && false) + ".\n");
	System.out.print("(false && true) == " + (false && true) + ".\n");
	System.out.print("(false && false) == " + (false && false) +
			 ".\n\n");

	System.out.print("(true || true) == " + (true || true) + ".\n");
	System.out.print("(true || false) == " + (true || false) + ".\n");
	System.out.print("(flase || true) == " + (false || true) + ".\n");
	System.out.print("(flase || false) == " + (false || false)
			 + ".\n\n");

	System.out.println("!true == " + !true + ".");
	System.out.println("!false == " + !false + ".");

	// In Java, rightly so, you cannot perform logical operators on
	// numbers. And this is a very good thing.
	// System.out.println("1 && 1 == " + (1 && 1) + ".");
    }
}
