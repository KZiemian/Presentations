class TwoIntNumbers {
    int m_integerNumber1;
    int m_integerNumber2;

    TwoIntNumbers(int integerNumber1, int integerNumber2) {
	m_integerNumber1 = integerNumber1;
	m_integerNumber2 = integerNumber2;
    }

    void showTwoNumbers() {
	System.out.println("TwoIntNumbers: (" + m_integerNumber1 + ", " +
			   m_integerNumber2 + ").");
    }

    int addYourTwoIntNumbers() {
	// Instruction return has another important property. It ends
	// execution of every method, so the code after it is never used.
	// This behavior is logical, if you think about methods as a thing
	// that takes some data as input and returns a result. After
	// method returns a result, there is nothing more to do for it,
	// so can be ended.
	//
	// So every code after return is called "unreachable" and Java
	// considers it existence as an error.

	return m_integerNumber1 + m_integerNumber2;

	// System.out.println("This part of method addYourNumbers will " +
	// 		   "never be print to the screen.");
    }

    void multiplyEachNumberByArgument(int multiplicationFactor) {
	m_integerNumber1 *= multiplicationFactor;
	m_integerNumber2 *= multiplicationFactor;
    }
}

class Main {
    public static void main(String[] args) {
	TwoIntNumbers twoIntNumbersVar1 = new TwoIntNumbers(1, 2);

	System.out.println("twoIntNumbersVar1.addYourTwoIntNumbers() == " +
			   twoIntNumbersVar1.addYourTwoIntNumbers() + ".");

	// Putting return that returns nothing in the function with returning
	// type void is correct. At some level this makes sense.

	return;

	// But putting unreachable code after returning nothing is an error.
	// Again, it can make sense.
	// System.out.println("This code will never be reached.");
    }
}
