class Main {
    public static void main(String[] args) {
	// In Java comparison of two numbers results in the value of the type
	// boolean, as it should be. Let's see example.
	System.out.println("(0 == 0) == " + (0 == 0) + ".\n");

	System.out.println("As we said before, brackets are often " +
			   "optional, but their improve readability.");
	System.out.println("Also, this time without them code doesn't " +
			   "work as we want.");
	System.out.println("0 == 0 == " + 0 == 0 + ".");

	System.out.println("Here is what Java is computing:");
	System.out.println(("0 == 0 == " + 0) == (0 + "."));
	System.out.println("It compers two STRINGS, not two numbers.");
	System.out.println("Why life must be so complicated?");
    }
}
