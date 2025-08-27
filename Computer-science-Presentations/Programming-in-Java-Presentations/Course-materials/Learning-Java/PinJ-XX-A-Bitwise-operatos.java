class Main {
    public static void main(String[] args) {
	// You can treat numbers 1 and 0 as representing single bits.
	System.out.println("1 & 1 == " + (1 & 1) + ".");
	System.out.println("1 & 0 == " + (1 & 0) + ".");
	System.out.println("0 & 1 == " + (0 & 1) + ".");
	System.out.println("0 & 0 == " + (0 & 0) + ".\n");

	// Boolean true is treated as singel bit 1 and false as single
	// bit 0.

	System.out.println("true & true == " + (true & true) + ".");
	System.out.println("true & false == " + (true & false) + ".");
	System.out.println("false & true == " + (false & true) + ".");
	System.out.println("false & false == " + (false & false) + ".\n");

	System.out.println("7 & 14 == " + (7 & 14) + ".");
	System.out.println("5 & 9 == " + (5 & 9) + ".");
	System.out.println("3 & 12 == " + (3 & 12) + ".");
	System.out.println("1 & 3 == " + (1 & 3) + ".");
	System.out.println("1 & 2 == " + (1 & 2) + ".");
    }
}
