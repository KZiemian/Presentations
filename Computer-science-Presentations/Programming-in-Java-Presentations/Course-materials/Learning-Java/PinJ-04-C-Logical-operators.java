class Main {
    public static void main(String[] args) {
	// Java, like C, use symbol "&&" for conjunction, "||" for alternative
	// and "!" for negation.

	System.out.println("(true && true) == " + (true && true) + ".");
	System.out.println("(true && false) == " + (true && false) + ".");
	System.out.println("(false && true) == " + (false && true) + ".");
	System.out.println("(false && false) == " + (false && false) + ".\n");

	System.out.println("(true || true) == " + (true || true) + ".");
	System.out.println("(true || false) == " + (true || false) + ".");
	System.out.println("(flase || true) == " + (false || true) + ".");
	System.out.println("(flase || false) == " + (false || false) + ".\n");

	System.out.println("!true == " + !true + ".");
	System.out.println("!false == " + !false + ".");

	// In Java, rightly so, you cannot perform logical operators on
	// numbers. And this is a very good thing.
	// System.out.println("1 && 1 == " + (1 && 1) + ".");
    }
}
