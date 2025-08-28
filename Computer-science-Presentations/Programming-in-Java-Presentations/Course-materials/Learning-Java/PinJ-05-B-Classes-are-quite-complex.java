class TwoNumbers {
    int m_intVar1;
    int m_intVar2;
}

// This class is silly, but there is still a lot to talk about in it. Classes
// are the heart of Java, so we can spand few dozens hours talking about
// theire various features, but to not be overhelmed, we will approach it
// slowly.

// As we said the class TwoNumbers contains two fields m_intVar1, m_intVar2 of
// the type integers. This basicaly means that each instance (object build
// according to the blueprint of the class) contains inside two numbers of
// the type int and nothing more.

// At least nothing more that we care about on this course, Java guru can
// said that there is some magical dust inside it as well or something like
// that. At this course, we don't care about such an advanced stuff.

class Main {
    public static void main(String[] args) {
	// Every class define new type. Do we need to spend some time
	// explaning what type in programming language is?

	// Because every class define a type, we define variable for holding
	// instances of the class the same way as always:
	// nameOfTheType nameOfVariable = valueToBeAssigned;
	TwoNumbers twoNumbersVar1 = new TwoNumbers();
	// As we can see, the name of the class is at the same time the name
	// of the type defined by this class.

	// Unfortunetly code
	// new TwoNumbers()
	// take us inside rabbit hole that is called "constructors", but for
	// the moment just belief us, that it create new object build
	// according to the blueprint of the class TwoNumbers.

	twoNumbersVar1.m_intVar1 = 7;
	twoNumbersVar1.m_intVar2 = 9;

	// In Java we use "dot notation". If object twoNumbersVar1 has
	// field of the name m_intVar1 we can acces this field writing
	// twoNumbersVar1.m_intVar1
	// Outside that, fields behave much like plain variables. But, of
	// course, there must be a catch and we will talk about it.

	// This "dot notation" partialy explains what System.out.println
	// means. But this is still only partialy explenation.

	System.out.println("twoNumbersVar1.m_intVar1 == " +
			   twoNumbersVar1.m_intVar1 + ".");
	System.out.println("twoNumbersVar1.m_intVar2 == " +
			   twoNumbersVar1.m_intVar2 + ".");
    }
}
