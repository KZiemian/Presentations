// After mind bending journey into construcors, we can go back to more
// basic methods.

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

    // Methods can return value. To define such method we first wrote
    // the type of returned value, then name of the method and the parentese
    // with types and names of parameters. As said before, these parentese
    // can be empty, like in example before.
    int addNumbers() {
	return m_intVar1 + m_intVar2;
	// Keyword return is extremlny important. It literally returns
	// value that is after it to the one that called this method.
	// It has also second use, we will talk about it soon.
    }

    // It is often very useful to define methods, that change values of
    // the fields of the class instance. The code that we wrote now is
    // very unprofessional, but we will learn about making it better
    // in the future.

    // This method change values of the fields, so it doesn't need to return
    // anything. As such we declare it as void (void == don't return
    // anything).
    void multiplyTwoNumbers(int multiplicationFactor) {
	m_intVar1 *= multiplicationFactor;
	m_intVar2 *= multiplicationFactor;
    }
}

class Main {
    public static void main(String[] args) {
	TwoNumbers twoNumbersVar1 = new TwoNumbers(1, 2);

	// We can see how method returns value.
	System.out.println("twoNumbersVar1.addNumbers() == " +
			   twoNumbersVar1.addNumbers() + ".\n");

	System.out.println("Methods can change the state of the object.");

	System.out.println("twoNumbersVar1:");
	twoNumbersVar1.showNumbers();

	System.out.println("twoNumberVar1.multiplyTwoNumbers(7);");

	twoNumbersVar1.multiplyTwoNumbers(7);

	System.out.println("twoNumbersVar1:");
	twoNumbersVar1.showNumbers();
    }
}
