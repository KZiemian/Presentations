// Code below defines a class. In Java syntax is as follows. First we have
// word "class", informing Java that we want to define a class. Then the
// name of the class and then inside curly brackets we have code that
// describes our class. We will talk a lot about how to define classes
// in Java.
class TwoIntNumbers {
    int m_intVar1;
    int m_intVar2;
}

class Main {
    public static void main(String[] args) {
	TwoIntNumbers twoIntNumbersVar1 = new TwoIntNumbers();
	TwoIntNumbers twoIntNumbersVar2 = new TwoIntNumbers();

	System.out.print("Instructions:\n" +
			 "twoIntNumbersVar1.m_intVar1 = 1;\n" +
			 "twoIntNumbersVar2.m_intVar2 = 2;\n\n");
	twoIntNumbersVar1.m_intVar1 = 1;
	twoIntNumbersVar1.m_intVar2 = 2;

	System.out.print("Instructions:\n" +
			 "twoIntNumbersVar2.m_intVar1 = 7;\n" +
			 "twoIntNumbersVar2.m_intVar2 = 9;\n\n");
	twoIntNumbersVar2.m_intVar1 = 7;
	twoIntNumbersVar2.m_intVar2 = 9;

	System.out.println("twoIntNumbersVar1.m_intVar1 == " +
			   twoIntNumbersVar1.m_intVar1 + ".");
	System.out.println("twoIntNumbersVar1.m_intVar2 == " +
			   twoIntNumbersVar1.m_intVar2 + ".");

	System.out.println("\ntwoIntNumbersVar2.m_intVar1 == " +
			   twoIntNumbersVar2.m_intVar1 + ".");
	System.out.print("twoIntNumbersVar2.m_intVar2 == " +
			   twoIntNumbersVar2.m_intVar2 + ".\n\n");

	System.out.print("This example shows that every instance of " +
			 "the class has its own set of fields.\n\n" +
			 "We can also create a special field that is " +
			 "shared by all instances of the class. " +
			 "We will talk about it later, since things are " +
			 "already complicated enough.\n\n");

	System.out.println("Few words about coding conventions. " +
			   "For some time we will follow the convention " +
			   "that the name of every field of the class " +
			   "starts with \"m_\", from \"member. This " +
			   "convention is not a very Java thing, you " +
			   "can see it used in many C++ code. But for " +
			   "educational purposes we can use it for some " +
			   "time.");
    }
}
