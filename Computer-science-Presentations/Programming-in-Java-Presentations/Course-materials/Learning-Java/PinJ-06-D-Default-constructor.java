// In Java almost everything is an object and every object need a constructor.
// This is the reason, why we spend time right now talking about them.

// To make things simpler, we will creat three versions of our stupid,
// but simple, class. Two numbers version 1, two numbers version 2
// and two numbers version 3.
class TwoNumbersVerOne {
    int m_intVar1;
    int m_intVar2;
}



class Main {
    public static void main(String[] args) {
	TwoNumbersVerOne twoNumbersVerOneVar1 = new TwoNumbersVerOne();
	// We can now understood better, why creating instance of the class,
	// we wrote
	// new TwoNumbersVerOne();
	// We were calling the constructor of the class to set up our new
	// object.

	// But we DIDN'T defined any constructor for our class. Yes, but
	// object-oriented programming is so central to Java, that if we
	// don't define construtor to our class, Java create default
	// constructor for us. We won't dig down what default construtor
	// do, we just mention that it is responsible for zeroing variables.
	System.out.println("twoNumbersVerOne.m_intVar1 == " +
			   twoNumbersVerOneVar1.m_intVar1 + ".");
	System.out.println("twoNumbersVerOne.m_intVar2 == " +
			   twoNumbersVerOneVar1.m_intVar2 + ".");

	// It should be quite clear that default constructor doesn't
	// take any arguments, because Java don't know what they should be.
	// Compare lines
	// new TwoNumbersVerOne();
	// with our previous
	// new TwoNumbers(1, 2);

	// How we can describe the role of constructor? Everytime when we
	// want to create object of new class computer give us a part of
	// memory, when it will be stored. Then constructor change this
	// part of memory, transforming it according to class definition.
	// In our cases, default construtor outline when in this peace of
	// memory should be placed integers m_intVar1 and m_intVar2, then
	// it sets they value to 0.

	// We again want to stress that construtor NEVER return any value.
	// We can think that in the instruction
	// TwoNumbersVerOne twoNumbersVerOneVar1 = new TwoNumberVerOne();
	// the "new" word is what tells the instrution
	// new TwoNumberVerOne()
	// to return reference to our class. And this return reference is
	// then stored in the variable twoNumbersVerOneVar1.
	// Why life must be soo complicated?
    }
}
