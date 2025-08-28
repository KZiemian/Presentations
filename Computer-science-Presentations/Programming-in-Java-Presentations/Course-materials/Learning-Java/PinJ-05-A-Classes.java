// Object-oriented programming is so central to Java, that we will start
// discussin it now, even when still didn't talk about many Java's
// features.

// We will start from quite silly, but simple example of class, that just
// store two numbers.

class TwoNumbers {
    int m_intVar1;
    int m_intVar2;
}
// Code above define class. It tell use that every object build according
// to the rules defined by class TwoNumbers contains inside two integer
// numbers.

// Technical term for such data is "field". So class TwoNumbers have two
// fields with the names m_intVar1 and m_intVar2.

// We see "class Main" many time already. We explain what it mean, when
// we learn basic things about the classes.
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
