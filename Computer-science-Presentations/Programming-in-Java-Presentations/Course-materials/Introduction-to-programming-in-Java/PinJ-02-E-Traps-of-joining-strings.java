class Main {
    public static void main(String[] args) {
	// We should be aware of some traps.
	System.out.println("Instruction: " +
			   "\"3 + 4 == \" + (3 + 4) + \".\"");
	System.out.println("3 + 4 == " + (3 + 4) + ".");

	System.out.println("Instruction: " +
			   "\"3 + 4 == \" + 3 + 4 + \".\"");
	System.out.println("3 + 4 == " + 3 + 4 + ".");
	System.out.print("Why must life be so complicated?\n\n");
	// In the first case parenteses (3 + 4) tells Java that it needs to
	// first compute 3 + 4, which is equal to 7 and then join strings
	// "3 + 4 == " + "7" + "."
	// which gives us the desired result "3 + 4 == 7.".
	// In the second case Java first casts 3 and 4 into strings and then
	// performs the operation of joining them.
	// "3 + 4 == " + "3" + "4" + "."
	// which gives us "3 + 4 == 34.". Why must life be so complicated?

	System.out.println("Instruction: " +
			   "\"3 * 4 == \" + (3 * 4) + \".\"");
	System.out.println("3 * 4 == " + (3 * 4) + ".");

	System.out.println("Instruction: \"3 * 4 == \" + 3 * 4 + \".\"");
	System.out.println("3 * 4 == " + 3 * 4 + ".");
	System.out.println("In this case it works fine, but in our " +
			   "opinion it is better to always add " +
			   "parentheses to such expressions, to prevent " +
			   "possible errors.");
    }
}
