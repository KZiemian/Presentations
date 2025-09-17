class Main {
    public static void main(String[] args) {
	// In any language is important to know, which values are send by
	// coping and which by reference. In Java basic types are copied,
	// about other cases we will talk in the future.
	int intVar1 = 0;
	int intVar2 = 1;

	System.out.println("intVar1 == " + intVar1 + ".");
	System.out.println("intVar2 == " + intVar2 + ".");

	// Number 1 is COPIED from intVar2 to intVar1. As such values that
	// these two variables contain are independent, as we expected.
	intVar1 = intVar2;

	System.out.println("\nintVar1 == " + intVar1 + ".");
	System.out.println("intVar2 == " + intVar2 + ".");

	intVar2 = 7;

	System.out.println("\nintVar1 == " + intVar1 + ".");
	System.out.println("intVar2 == " + intVar2 + ".");
	// As we can see, changing the value of intVar2 has no influence on
	// value of intVar1, because we COPIED the value from intVar2 to
	// intVar1.

	// One may think "This is the only thing that makes sense here.", but
	// in computer science, we need to consider other situations,
	// "nonsensical" ones. We will explain them and the need for them
	// later in the course.
    }
}
