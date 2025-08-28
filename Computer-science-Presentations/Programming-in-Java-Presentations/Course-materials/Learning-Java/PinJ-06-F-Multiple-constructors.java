// To make things simpler, we will creat three versions of our stupid,
// but simple, class. Two numbers version 1, two numbers version 2
// and two numbers version 3.
class TwoNumbersVerThree {
    int m_intVar1;
    int m_intVar2;

    // You can define multiple constructors for single class. Which is both
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
	TwoNumbersVerThree twoNumbersVerThreeVar1 = new TwoNumbersVerThree();
	TwoNumbersVerThree twoNumbersVerThreeVar2 =
	    new TwoNumbersVerThree(3, 4);

	System.out.println("twoNumbersVerThreeVar1:");
	twoNumbersVerThreeVar1.showNumbers();
	System.out.println("twoNumbersVerThreeVar2:");
	twoNumbersVerThreeVar2.showNumbers();

	// Creating multiple constructors is special case of the method
	// overloading, which is a great way to creat code that noone
	// understand. Sometimes it can also be useful.
    }
}

// These is a lot of things that we can speak about constructors and releted
// concepts, but we already had enough of it.
