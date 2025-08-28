// Stupid, but simple

class TwoNumbers {
    int m_intVar1;
    int m_intVar2;

    // We again and again see Java heritage of C++. We define method of
    // the instance of the class by writting first the type that it returns
    // then name of the method and after that parentese (we go back
    // to what is in parentesess in the second) and then body of the method
    // inside round brackets.

    // In our case we are not interested in our method returing any value,
    // but in it printing text to the string. As such, we will state that
    // the type is "void" (emptyness, nothing). Type void is a bit ackward,
    // but very useful.
    void showNumbers() {
	System.out.println(m_intVar1 + ", " + m_intVar2 + ".");
    }
}

class Main {
    // Finally, after so long time, we can explain SOMETHING from this
    // ubiquotius line! We have method main, that returns nothing, so we
    // put "void" before it name. But what is "public" and "static"?
    // These are, unfortunetly, things that we will need to discusse latter.
    public static void main(String[] args) {
	TwoNumbers twoNumbersVar1 = new TwoNumbers();
	TwoNumbers twoNumbersVar2 = new TwoNumbers();

	twoNumbersVar1.m_intVar1 = 1;
	twoNumbersVar1.m_intVar2 = 2;

	twoNumbersVar2.m_intVar1 = 3;
	twoNumbersVar2.m_intVar2 = 4;

	System.out.println("twoNumbersVar1: ");
	twoNumbersVar1.showNumbers();

	System.out.println("twoNumbersVar2: ");
	twoNumbersVar2.showNumbers();

	// The picture that we use to describe instance of the class is that
	// it is a box, that have insides both its fields and methods.
	// We inisists that you think that method is something INSIDE
	// an instance of the class, since there are methods that living
	// outside this particular box. We will talk about them soon.
    }
}

// Setting values of the fields by hand is tediuous, so our next is how to
// make it more pleseant. This concept is soo important, that we want to
// speak about it right now.
