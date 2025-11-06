// To make things simpler, we will create three versions of our silly,
// but simple, class. Two numbers version 1, two numbers version 2
// and two numbers version 3.
class TwoNumbersVerThree {
    int m_intVar1;
    int m_intVar2;

    // You can define multiple constructors for a single class. Which is both
    // very useful and totally confusing.
    TwoNumbersVerThree() {
	m_intVar1 = 1;
	m_intVar2 = 2;
    }

    TwoNumbersVerThree(int intValue1, int intValue2) {
	m_intVar1 = intValue1;
	m_intVar2 = intValue2;
    }

    void showNumbers() {
	System.out.println(m_intVar1 + ", " + m_intVar2 + ".");
    }
}

class Main {
    public static void main(String[] args) {
	// Constructors are identified by the number of arguments that they
	// take. And a few other things, about which we will not talk.
	TwoNumbersVerThree twoNumbersVerThreeVar1 = new TwoNumbersVerThree();
	TwoNumbersVerThree twoNumbersVerThreeVar2 =
	    new TwoNumbersVerThree(3, 4);

	System.out.print("twoNumbersVerThreeVar1: ");
	twoNumbersVerThreeVar1.showNumbers();
	System.out.print("twoNumbersVerThreeVar2: ");
	twoNumbersVerThreeVar2.showNumbers();

	// Creating multiple constructors is a special case of the method
	// overloading, which is a great way to create code that no one
	// understands. Sometimes it can also be useful.
	//
	// But many times you just overload yourself.
    }
}

// These are a lot of things that we can speak about constructors and related
// concepts, but we already had enough of it.
