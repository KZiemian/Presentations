// Object-oriented programming is so central to Java that we will start
// discussing it now, even when we still didn't talk about many Java's
// features.
//
// We will start from a quite silly, but simple example of class, that just
// stores two numbers.

class TwoNumbers {
    int m_intVar1;
    int m_intVar2;
}
// Code above defines class. It tell use that every object build according
// to the rules defined by class TwoNumbers contains inside two integer
// numbers.
//
// Technical term for such internal variables is "field". So class TwoNumbers
// have two fields with the names m_intVar1 and m_intVar2.

// We have seen "class Main" many times already. We explain what it means,
// when we learn a few things about the classes.
class Main {
    public static void main(String[] args) {
	TwoNumbers twoNumbersVar1 = new TwoNumbers();

	twoNumbersVar1.m_intVar1 = 3;
	twoNumbersVar1.m_intVar2 = 5;

	System.out.println("twoNumbersVar1.m_intVar1 == " +
			   twoNumbersVar1.m_intVar1 + ".");
	System.out.println("twoNumbersVar1.m_intVar2 == " +
			   twoNumbersVar1.m_intVar2 + ".");
    }
}
