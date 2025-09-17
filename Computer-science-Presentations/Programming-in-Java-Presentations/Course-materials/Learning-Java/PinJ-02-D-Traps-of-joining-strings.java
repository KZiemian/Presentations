class Main {
    public static void main(String[] args) {
	// We should be aware of some traps.
	System.out.println("3 + 4 == " + (3 + 4) + ".");
	System.out.println("3 + 4 == " + 3 + 4 + ".");
	// In the first case parenteses (3 + 4) tells Java that it need to
	// first compute 3 + 4, which is equal to 7 and then join strings
	// "3 + 4 == " + "7" + "."
	// which give us desired result "3 + 4 == 7.".
	// In the second case Java first cast 3 and 4 into strings and then
	// perform the operation joining them.
	// "3 + 4 == " + "3" + "4" + "."
	// which gives us "3 + 4 == 34.". Why must life be so complicated?

	System.out.println("3 * 4 == " + (3 * 4) + ".");
	System.out.println("3 * 4 == " + 3 * 4 + ".");
	// In this case it works fine, but in our opinion it is better to
	// always add parentheses to such expressions, to prevent possible
	// errors.
    }
}
