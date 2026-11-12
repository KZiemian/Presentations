class TwoIntNumbers {
    int m_firstNumber;
    int m_secondNumber;

    TwoIntNumbers(int firstNumber, int secondNumber) {
	m_firstNumber = firstNumber;
	m_secondNumber = secondNumber;
    }

    void showTwoNumbers() {
	System.out.println("TwoIntNumbers: (" + m_firstNumber + ", " +
			   m_secondNumber + ").");
    }

    int addYourNumbers() {
	// Instruction return has another important property. It ends
	// execution of every method, so the code after it is never used.
	// This behavior is logical, if you think about methods as a thing
	// that takes some data as input and returns a result. After
	// method returns a result, there is nothing more to do for it,
	// so can be ended.
	//
	// So every code after return is called "unreachable" and Java
	// considers it existence as an error.

	return m_firstNumber + m_secondNumber;

	// System.out.println("This part of method addYourNumbers will " +
	// 		   "never be print to the screen.");
    }

    void multiplyEachNumberByArgument(int multiplicationFactor) {
	m_firstNumber *= multiplicationFactor;
	m_secondNumber *= multiplicationFactor;
    }
}

class Main {
    public static void main(String[] args) {
	TwoIntNumbers twoIntNumbersVar1 = new TwoIntNumbers(1, 2);

	System.out.println("twoIntNumbersVar1.addYourNumbers() == " +
			   twoIntNumbersVar1.addYourNumbers() + ".");

	// Putting return that returns nothing in the function with returning
	// type void is correct. At some level this makes sense.
	return;

	// But putting unreachable code after returning nothing is an error.
	// Again, it can make sense.
	// System.out.println("This code will never be reached.");
    }
}
