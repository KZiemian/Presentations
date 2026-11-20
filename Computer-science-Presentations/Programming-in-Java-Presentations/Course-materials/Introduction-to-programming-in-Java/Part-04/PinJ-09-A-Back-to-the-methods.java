// After a mind bending journey into constructors, we can go back to more
// basic methods.

class TwoIntNumbers {
    int m_integerNumber1;
    int m_integerNumber2;

    TwoIntNumbers(int integerNumber1, int integerNumber2) {
	m_integerNumber1 = integerNumber1;
	m_integerNumber2 = integerNumber2;
    }

    void showTwoIntNumbers() {
	System.out.println("TwoIntNumbers: (" + m_integerNumber1 + ", " +
			   m_integerNumber2 + ").");
    }

    // Methods can return value. To define such method we first wrote
    // the type of returned value, then name of the method and the parentese
    // with types and names of parameters. As said before, these parentheses
    // can be empty, like in the example below.

    int addYourTwoIntNumbers() {
	return m_integerNumber1 + m_integerNumber2;

	// Keyword return is extremely important. It literally returns
	// value written after it, to the one that called this method.
    }

    // It is often very useful to define methods that change values of
    // the fields of the class instance. The code that we wrote is very
    // unprofessional, but we will learn about making it better
    // in the future.

    // This method changes the values of the fields, so it doesn't need to
    // return anything. As such we declare it as void (void == don't return
    // anything).

    void multiplyEachNumberByArgument(int multiplicationFactor) {
	m_integerNumber1 *= multiplicationFactor;
	m_integerNumber2 *= multiplicationFactor;
    }
}

class Main {
    public static void main(String[] args) {
	TwoIntNumbers twoIntNumbersVar1 = new TwoIntNumbers(1, 2);

	// We can see how the method returns value.

	System.out.print("twoNumbersVar1.addYourTwoIntNumbers() == " +
			   twoIntNumbersVar1.addYourTwoIntNumbers() +
			 ".\n\n");

	System.out.print("Methods can change the state of the " +
			 "object.\n\n");

	System.out.print("twoIntNumbersVar1: ");
	twoIntNumbersVar1.showTwoIntNumbers();

	System.out.println("twoIntNumberVar1." +
			   "multiplyEachNumberByArgument(7);");

	twoIntNumbersVar1.multiplyEachNumberByArgument(7);

	System.out.print("twoIntNumbersVar1: ");
	twoIntNumbersVar1.showTwoIntNumbers();
    }
}
