class Main {
    public static void main(String[] args) {
	// Code below doesn't work and this is a good thing. The expression
	// intVar1 = intVar2
	// produces value of type int and it cannot be used to evaluate
	// condition in the if statement. Because condition must be a value
	// of boolean type.
	//
	// int intVar1 = 0;
	// int intVar2 = 1;
	//
	// if (intVar1 = intVar2) {
	//     System.out.println("Both variables contains value " +
	// 		       intVar1 + ".");
	// } else {
	//     System.out.println("intVar1 == " + intVar1 + ".");
	//     System.out.println("intVar2 == " + intVar2 + ".");
	// }

	// Unfortunately, this code works, but not as it should.
	boolean boolVar1 = false;

	System.out.println("Before if-else: boolVar1 == " + boolVar1 + ".\n");

	if (boolVar1 = true) {
	    System.out.println("boolVar1 contains value true.");
	    System.out.println("boolVar1 == " + boolVar1 + ".");
	} else {
	    System.out.println("boolVar1 contains value false.");
	    System.out.println("boolVar1 == " + boolVar1 + ".");
	}

	// Like in C and C++ assignment operations returns assigned value.
	// So expression
	// boolVar1 = true
	// returns true, while
	// boolVar1 = false
	// returns false. It should be clear that putting assignments
	// inside conditions is a very bad idea.
    }
}
