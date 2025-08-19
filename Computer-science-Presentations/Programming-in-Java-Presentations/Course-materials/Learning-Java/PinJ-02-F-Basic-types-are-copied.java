class Main {
    public static void main(String[] args) {
	// In any language is important to know, what values are send by
	// coping and what by reference. In Java basic types are copied,
	// about other case we will talk in the future.
	int intVar1 = 0;
	int intVar2 = 1;

	System.out.println("intVar1 == " + intVar1 + ".");
	System.out.println("intVar2 == " + intVar2 + ".");

	// Value 1 is COPIED from intVar2 to intVar1. As such values that
	// these two variables contains are independent, as we expected.
	intVar1 = intVar2;

	System.out.println("\nintVar1 == " + intVar1 + ".");
	System.out.println("intVar2 == " + intVar2 + ".");

	intVar2 = 7;

	System.out.println("\nintVar1 == " + intVar1 + ".");
	System.out.println("intVar2 == " + intVar2 + ".");
	// As we can see, changing value of intVar2 has no influence on
	// value of intVar1, because we COPIED value from intVar2 to
	// intVar1.

	// One may think "This is the only thing that have sense here.", but
	// in computer science, we need to consider other situations,
	// "non-sensical" according to such resoning. We will explein them
	// and the need for them latter in the course.
    }
}
