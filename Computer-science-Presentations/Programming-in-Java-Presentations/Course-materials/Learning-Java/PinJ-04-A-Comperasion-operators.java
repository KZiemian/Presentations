class Main {
    public static void main(String[] args) {
	// In Java comparison of two numbers results in the value of the type
	// boolean, as it should be. Let's see example.
	System.out.print("(0 == 0) == " + (0 == 0) + ".\n\n");

	System.out.println("As we said before, brackets are often " +
			   "optional, but they improve readability.");
	System.out.println("Also, this time without them code doesn't " +
			   "work as we want.");
	System.out.print("0 == 0 == " + 0 == 0 + ".\n\n");

	System.out.println("Here is what Java is computing:");
	System.out.println(("0 == 0 == " + 0) == (0 + "."));
	System.out.println("It compares two STRINGS, not two numbers.");
	System.out.println("Why must life be so complicated?");
    }
}
