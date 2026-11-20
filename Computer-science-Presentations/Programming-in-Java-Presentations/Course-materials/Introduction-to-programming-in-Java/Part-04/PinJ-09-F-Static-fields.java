// We need for a moment to go back to the fields, to explain another important
// property of static parts of the class. Why must life be so complicated?

// We again use a silly, but simple example.
class TwoIntNumbersAndOneStatic {
    int m_integerNumber1;
    int m_integerNumber2;

    static int m_staticIntegerNumber1;

    TwoIntNumbersAndOneStatic(int integerNumber1, int integerNumber2) {
	m_integerNumber1 = integerNumber1;
	m_integerNumber2 = integerNumber2;
    }

    void showTwoIntNumbersAndOneStatic() {
	System.out.print("TwoIntNumbers: (" + m_integerNumber1 + ", " +
			 m_integerNumber2 + "). ");
	System.out.print("One static number: " + m_staticIntegerNumber1 +
			 ".");
    }
}

class Main {
    public static void main(String[] args) {
	TwoIntNumbersAndOneStatic twoIntNumbersAndOneStaticVar1 =
	    new TwoIntNumbersAndOneStatic(1, 2);
	TwoIntNumbersAndOneStatic twoIntNumbersAndOneStaticVar2 =
	    new TwoIntNumbersAndOneStatic(3, 4);

	System.out.print("twoIntNumbersAndOneStaticVar1: ");
	twoIntNumbersAndOneStaticVar1.showTwoIntNumbersAndOneStatic();

	System.out.print("\ntwoNumbersAndOneStaticVar2: ");
	twoIntNumbersAndOneStaticVar2.showTwoIntNumbersAndOneStatic();

	// Code above shows that, what we see many times before, that
	// standard fields belong to every INSTANCE of the class
	// and are independent of each other. On the other hand, static
	// fields belong to the class and class has ONLY ONE copy, so also
	// all static parts of it also have only one copy.
	//
	// There is only one copy of the static variable and can be accessed
	// by all instances of the class.

	System.out.println("\n" + "We now change the static field of " +
			   "the class TwoIntNumbersAndOneStatic.");
	twoIntNumbersAndOneStaticVar1.m_staticIntegerNumber1 = 5;

	System.out.print("\n" + "twoIntNumbersAndOneStaticVar1: ");
	twoIntNumbersAndOneStaticVar1.showTwoIntNumbersAndOneStatic();

	System.out.print("\n" + "twoNumbersAndOneStaticVar2: ");
	twoIntNumbersAndOneStaticVar2.showTwoIntNumbersAndOneStatic();

	System.out.println("\n\n" + "You can of course access static " +
			   "fields directly by the class.");
	System.out.println("twoIntNumbersAndOneStatic." +
			   "m_staticIntegerNumber: " +
			   twoIntNumbersAndOneStaticVar1.
			   m_staticIntegerNumber1 + ".");
    }
}

// We want to stress it again: standard methods belong to instances of
// the object, when static methods belong to the class itself.
// If we dig more into the internals of Java this picture will became more
// complicated, but for our curse such understanding is good enough.
