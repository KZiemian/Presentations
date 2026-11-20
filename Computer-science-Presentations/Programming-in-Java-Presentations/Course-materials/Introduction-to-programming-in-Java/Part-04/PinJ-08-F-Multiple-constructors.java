// To make things simpler, we will create three versions of our silly,
// but simple, class. Two numbers version 1, two numbers version 2
// and two numbers version 3.

class TwoIntNumbersVerThree {
    int m_integerNumber1;
    int m_integerNumber2;

    // You can define multiple constructors for a single class. Which is both
    // very useful and totally confusing.

    TwoIntNumbersVerThree() {
	m_integerNumber1 = 1;
	m_integerNumber2 = 2;
    }

    TwoIntNumbersVerThree(int integerNumber1, int integerNumber2) {
	m_integerNumber1 = integerNumber1;
	m_integerNumber2 = integerNumber2;
    }

    void showTwoIntNumbersVerThree() {
	System.out.println("TwoIntNumbersVerThree: (" +
			   m_integerNumber1 + ", " + m_integerNumber2 + ").");
    }
}





class Main {
    public static void main(String[] args) {

	// Constructors are identified by the number of arguments that they
	// take. And a few other things, about which we will not talk.

	TwoIntNumbersVerThree twoIntNumbersVerThreeVar1 =
	    new TwoIntNumbersVerThree();
	TwoIntNumbersVerThree twoIntNumbersVerThreeVar2 =
	    new TwoIntNumbersVerThree(3, 4);

	System.out.print("twoIntNumbersVerThreeVar1: ");
	twoIntNumbersVerThreeVar1.showTwoIntNumbersVerThree();
	System.out.print("twoIntNumbersVerThreeVar2: ");
	twoIntNumbersVerThreeVar2.showTwoIntNumbersVerThree();

	// Creating multiple constructors is a special case of the method
	// overloading, which is a great way to create code that no one
	// understands. Sometimes it can also be useful.
	//
	// But many times you just overload yourself.
    }
}

// These are a lot of things that we can speak about constructors and related
// concepts, but we already had enough of it.
