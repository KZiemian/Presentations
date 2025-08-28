class TwoNumbers {
    int m_intVar1;
    int m_intVar2;
}

class Main {
    public static void main(String[] args) {
	// Assigment of variables that contains basic types is easy.
	// But for objects can be quite confusing.
	TwoNumbers twoNumbersVar1 = new TwoNumbers();
	TwoNumbers twoNumbersVar2 = new TwoNumbers();

	twoNumbersVar1.m_intVar1 = 4;
	twoNumbersVar1.m_intVar2 = 6;

	twoNumbersVar2.m_intVar1 = 11;
	twoNumbersVar2.m_intVar2 = 13;

	System.out.println("twoNumbersVar1.m_intVar1 == " +
			   twoNumbersVar1.m_intVar1 + ".");
	System.out.println("twoNumbersVar1.m_intVar2 == " +
			   twoNumbersVar1.m_intVar2 + ".");

	System.out.println("\ntwoNumbersVar2.m_intVar1 == " +
			   twoNumbersVar2.m_intVar1 + ".");
	System.out.println("twoNumbersVar2.m_intVar2 == " +
			   twoNumbersVar2.m_intVar2 + ".");

	twoNumbersVar2 = twoNumbersVar1;

	twoNumbersVar1.m_intVar1 = 1;
	twoNumbersVar2.m_intVar2 = 2;

	System.out.println("\ntwoNumbersVar1.m_intVar1 == " +
			   twoNumbersVar1.m_intVar1 + ".");
	System.out.println("twoNumbersVar1.m_intVar2 == " +
			   twoNumbersVar1.m_intVar2 + ".");

	System.out.println("\ntwoNumbersVar2.m_intVar1 == " +
			   twoNumbersVar2.m_intVar1 + ".");
	System.out.println("twoNumbersVar2.m_intVar2 == " +
			   twoNumbersVar2.m_intVar2 + ".");

	// How to understand this? Every object occupied some space in
	// the memory of the computer, it can be in RAM or on the disk,
	// this is not important to us. When we write a line
	// twoNumbersVar2 = twoNumbersVar1;
	// we DON'T make copy of our object, we create two variabels
	// that references the same object in the memory.

	// You can think about having two keys to one house. Regardless
	// which you use, you will enter the same house. In our situation
	// these two keys are two variables: twoNumbersVar2, twoNumbersVar1.
	// I hope that this make a problem a little bit clear.

	// In short, when we assigned one variable to the other, i.e. we
	// wrote something like
	// intVar1 = intVar2;
	// result depends on the type of this variables. If the type of
	// both variables is one of the basic types (boolean, int, float,
	// double), value of one variable is copied to the other.
	// If type of this variable is one of the classes of Java,
	// we assign not a value (part of computer memory), but reference
	// to this object.

	// I hope this is enough explenation for now. We will probably go
	// back to this point some time in the future.
    }
}
