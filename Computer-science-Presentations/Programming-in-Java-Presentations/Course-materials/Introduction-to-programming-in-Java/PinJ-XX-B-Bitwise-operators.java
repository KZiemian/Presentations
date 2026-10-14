class Main {
    public static void main(String[] args) {
	// There is no short-circuit for bitwise operators in Java.
	System.out.println("1 | 1 == " + (1 | 1) + ".");
	System.out.println("1 | 0 == " + (1 | 0) + ".");
	System.out.println("0 | 1 == " + (0 | 1) + ".");
	System.out.println("0 | 0 == " + (0 | 0) + ".\n");

	System.out.println("true | true == " + (true | true) + ".");
	System.out.println("true | false == " + (true | false) + ".");
	System.out.println("false | true == " + (false | true) + ".");
	System.out.println("false | false == " + (false | false) + ".\n");

	System.out.println("7 | 14 == " + (7 | 14) + ".");
	System.out.println("5 | 9 == " + (5 | 9) + ".");
	System.out.println("3 | 12 == " + (3 | 12) + ".");
	System.out.println("1 | 3 == " + (1 | 3) + ".");
	System.out.println("1 | 2 == " + (1 | 2) + ".\n\n");

	System.out.println("1 ^ 1 == " + (1 ^ 1) + ".");
	System.out.println("1 ^ 0 == " + (1 ^ 0) + ".");
	System.out.println("0 ^ 1 == " + (0 ^ 1) + ".");
	System.out.println("0 ^ 0 == " + (0 ^ 0) + ".\n");

	System.out.println("true ^ true == " + (true ^ true) + ".");
	System.out.println("true ^ false == " + (true ^ false) + ".");
	System.out.println("false ^ true == " + (false ^ true) + ".");
	System.out.println("false ^ false == " + (false ^ false) + ".\n");

	System.out.println("7 ^ 14 == " + (7 ^ 14) + ".");
	System.out.println("5 ^ 9 == " + (5 ^ 9) + ".");
	System.out.println("3 ^ 12 == " + (3 ^ 12) + ".");
	System.out.println("1 ^ 3 == " + (1 ^ 3) + ".");
	System.out.println("1 ^ 2 == " + (1 ^ 2) + ".\n");

	// You can use logical negation ! with boolean type, but NOT
	// the bitwise negation ~.
	// System.out.println("~true == " + (~true) + ".");
	// System.out.println("~false == " + (~false) + ".");

	System.out.println("Understanding bitwise not is much harder, " +
			   "than previous operators.");
	System.out.println("~1 == " + (~1) + ".");
	System.out.println("~0 == " + (~0) + ".");
	System.out.println("Maybe we will talk about them in the future.");

	// As we have += operator we also have &=, |=, ^=.
	int intVar1 = 7;

	System.out.println("intVar1 == " + intVar1 + ".");

	intVar1 &= 14;

	System.out.println("After intVar1 &= 14, intVar1 == " + intVar1 +
			   ".");

	System.out.println("Reseting intVar1 to value 7.");

	intVar1 = 7;
	intVar1 |= 14;

	System.out.println("After intVar1 |= 14, intVar1 == " + intVar1 +
			   ".");

	System.out.println("Reseting intVar1 to value 7.");

	intVar1 = 7;
	intVar1 ^= 14;

	System.out.println("After intVar1 ^= 14, intVar1 == " + intVar1 +
			   ".");
    }
}
