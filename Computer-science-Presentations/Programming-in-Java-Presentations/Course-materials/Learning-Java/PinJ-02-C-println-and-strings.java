class Main {
    public static void main(String[] args) {
	// Do we need to make some refreshment about strings?
	//
	// Strings in Java, like in many other languages, can be joined
	// (concatenated) by using the "+" operator.

	System.out.println("We have " + 5 + " people in the room.");
	// In this code 5 is casted into string, but we will talk about
	// casting of types later.

	System.out.println("Using string concatenation is very " +
			   "useful, when you have a long text to print " +
			   "on the screen.");

	// Like in many other languages, you can use \n to add a new line
	// to the string.
	System.out.println("\nAdding new lines to the text can make it " +
			   "more readable.\n" + "Especially when it is " +
			   "quite long.");
    }
}
