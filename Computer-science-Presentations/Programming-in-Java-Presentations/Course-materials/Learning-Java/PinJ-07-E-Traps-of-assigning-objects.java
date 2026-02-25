class TwoIntNumbers {
    int m_intVar1;
    int m_intVar2;
}

class Main {
    public static void main(String[] args) {
	TwoIntNumbers twoIntNumbersVar1 = new TwoIntNumbers();
	TwoIntNumbers twoIntNumbersVar2 = new TwoIntNumbers();

	System.out.print("We created two variables, twoIntNumbersVar1, " +
			 "twoIntNumbersVar2, each one of them is " +
			 "a reference to a Java object. Code below " +
			 "illustrates what it means.\n\n");

	System.out.print("Instructions:\n" +
			 "twoIntNumbersVar1.m_intVar1 = 1;\n" +
			 "twoIntNumbersVar1.m_intVar2 = 2;\n" +
			 "twoIntNumbersVar2.m_intVar1 = 7;\n" +
			 "twoIntNumbersVar2.m_intVar2 = 9;\n\n");

	twoIntNumbersVar1.m_intVar1 = 1;
	twoIntNumbersVar1.m_intVar2 = 2;

	twoIntNumbersVar2.m_intVar1 = 7;
	twoIntNumbersVar2.m_intVar2 = 9;

	System.out.println("Results.");
	System.out.println("twoIntNumbersVar1.m_intVar1 == " +
			   twoIntNumbersVar1.m_intVar1 + ".");
	System.out.print("twoIntNumbersVar1.m_intVar2 == " +
			 twoIntNumbersVar1.m_intVar2 + ".\n\n");

	System.out.println("twoIntNumbersVar2.m_intVar1 == " +
			   twoIntNumbersVar2.m_intVar1 + ".");
	System.out.print("twoIntNumbersVar2.m_intVar2 == " +
			 twoIntNumbersVar2.m_intVar2 + ".\n\n");

	System.out.print("Instructions:\n" +
			 "twoIntNumbersVar2 = twoIntNumbersVar1;\n" +
			 "twoIntNumbersVar1.m_intVar1 = 3;\n" +
			 "twoIntNumbersVar1.m_intVar2 = 4;\n\n");

	twoIntNumbersVar2 = twoIntNumbersVar1;

	twoIntNumbersVar1.m_intVar1 = 3;
	twoIntNumbersVar1.m_intVar2 = 4;

	System.out.println("Results.");
	System.out.println("twoIntNumbersVar1.m_intVar1 == " +
			   twoIntNumbersVar1.m_intVar1 + ".");
	System.out.print("twoIntNumbersVar1.m_intVar2 == " +
			 twoIntNumbersVar1.m_intVar2 + ".\n\n");

	System.out.println("twoIntNumbersVar2.m_intVar1 == " +
			   twoIntNumbersVar2.m_intVar1 + ".");
	System.out.print("twoIntNumbersVar2.m_intVar2 == " +
			 twoIntNumbersVar2.m_intVar2 + ".\n\n\n\n");



	System.out.print("How can we understand this? Variable storing " +
			 "TwoIntNumbers instance holds a reference to " +
			 "an object (think about it like a phone " +
			 "number), so when we write a line\n" +
			 "twoIntNumbersVar2 = twoIntNumbersVar1;\n" +
			 "we DON'T make copies of our objects. " +
			 "Instead we create two variables that " +
			 "REFERENCES the same object.\n\n" +
			 "Using example of the phone number, in the line\n" +
			 "twoIntNumbersVar2 = twoIntNumbersVar1;\n" +
			 "we copy the phone number from " +
			 "twoIntNumbersVar1 to twoIntNumbersVar2. " +
			 "Regardless which variable we will use, " +
			 "we will call the same phone number " +
			 "and contact the same phone.\n\n");

	System.out.print("As a result, when we assigned one variable " +
			 "to the other, i.e. we	wrote something like\n" +
			 "intVar1 = intVar2;\n" +
			 "result depends on the type of used " +
			 "variables. If the type of both variables is " +
			 "one of the basic types (boolean, int, float, " +
			 "double, etc.), the value of one variable " +
			 "is copied to the other. Copies of number 1 are " +
			 "as good as \"original\" 1.\n\n");

	System.out.print("If the type of this variable is one of " +
			 "the classes of Java, we assign not a value " +
			 "(part of computer memory), but reference " +
			 "to this object (its phone number).\n\n\n\n");

	System.out.print("We can now look at how references are " +
			 "represented in Java.\n");
	System.out.println("twoIntNumbersVar1 -> " + twoIntNumbersVar1 +
			   ".");
	System.out.println("twoIntNumbersVar2 -> " + twoIntNumbersVar2 +
			   ".");
	System.out.println("We see from that, that twoNumbersVar1 " +
			   "and twoNumbersVar2 are two references to " +
			   "the same object in Java, which is " +
			   "TwoNumbers@someNumber.");
    }
}
