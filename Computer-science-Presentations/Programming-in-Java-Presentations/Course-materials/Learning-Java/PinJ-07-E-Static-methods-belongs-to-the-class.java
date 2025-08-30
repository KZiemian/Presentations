// We already many times said that instance of the class is a box, that
// contains fields and methods. One of the reason why we stressed that is
// the important property of the static fields and methods in Java. These
// static fields and methods are inside not of instance of the class, but of
// the CLASS itself. We hope that this example explain what this mean.

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

    // Stupid, but simple.
    static void introduceYourselfClass() {
	System.out.println("I'm stupid, but very simple class. " +
			   "My name is TwoNumbers.");
    }
}

class Main {
    public static void main(String[] args) {
	System.out.println("TwoNumbers.introduceYourselfClass();");

	TwoNumbers.introduceYourselfClass();

	// You can see that we not call method on the instance of the class.
	// We didn't even created any instance of the class! We call this
	// method on the CLASS itself. This is why it is so important
	// to distingush fields and methods belonging to the instance of the
	// class, from the methods and fields belonging to the instance of
	// the class.

	// You can see, that we cannot call showNumbers() on the class
	// itself, it will cause an error.
	// TwoNumbers.showNumbers();
	// Java will force us to distingish methods belonging to the instance
	// of the class, from the methods of the class itself.
    }
}
