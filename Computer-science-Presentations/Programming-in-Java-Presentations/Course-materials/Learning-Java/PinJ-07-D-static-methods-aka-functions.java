// If you know that there are stand alone object. They existence is not
// dependend on the existence of other objects. The normal method in Java
// are a different story.

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
	return m_intVar1 + m_intVar2;
    }

    void multiplyTwoNumbers(int multiplicationFactor) {
	m_intVar1 *= multiplicationFactor;
	m_intVar2 *= multiplicationFactor;
    }
}

class Main {
    // Can I call method showNumbers() here? Of course not, there is
    // no object of the class TwoNumbers in this program, so there are
    // no fields to show. So this line will produce an error.
    // showNumbers();

    // We told you that object is a box and the fields and methods are
    // inside that box. So if you don't have a box, you don't have
    // anything what is inside.

    // Let stay it this way. Every standard method can only be run
    // as a part of the object to which it belong. Something like
    // twoNumbersVar1.showNumbers();

    // But, what to do when we want have functionality, that shouldn't
    // be part of some object? Java have a solution to this problem,
    // which is as object-oriented as anything in Java.

    public static void main(String[] args) {

    }
}
