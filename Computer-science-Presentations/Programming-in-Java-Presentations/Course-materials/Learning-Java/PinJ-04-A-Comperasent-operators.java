class Main {
    public static void main(String[] args) {
	// In Java comperasent of two numbers results in the value of the type
	// boolean, as it should be. We start from example.
	System.out.println("(0 == 0) == " + (0 == 0) + ".");

	System.out.println("\nBrackets are often optional, but their" +
			   "improve readability.");
	System.out.println("Also, code belowe doesn't work as we wish it " +
			   "to do.");
	System.out.println("0 == 0 == " + 0 == 0 + ".");

	System.out.println("Here is what Java is computing:");
	System.out.println(("0 == 0 == " + 0) == (0 + "."));
	System.out.println("It compers two STRINGS, not two numbers.");
	System.out.println("Why life must be so hard?");
    }
}
