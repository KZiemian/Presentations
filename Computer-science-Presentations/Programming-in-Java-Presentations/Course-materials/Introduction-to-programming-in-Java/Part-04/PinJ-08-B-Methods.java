// Silly, but simple.

class TwoIntNumbers {
    int m_integerNumber1;
    int m_integerNumber2;

    // We again and again see Java heritage from C++. We define method of
    // the instance of the class by writing first the type that it returns,
    // then name of the method and after that parenthesis and then body of
    // the method inside curly brackets. We go back to what is in parenthesis
    // in a second.

    // In our case we are not interested in our method returning any value,
    // but in it printing text to the string. As such, we will state that
    // the type is "void" (emptiness, nothing). Type void is a bit awkward,
    // but very useful in Java.

    void showTwoIntNumbers() {
	System.out.print("TwoNumbers: (" + m_integerNumber1 + ", " +
			 m_integerNumber2 + ").");
    }
}





class Main {

    // Finally, after such a long time, we can explain SOMETHING from this
    // ubiquitous line! We have method main, that returns nothing, so we
    // put "void" before its name. But what is "public" and "static"?
    // These are, unfortunately, things that we will need to discuss later.

    public static void main(String[] args) {
	TwoIntNumbers twoIntNumbersVar1 = new TwoIntNumbers();
	TwoIntNumbers twoIntNumbersVar2 = new TwoIntNumbers();

	twoIntNumbersVar1.m_integerNumber1 = 1;
	twoIntNumbersVar1.m_integerNumber2 = 2;

	twoIntNumbersVar2.m_integerNumber1 = 3;
	twoIntNumbersVar2.m_integerNumber2 = 4;

	System.out.print("twoNumbersVar1: ");
	twoIntNumbersVar1.showTwoIntNumbers();

	System.out.print("\ntwoNumbersVar2: ");
	twoIntNumbersVar2.showTwoIntNumbers();

	// The picture that we use to describe an instance of the class is
	// that it is a box that has insides both its fields and methods.
	// We insists that you think that method is something INSIDE
	// an instance of the class, since there are methods of living
	// outside such a box. We will talk about them soon.
    }
}

// We can now say more about the "class Main" line of code. Java is language
// that is object-oriented from top to bottom, so even method main()
// must be part of some class. So in line
// class Main {
// we start defining class of the name "Main", which has a static method
// public static void main(String[] args)
// that Java runs by default. We hope that these things are clear enough now.
