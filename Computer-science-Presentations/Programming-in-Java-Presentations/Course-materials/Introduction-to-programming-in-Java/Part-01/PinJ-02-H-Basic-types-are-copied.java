class Main {
    public static void main(String[] args) {

	// In any programming language it is important to know, which values
	// are sent by coping and which by reference. In Java basic types are
	// copied, about other cases we will talk about it, in the future.
	//
	// If you don't understand what this mean, please, give us some
	// time to explain it.

	int integerNumber1 = 0;
	int integerNumber2 = 1;

	System.out.println("integerNumber1 == " + integerNumber1 + ".");
	System.out.print("integerNumber2 == " + integerNumber2 + ".\n\n");

	System.out.print("Number 1 is COPIED from integerNumber2 to " +
			 "integerNumber1. As such, values that these two " +
			 " variables contain are independent, as we " +
			 "expected.\n\n");

	System.out.println("Instruction: integerNumber1 = integerNumber2;");
	integerNumber1 = integerNumber2;

	System.out.println("integerNumber1 == " + integerNumber1 + ".");
	System.out.print("integerNumber2 == " + integerNumber2 + ".\n\n");

	System.out.println("Instruction: integerNumber2 = 7;");
	integerNumber2 = 7;

	System.out.println("integerNumber1 == " + integerNumber1 + ".");
	System.out.print("integerNumber2 == " + integerNumber2 + ".\n\n");

	System.out.print("As we can see, changing the value of " +
			 "integerNumber2 has no influence on value of " +
			 "integerNumber1, because we COPIED the value from " +
			 "integerNumber2 to integerNumber1.\n\n");

	System.out.println("One may think \"This is the only thing that " +
			   "makes sense here.\", but in computer " +
			   "science, we need to consider other " +
			   "\"nonsensical\" situations. We will explain " +
			   "them and why we need them also later in " +
			   "the course.");
    }
}
