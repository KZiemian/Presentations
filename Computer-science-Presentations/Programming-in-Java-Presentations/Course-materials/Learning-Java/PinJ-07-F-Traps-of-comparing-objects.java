class TwoNumbers {
    int m_intVar1;
    int m_intVar2;
}

class Main {
    public static void main(String[] args) {
	// Comparing objects in Java can be a big source of mistakes.
	TwoNumbers twoNumbersVar1 = new TwoNumbers();
	TwoNumbers twoNumbersVar2 = new TwoNumbers();

	twoNumbersVar1.m_intVar1 = 1;
	twoNumbersVar1.m_intVar2 = 2;

	twoNumbersVar2.m_intVar1 = 1;
	twoNumbersVar2.m_intVar2 = 2;

	System.out.println("Content of the twoNumbersVar1.");
	System.out.println("twoNumbersVar1.m_intVar1 == " +
			   twoNumbersVar1.m_intVar1 + ".");
	System.out.println("twoNumbersVar1.m_intVar2 == " +
			   twoNumbersVar1.m_intVar2 + ".\n");

	System.out.println("Content of the twoNumbersVar2.");
	System.out.println("twoNumbersVar2.m_intVar1 == " +
			   twoNumbersVar2.m_intVar1 + ".");
	System.out.println("twoNumbersVar2.m_intVar2 == " +
			   twoNumbersVar2.m_intVar2 + ".\n");

	System.out.println("Now we will try to check if these two " +
			   "variables are equal.");
	System.out.println("(twoNumbersVar1 == twoNumbersVar2) == " +
			   (twoNumbersVar1 == twoNumbersVar2) + ".");
	System.out.println("(twoNumbersVar1 != twoNumbersVar2) == " +
			   (twoNumbersVar1 != twoNumbersVar2) + ".");
	System.out.println("Why we get these results?\n");

	// In Java operators == and != used for objects (instances of some
	// class) are comparing references, not values. In other words
	// every object takes some space in computer memory and ==
	// checks if two variables point to the same place in memory.
	// If there points to two different places in memory it returns
	// false, EVEN when the values stored in these different parts of
	// memory are THE SAME.

	System.out.println("In Java you should compare objects using " +
			   "equals() method:\n" +
			   "twoNumbersVar1.equals(twoNumbersVar2).");
	System.out.println("But we need to talk about methods first.");
    }
}
