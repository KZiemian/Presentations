// Constructor is a very important concept in Java, so we will discuss it
// before other, probably more simple things. Yet again, in design of Java's
// constructor we see the influence of C++.

class TwoNumbers {
    int m_intVar1;
    int m_intVar2;

    // Constructor is a method, but a very odd method. It does not return any
    // value, but DOESN'T have a type void. The reason that Eckel gives for
    // that in his book "Thinking Java" (full bibliography is in the lecture
    // materials) is as follows. If we would define constructor as
    // void ConstructorName()
    // one can change it to
    // int ConstructorName()
    // but we don't want that. Why? This is another thing copied from C++,
    // and to be honest, we don't know how they justified such a choice.

    // Second odd thing is that the constructor MUST, absolutely MUST have
    // the same name as the class. No exceptions to this rule.

    // In the parentese after name of the method (all methods, not only
    // the constructor) we can put
    // (typeOfParameter1 parameterName1, typeOfParameter2 parameterName2,
    // typeOfParameter3 parameterName3, ...)
    // Namely, the list of parameters that method will take. Like in defining
    // variable, every position in this list is in the form
    // "typeOfParameter parameterName".

    // The choice of parameters in the case of constructor of silly class
    // TwoNumbers is obvious: numbers to which we want to set two fields of
    // the class.
    TwoNumbers(int intValue1, int intValue2) {
	m_intVar1 = intValue1;
	m_intVar2 = intValue2;
    }
    // This code is in the current state quite unprofessional, but we will
    // make it better when we learn more.

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
