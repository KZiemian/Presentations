class TwoNumbers {
    int m_intVar1;
    int m_intVar2;
}

class Main {
    public static void main(String[] args) {
	// In Java using uninitianilize variable will bring an error,
	// but fields of the class instance are treated in special way.
	TwoNumbers twoNumbersVar1 = new TwoNumbers();

	System.out.println("twoNumbersVar1.m_intVar1 == " +
			   twoNumbersVar1.m_intVar1 + ".");
	System.out.println("twoNumbersVar1.m_intVar2 == " +
			   twoNumbersVar1.m_intVar2 + ".");

	// When instance of the class is created and we didn't set
	// the values of the fields, the are zeroed. More precisly defalute
	// values of their types are assigned for them, for numbers such
	// value is 0.
    }
}
