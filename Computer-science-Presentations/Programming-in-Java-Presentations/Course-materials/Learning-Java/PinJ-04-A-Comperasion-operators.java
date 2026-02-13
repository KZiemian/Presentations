class Main {
    public static void main(String[] args) {
	System.out.print("In Java comparison of two numbers results " +
			   "in the value of the type boolean, as it " +
			   "should be. Let\'s see some examples.\n\n");


	System.out.println("Instruction: \"(0 == 0) == \" + " +
			   "(0 == 0) + \".\"");
	System.out.println("(0 == 0) == " + (0 == 0) + ".");

	System.out.println("Instruction: \"(0.5 == 0.5) == \" + " +
			   "(0.5 == 0.5) + \".\\n\\n\"");
	System.out.print("(0.5 == 0.5) == " + (0.5 == 0.5) + ".\n\n");


	System.out.print("As we said before, brackets are often " +
			 "optional, but they improve readability.\n" +
			 "Also, this time without them code doesn't " +
			 "work as we want.\n");
	System.out.println("Instruction: \"(0 == 0) == \" + " +
			   "0 == 0 + \".\\n\\n\"");
	System.out.println("(0 == 0) == " + 0 == 0 + ".\n\n");


	System.out.println("Here is what Java is computing.");
	System.out.println("Instruction: (\"0 == 0 == \" + 0) == " +
			   "(0 + \".\")");
	System.out.println(("0 == 0 == " + 0) == (0 + "."));
	System.out.println("It compares two STRINGS, not two numbers.");
	System.out.println("Why must life be so complicated?");
    }
}
