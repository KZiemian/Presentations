class TwoNumbers {
    int m_intVar1;
    int m_intVar2;
}

class Main {
    public static void main(String[] args) {
	// In Java using an uninitialized variable will bring an error,
	// but fields of the class instance are treated in a special way.
	TwoNumbers twoNumbersVar1 = new TwoNumbers();

	System.out.println("twoNumbersVar1.m_intVar1 == " +
			   twoNumbersVar1.m_intVar1 + ".");
	System.out.println("twoNumbersVar1.m_intVar2 == " +
			   twoNumbersVar1.m_intVar2 + ".");

	// When an instance of the class is created and we didn't set
	// the values of the fields, they are zeroed. More precisely default
	// values of their types are assigned for them, for numbers such
	// value is 0.
    }
}
