// Setting values of the fields by hand is tedious, so our next move is
// to learn how to make it more pleasant. This will lead us to the concept
// soo important that we want/need to speak about it right now.
//
// Constructor is a very important concept in Java, so we will discuss it
// before other, probably more simple things. Yet again, in design of Java's
// constructor we see the influence of C++.

class TwoIntNumbers {
    int m_integerNumber1;
    int m_integerNumber2;

    // Constructor is a method, but a very odd method. It does not return any
    // value, but DOESN'T have a type void. The reason that Eckel gives for
    // that in his book "Thinking Java" (full bibliography is in the lecture
    // materials) is as follows. If we would define constructor as
    // void ConstructorName()
    // one can change it to
    // int ConstructorName()
    // but we don't want that. Why? This is another thing copied from C++,
    // and to be honest, we don't know how they justified such a choice.
    //
    // Second odd thing is that the constructor MUST, absolutely MUST have
    // the same name as the class. No exceptions to this rule.
    //
    // In the parentese after name of the method (all methods, not only
    // the constructor) we can put
    // (typeOfParameter1 parameterName1, typeOfParameter2 parameterName2,
    // typeOfParameter3 parameterName3, ...)
    // Namely, the list of parameters that method will take. Like with
    // defining variable, every position in this list is in the form
    // "typeOfParameter parameterName".

    // The choice of parameters in the case of constructor of silly class
    // TwoNumbers is obvious: numbers to which we want to set two fields of
    // the class.

    TwoIntNumbers(int integerNumber1, int integerNumber2) {
	m_integerNumber1 = integerNumber1;
	m_integerNumber2 = integerNumber2;

	// This is cumbersome. It would be nice to name BOTH field of
	// the class and argument of the method as "integerNumber1",
	// but then we wouldn't know which is which. So we start
	// name of the fields with prefix "m_" from "member of the class".
	// It is still not the best solution, since names of fields are
	// now a bit odd.
	//
	// Fortunetly, Java has mechanism to overcome this problem, we will
	// talk about it soon.
    }

    // This code is in the current state quite unprofessional, but we will
    // make it better when we learn more.

    // Method showNumbers() will be useful also this time.

    void showTwoIntNumbers() {
	System.out.print("TwoIntNumbers: (" + m_integerNumber1 + ", " +
			 m_integerNumber2 + ").");
    }
}





class Main {
    public static void main(String[] args) {
	TwoIntNumbers twoIntNumbersVar1 = new TwoIntNumbers(1, 2);
	TwoIntNumbers twoIntNumbersVar2 = new TwoIntNumbers(3, 4);

	System.out.print("twoIntNumbersVar1: ");
	twoIntNumbersVar1.showTwoIntNumbers();

	System.out.print("\n" + "twoIntNumbersVar2: ");
	twoIntNumbersVar2.showTwoIntNumbers();

	System.out.println("\n\n" + "Everything works as it should.");
    }
}
