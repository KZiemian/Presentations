class Main {
    public static void main(String[] args) {

	// Code below doesn't work and this is a good thing. The expression
	// intVar1 = intVar2
	// produces value of type int and it cannot be used to evaluate
	// condition in the if statement. Because condition in if accepts
	// only values of the boolean type.
	//
	// int intVar1 = 0;
	// int intVar2 = 1;
	//
	// if (intVar1 = intVar2) {
	//     System.out.println("Both variables have value " +
	// 		       intVar1 + ".");
	// } else {
	//     System.out.println("intVar1 == " + intVar1 + ".");
	//     System.out.println("intVar2 == " + intVar2 + ".");
	// }



	boolean boolVar1 = false;

	System.out.println("Unfortunately, the code below works, but not " +
			  "as it should.");
	System.out.print("Before if-else: boolVar1 == " + boolVar1 +
			 ".\n\n");

	if (boolVar1 = true) {
	    System.out.println("boolVar1 contains value: true.");
	    System.out.println("boolVar1 == " + boolVar1 + ".");
	} else {
	    System.out.println("boolVar1 contains value: false.");
	    System.out.println("boolVar1 == " + boolVar1 + ".");
	}

	System.out.print("\nLike in C and C++ assignment operations " +
			 "return assigned value.\n" +
			 "So expression\n" +
			 "boolVar1 = true\n" +
			 "returns true, while\n" +
			 "boolVar1 = false\n" +
			 "returns false. It should be clear that putting " +
			 "assignments inside conditions is a very bad " +
			 "idea.");
    }
}
