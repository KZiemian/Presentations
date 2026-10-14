class TwoIntNumbers {
    int m_intVar1;
    int m_intVar2;
}

class Main {
    public static void main(String[] args) {
	// Comparing objects in Java can be a big source of mistakes.
	TwoIntNumbers twoIntNumbersVar1 = new TwoIntNumbers();
	TwoIntNumbers twoIntNumbersVar2 = new TwoIntNumbers();

	twoIntNumbersVar1.m_intVar1 = 1;
	twoIntNumbersVar1.m_intVar2 = 2;

	twoIntNumbersVar2.m_intVar1 = 1;
	twoIntNumbersVar2.m_intVar2 = 2;



	System.out.print("Comparing objects in Java also can be " +
			 "a big source of mistakes.\n\n");

	System.out.println("Content of the twoIntNumbersVar1:");
	System.out.println("twoIntNumbersVar1.m_intVar1 == " +
			   twoIntNumbersVar1.m_intVar1 + ",");
	System.out.print("twoIntNumbersVar1.m_intVar2 == " +
			   twoIntNumbersVar1.m_intVar2 + ".\n\n");

	System.out.println("Content of the twoIntNumbersVar2:");
	System.out.println("twoIntNumbersVar2.m_intVar1 == " +
			   twoIntNumbersVar2.m_intVar1 + ",");
	System.out.print("twoIntNumbersVar2.m_intVar2 == " +
			   twoIntNumbersVar2.m_intVar2 + ".\n\n");



	System.out.println("Now we will try to check if these two " +
			   "variables are equal.");
	System.out.println("(twoIntNumbersVar1 == twoIntNumbersVar2) == " +
			   (twoIntNumbersVar1 == twoIntNumbersVar2) + ".");
	System.out.println("(twoIntNumbersVar1 != twoIntNumbersVar2) == " +
			   (twoIntNumbersVar1 != twoIntNumbersVar2) + ".");
	System.out.print("Why do we get these results?\n\n");



	System.out.print("In Java operators \"==\" and \"!=\" are used " +
			 "with objects (instances of some class) are " +
			 "comparing references, not values. " +
			 "In other words, every object takes some space " +
			 "in computer memory and operator \"==\" " +
			 "checks if two variables point to the same " +
			 "place in memory. If there points to two " +
			 "different places in memory it returns " +
			 "false, EVEN when the values stored in these " +
			 "different parts of memory are THE SAME.\n\n");



	System.out.println("In Java you should compare objects using " +
			   "equals() method:\n" +
			   "twoIntNumbersVar1.equals(twoIntNumbersVar2);");
	System.out.println("We now need to talk about methods in Java.");
    }
}
