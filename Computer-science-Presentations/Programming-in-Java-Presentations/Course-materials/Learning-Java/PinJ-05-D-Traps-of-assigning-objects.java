class TwoNumbers {
    int m_intVar1;
    int m_intVar2;
}

class Main {
    public static void main(String[] args) {
	TwoNumbers twoNumbersVar1 = new TwoNumbers();
	TwoNumbers twoNumbersVar2 = new TwoNumbers();
	// We created two variables, eacho one of them is a reference to
	// Java object.

	twoNumbersVar1.m_intVar1 = 4;
	twoNumbersVar1.m_intVar2 = 6;

	twoNumbersVar2.m_intVar1 = 11;
	twoNumbersVar2.m_intVar2 = 13;

	System.out.println("twoNumbersVar1.m_intVar1 == " +
			   twoNumbersVar1.m_intVar1 + ".");
	System.out.println("twoNumbersVar1.m_intVar2 == " +
			   twoNumbersVar1.m_intVar2 + ".");

	System.out.println("\ntwoNumbersVar2.m_intVar1 == " +
			   twoNumbersVar2.m_intVar1 + ".");
	System.out.println("twoNumbersVar2.m_intVar2 == " +
			   twoNumbersVar2.m_intVar2 + ".");

	twoNumbersVar2 = twoNumbersVar1;

	twoNumbersVar1.m_intVar1 = 1;
	twoNumbersVar2.m_intVar2 = 2;

	System.out.println("\ntwoNumbersVar1.m_intVar1 == " +
			   twoNumbersVar1.m_intVar1 + ".");
	System.out.println("twoNumbersVar1.m_intVar2 == " +
			   twoNumbersVar1.m_intVar2 + ".");

	System.out.println("\ntwoNumbersVar2.m_intVar1 == " +
			   twoNumbersVar2.m_intVar1 + ".");
	System.out.println("twoNumbersVar2.m_intVar2 == " +
			   twoNumbersVar2.m_intVar2 + ".");

	// How we can understand this? Variable holds a reference to an
	// object, like a phone number, so when we write a line
	// twoNumbersVar2 = twoNumbersVar1;
	// we DON'T make copy of our objects. Insteed we create two variabels
	// that REFERENCES the same object.

	// Using our previous example in the line
	// twoNumbersVar2 = twoNumbersVar1;
	// we copy phone number from twoNumbersVar1 to twoNumbersVar2.
	// Regardless which contact we will use, we will call the same
	// phone number and the same person having it.

	// In short, when we assigned one variable to the other, i.e. we
	// wrote something like
	// intVar1 = intVar2;
	// result depends on the type of used variables. If the type of
	// both variables is one of the basic types (boolean, int, float,
	// double), value of one variable is copied to the other.
	// Copy of number 1 is as good as "original" 1.

	// If type of this variable is one of the classes of Java,
	// we assign not a value (part of computer memory), but reference
	// to this object (its phone number).

	// We can now look on how referencs looks in Java.
	System.out.println("\ntwoNumbersVar1 -> " + twoNumbersVar1 + ".");
	System.out.println("twoNumbersVar2 -> " + twoNumbersVar2 + ".");
	System.out.println("We see from that, that twoNumbersVar1 " +
			   "and twoNumbersVar2 are two references to " +
			   "the same object in Java, which is " +
			   "TwoNumbers@someNumber.");
    }
}
