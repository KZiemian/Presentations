class TwoIntNumbers {
    int m_integerNumber1;
    int m_integerNumber2;
}

// This class is silly, but there is still a lot to talk about. Classes
// are the heart of Java, so we can spend few dozens hours talking about
// their various features, but to not be overwhelmed, we will approach it
// slowly.
//
// As we said the class TwoIntNumbers contains two fields m_firstNumber,
// m_secondNumber of the type: integers. This basically means that each
// instance (object build according to the blueprint of the class) contains
// inside two numbers of the type int and nothing more.
//
// We can explain it using analogy. You have documents that describe the
// design of a car. It can contain drawings of car looks, technical
// specification, like power of the engine, etc. You can put all of this
// on a sheet of paper. Then you send this specification to the factory
// and it builds a car according to it.
//
// This is basically how class works. Class is like the design of the car,
// set of rules how to build it. The instance of the class is like
// an actual car built in a factory. It is a real object build according
// to the set of rules contained in the class.

// Is something more in class TwoIntNumbers than two integer numbers?
// Unfortunately it is, but we will talk about it later. For a moment,
// think that this class has only two numbers inside.



class Main {
    public static void main(String[] args) {

	// Every class defines a new type. Do we need to spend some time
	// explaining what type in programming language is?

	// Because every class define a type, we define variable for holding
	// instances of the class in almost the same way as always:
	// nameOfTheType nameOfVariable = valueToBeAssigned;

	TwoIntNumbers twoIntNumbersVar1 = new TwoIntNumbers();

	// As we can see, the name of the class is at the same time the name
	// of the type defined by this particular class.

	// Unfortunately code
	// new TwoIntNumbers()
	// take us inside rabbit hole that is called "constructors", but for
	// the moment just believe us, that it creates a new object built
	// according to the blueprint of the class TwoNumbers.

	System.out.print("Instructions:\n" +
			 "twoIntNumbersVar1.m_integerNumber1 = 1;\n" +
			 "twoIntNubmersVar1.m_integerNumber2 = 2;\n\n");
	twoIntNumbersVar1.m_integerNumber1 = 1;
	twoIntNumbersVar1.m_integerNumber2 = 2;

	// In Java we use "dot notation". If object twoIntNumbersVar1 has
	// field of the name m_integerNumber1 we can access this field
	// by writing instruction
	// twoIntNumbersVar1.m_integerNumber1
	// Outside that, fields behave much like plain variables. But, of
	// course, there must be a catch and we will talk about it.

	// This "dot notation" partially explains what System.out.println()
	// means. But this is still only a partial explanation.

	System.out.println("twoIntNumbersVar1.m_integerNumber1 == " +
			   twoIntNumbersVar1.m_integerNumber1 + ".");
	System.out.println("twoIntNumbersVar1.m_integerNumber2 == " +
			   twoIntNumbersVar1.m_integerNumber2 + ".");
    }
}
