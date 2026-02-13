class Main {
    public static void main(String[] args) {
	// In any programming language it is important to know, which values
	// are sent by coping and which by reference. In Java basic types are
	// copied, about other cases we will talk about it, in the future.
	//
	// If you don't understand what this mean, please, give us some
	// time to explain it.
	int intVar1 = 0;
	int intVar2 = 1;

	System.out.println("intVar1 == " + intVar1 + ".");
	System.out.print("intVar2 == " + intVar2 + ".\n\n");

	// Number 1 is COPIED from intVar2 to intVar1. As such, values that
	// these two variables contain are independent, as we expected.
	System.out.println("Instruction: intVar1 = intVar2;");
	intVar1 = intVar2;

	System.out.println("intVar1 == " + intVar1 + ".");
	System.out.print("intVar2 == " + intVar2 + ".\n\n");

	System.out.println("Instruction: intVar2 = 7;");
	intVar2 = 7;

	System.out.println("intVar1 == " + intVar1 + ".");
	System.out.println("intVar2 == " + intVar2 + ".");
	// As we can see, changing the value of intVar2 has no influence on
	// value of intVar1, because we COPIED the value from intVar2 to
	// intVar1.
	//
	// One may think "This is the only thing that makes sense here.", but
	// in computer science, we need to consider other "nonsensical"
	// situations. We will explain them and why we need them also
	// later in the course.
    }
}
