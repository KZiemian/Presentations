// Constructor is very important concept in Java, so we will discusse it before
// other, probably more simple concepts. Yet again, in design of Java's
// constructor we see influence of C++.

class TwoNumbers {
    int m_intVar1;
    int m_intVar2;

    // Constructor is a method, but very odd method. It do not return any
    // value, but DOESN'T have a type void. The reason that Eckel give for
    // that in his book "Thinking Java" (full bibliography is in the lecture
    // materials) is as follow. If we would define constructor as
    // void ConstructorName()
    // one can change it to
    // int ConstructorName()
    // but we don't want that. Why? This is another thing copied from C++,
    // so we need to check what justification people behind C++ give for this.

    // Second odd thing is that constructor MUST, absolutly MUST have
    // the same name as the class. No exceptions to this rule.

    // In the parentese after name of the method (all methods, not only
    // the constructor) we can put
    // (typeOfParameter1 parameterName1, typeOfParameter2 parameterName2,
    // typeOfParameter3 parameterName3, ...)
    // Namely, the list of parameters that method will take. Like in defining
    // variable, ever position in this list is in the form
    // "typeOfParameter parameterName".

    // The choice of parameters in the case of stupid class TwoNumbers
    // is obviousl: numbers to which we want set two fields of the class.
    TwoNumbers(int intValue1, int intValue2) {
	m_intVar1 = intValue1;
	m_intVar2 = intValue2;
    }
    // This code is in the current state quite unprofessional, but we will
    // make it better when we lear more.

    // Method showNumbers() will be useful also this time.
    void showNumbers() {
	System.out.println(m_intVar1 + ", " + m_intVar2 + ".");
    }
}

class Main {
    public static void main(String[] args) {
	TwoNumbers twoNumbersVar1 = new TwoNumbers(1, 2);
	TwoNumbers twoNumbersVar2 = new TwoNumbers(3, 4);

	System.out.println("twoNumbersVar1: ");
	twoNumbersVar1.showNumbers();

	System.out.println("twoNumbersVar2: ");
	twoNumbersVar2.showNumbers();

	System.out.println("\nEverything works as it should.");
    }
}
