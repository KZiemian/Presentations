class TwoNumbers {
    int m_intVar1;
    int m_intVar2;

    TwoNumbers(int intValue1, int intValue2) {
	m_intVar1 = intValue1;
	m_intVar2 = intValue2;
    }

    void showNumbers() {
	System.out.println(m_intVar1 + ", " + m_intVar2 + ".");
    }

    int addNumbers() {
	// Instruction return has another important property. It ends
	// execution of every method, so the code after it is never used.
	// This behavior is logical if you think about a method as a thing
	// that takes some data as input and returns a result. After
	// method returns a result, there is nothing more to do for it,
	// so can be ended.
	//
	// So every code after return is unreachable and Java considers it
	// existence as an error.

	return m_intVar1 + m_intVar2;

	// System.out.println("This part of method addNumbers will never " +
	// 		   "be print to the screen.");
    }

    void multiplyTwoNumbers(int multiplicationFactor) {
	m_intVar1 *= multiplicationFactor;
	m_intVar2 *= multiplicationFactor;
    }
}

class Main {
    public static void main(String[] args) {
	TwoNumbers twoNumbersVar1 = new TwoNumbers(1, 2);

	System.out.println("twoNumbersVar1.addNumbers() == " +
			   twoNumbersVar1.addNumbers() + ".\n");

	// Putting return that returns nothing in the function with returning
	// type void is correct. At some level this make sense.
	return;

	// But putting unreachable code after returning nothing is an error.
	// Again, it can make sense.
	// System.out.println("This code will never be reached.");
    }
}
