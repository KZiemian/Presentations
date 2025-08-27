class TwoNumbers {
    int m_intVar1;
    int m_intVar2;
}

class Main {
    public static void main(String[] args) {
	TwoNumbers twoNumbersVar1 = new TwoNumbers();
	TwoNumbers twoNumbersVar2 = new TwoNumbers();

	twoNumbersVar1.m_intVar1 = 3;
	twoNumbersVar1.m_intVar2 = 5;

	twoNumbersVar2.m_intVar1 = 7;
	twoNumbersVar2.m_intVar2 = 9;

	System.out.println("twoNumbersVar1.m_intVar1 == " +
			   twoNumbersVar1.m_intVar1 + ".");
	System.out.println("twoNumbersVar1.m_intVar2 == " +
			   twoNumbersVar1.m_intVar2 + ".");

	System.out.println("\ntwoNumbersVar2.m_intVar1 == " +
			   twoNumbersVar2.m_intVar1 + ".");
	System.out.println("twoNumbersVar2.m_intVar2 == " +
			   twoNumbersVar2.m_intVar2 + ".");

	// This example shows that every instance of the class have it own
	// set of fields.

	// We can also create "common field" of the class, but we will talk
	// about it latter. It is already complicated enough.
    }
}

// Few words about coding convention. We follow convention that name of every
// field of the class starts with "m_", from "member". This convention
// is much more used in C++ than Java, but for educational purpose it is
// quite fitting.
