// We already many times said that the instance of the class is a box that
// contains fields and methods. One of the reason why we stressed it so much
// is the important property of the static fields and methods in Java. These
// static fields and methods are inside not of instance of the class, but of
// the CLASS itself. We hope that this example explains what this means.

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

    // Silly, but simple.
    static void introduceYourselfClass() {
	System.out.println("I'm stupid, but a very simple class. " +
			   "My name is TwoNumbers.");
    }
}





class Main {
    public static void main(String[] args) {
	System.out.println("TwoIntNumbers.introduceYourselfClass();");

	TwoIntNumbers.introduceYourselfClass();

	// You can see that we didn't call introduceYourselfClass() method of
	// the instance of the class. We didn't even created any instance
	// of the class! We call this method on the CLASS itself. This is why
	// it is so important to distinguish fields and methods belonging to
	// the instance of the class, from the methods and fields belonging
	// to the instance of the class.

	// You can see that we cannot call showNumbers() on the class
	// itself, it will cause an error.
	// TwoIntNumbers.showTwoIntNumbers();
	// Java will force us to distinguish methods belonging to the instance
	// of the class, from the methods of the class itself.
    }
}
