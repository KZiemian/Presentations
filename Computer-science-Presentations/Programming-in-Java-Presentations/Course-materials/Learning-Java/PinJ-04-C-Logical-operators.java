class Main {
    public static void main(String[] args) {
	System.out.print("Java, like C, use symbol \"&&\" " +
			 "for conjunction, \"||\" for alternative " +
			 "and \"!\" for negation.\n\n");


	System.out.println("(true && true) == " + (true && true) + ".");
	System.out.println("(true && false) == " + (true && false) + ".");
	System.out.println("(false && true) == " + (false && true) + ".");
	System.out.print("(false && false) == " + (false && false) +
			 ".\n\n");


	System.out.println("(true || true) == " + (true || true) + ".");
	System.out.println("(true || false) == " + (true || false) + ".");
	System.out.println("(flase || true) == " + (false || true) + ".");
	System.out.print("(flase || false) == " + (false || false)
			 + ".\n\n");


	System.out.println("!true == " + !true + ".");
	System.out.print("!false == " + !false + ".\n\n");


	System.out.print("In Java, rightly so, you cannot perform " +
			 "logical operators on numbers.\n" +
			 "If you want to check it, uncomment code " +
			 "below.\n");
	// System.out.println("1 && 1 == " + (1 && 1) + ".");
    }
}
