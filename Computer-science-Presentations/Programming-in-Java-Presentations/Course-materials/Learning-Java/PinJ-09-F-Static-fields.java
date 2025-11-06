// We need for a moment to go back to the fields, to explain another important
// property of static parts of the class. Why must life be so complicated?

// We again use a silly, but simple example.
class TwoNumbersAndOneStatic {
    int m_intVar1;
    int m_intVar2;

    static int m_staticIntVar1;

    TwoNumbersAndOneStatic(int intValue1, int intValue2) {
	m_intVar1 = intValue1;
	m_intVar2 = intValue2;
    }

    void showNumbers() {
	System.out.print(m_intVar1 + ", " + m_intVar2 + ". ");
	System.out.print("m_staticIntVar1 == " + m_staticIntVar1 + ".");
    }
}

class Main {
    public static void main(String[] args) {
	TwoNumbersAndOneStatic twoNumbersAndOneStaticVar1 =
	    new TwoNumbersAndOneStatic(1, 2);
	TwoNumbersAndOneStatic twoNumbersAndOneStaticVar2 =
	    new TwoNumbersAndOneStatic(3, 4);

	System.out.print("twoNumbersAndOneStaticVar1: ");
	twoNumbersAndOneStaticVar1.showNumbers();

	System.out.print("\ntwoNumbersAndOneStaticVar2: ");
	twoNumbersAndOneStaticVar2.showNumbers();

	// Code above shows that, what we see many times before, that
	// standard fields belong to every INSTANCE of the class
	// and are independent of each other. On the other hand, static
	// fields belong to the class and class has ONLY ONE copy, so also
	// all static parts of it also have only one copy.
	//
	// There is only one copy of the static variable and can be accessed
	// by all instances of the class.

	System.out.println("\nWe now change the static field of the class " +
			   "TwoNumbersAndOneStatic.");
	twoNumbersAndOneStaticVar1.m_staticIntVar1 = 5;

	System.out.print("\ntwoNumbersAndOneStaticVar1: ");
	twoNumbersAndOneStaticVar1.showNumbers();

	System.out.print("\ntwoNumbersAndOneStaticVar2: ");
	twoNumbersAndOneStaticVar2.showNumbers();

	System.out.println("\n\nYou can of course access static fields " +
			   "directly by the class.");
	System.out.println("twoNumbersAndOneStatic.m_staticIntVar1: " +
			   TwoNumbersAndOneStatic.m_staticIntVar1 + ".");
    }
}

// We want to stress it again: standard methods belong to instances of
// the object, when static methods belong to the class itself.
// If we dig more into the internals of Java this picture will became more
// complicated, but for our curse such understanding is good enough.
