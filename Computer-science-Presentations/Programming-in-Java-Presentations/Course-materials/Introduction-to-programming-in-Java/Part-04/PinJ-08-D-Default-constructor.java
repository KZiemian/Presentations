// In Java almost everything is an object and every object needs
// a constructor. This is the reason why we spend time right now talking
// about them.

// To make things simpler, we will create three versions of our silly,
// but simple, class. Two numbers version 1, two numbers version 2
// and two numbers version 3. For now, we only need class TwoNumbersVerOne.
class TwoNumbersVerOne {
    int m_intVar1;
    int m_intVar2;

    void showNumbers() {
	System.out.println(m_intVar1 + ", " + m_intVar2 + ".");
    }
}



class Main {
    public static void main(String[] args) {
	TwoNumbersVerOne twoNumbersVerOneVar1 = new TwoNumbersVerOne();
	// We can now understood better, why when creating instance of the
	// class, we wrote
	// new TwoNumbersVerOne();
	// We were calling the constructor of the class to set up our new
	// object.
	//
	// But we DIDN'T define any constructor for our class. Yes, but
	// object-oriented programming is so central to Java, that if we
	// don't define a constructor to our class, Java creates a default
	// constructor for us. We won't dig down what default constructor
	// do, we just mention that it is responsible for "zeroing fields".
	System.out.println("twoNumbersVerOne.m_intVar1 == " +
			   twoNumbersVerOneVar1.m_intVar1 + ".");
	System.out.println("twoNumbersVerOne.m_intVar2 == " +
			   twoNumbersVerOneVar1.m_intVar2 + ".");

	// It should be quite clear that the default constructor doesn't
	// take any arguments, because Java doesn't know how to use such
	// additional data. To see it, compare line
	// new TwoNumbersVerOne();
	// with what we had before:
	// new TwoNumbers(1, 2);

	// How can we describe the role of a constructor? Everytime when we
	// want to create object of new class computer give us a part of
	// memory, where it will be stored. Then the constructor changes this
	// part of memory, transforming it according to class description.
	// In our cases, the default constructor outlines when in this
	// piece of memory should be placed integers m_intVar1 and m_intVar2,
	// then it sets their values to 0.

	// We again want to stress that the constructor NEVER returns any
	// value. We can think that in the instruction
	// TwoNumbersVerOne twoNumbersVerOneVar1 = new TwoNumberVerOne();
	// the "new" word is what tells the instruction
	// new TwoNumberVerOne()
	// to return reference to our class instance. And this return
	// reference is then stored in the variable twoNumbersVerOneVar1.
	// Why must life be so complicated?
    }
}
