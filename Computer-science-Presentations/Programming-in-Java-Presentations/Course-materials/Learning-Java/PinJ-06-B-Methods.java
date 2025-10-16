// Silly, but simple.

class TwoNumbers {
    int m_intVar1;
    int m_intVar2;

    // We again and again see Java heritage from C++. We define method of
    // the instance of the class by writing first the type that it returns
    // then name of the method and after that parenthesis (we go back
    // to what is in parenthesis in the second) and then body of the method
    // inside round brackets.

    // In our case we are not interested in our method returning any value,
    // but in it printing text to the string. As such, we will state that
    // the type is "void" (emptiness, nothing). Type void is a bit awkward,
    // but very useful in Java.
    void showNumbers() {
	System.out.println(m_intVar1 + ", " + m_intVar2 + ".");
    }
}

class Main {
    // Finally, after such a long time, we can explain SOMETHING from this
    // ubiquitous line! We have method main, that returns nothing, so we
    // put "void" before its name. But what is "public" and "static"?
    // These are, unfortunately, things that we will need to discuss later.
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

	// The picture that we use to describe an instance of the class is
	// that it is a box that has insides both its fields and methods.
	// We insists that you think that method is something INSIDE
	// an instance of the class, since there are methods of living
	// outside such a box. We will talk about them soon.
    }
}

// Setting values of the fields by hand is tedious, so our next move is
// to learn how to make it more pleasant. This will lead us to the concept
// soo important that we want to/need to speak about it right now.
