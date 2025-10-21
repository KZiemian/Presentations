// CHECK COMMETS
// If you know functions you also know that they are the stand alone objects.
// Their existence is not dependent on the existence of other objects.
// The normal method in Java is a quite different story.

class TwoNumbers {
    int m_intVar1;
    int m_intVar2;

    TwoNumbers(int intValue1, int intValue2) {
	m_intVar1 = intValue1;
	m_intVar2 = intValue2;
    }

    void showNumbers() {
	System.out.println(m_intVar1 + ", " + m_intVar2 + ".");
    }

    int addNumbers() {
	return m_intVar1 + m_intVar2;
    }

    void multiplyTwoNumbers(int multiplicationFactor) {
	m_intVar1 *= multiplicationFactor;
	m_intVar2 *= multiplicationFactor;
    }
}

class Main {
    // Can I call the method showNumbers() here? Of course not, there is
    // no object of the class TwoNumbers in this program, so there are
    // no fields to show. So this line will produce an error.
    // showNumbers();
    //
    // We told you that the object is a box and the fields and methods are
    // inside that box. So if you don't have a box, you don't have
    // anything that is inside.
    //
    // Let it stay this way. Every standard method can only be run
    // as a part of the object to which it belongs. Something like
    // twoNumbersVar1.showNumbers();

    // But, what to do when we want to have functionality that shouldn't
    // be part of some object? Java have a solution to this problem,
    // which is as object-oriented as anything in Java. We explain it more
    // using examples.

    // We want to compute a simple function.
    // linearFunction(x) = 2.0 * x + 1.0
    // few times in our program. Attaching it to the object will be awkward.
    // Because in our context, there is no object to attach it.
    //
    // We should consider few possible options. Maybe we should create
    // object to store this function? But, then we will have ability to
    // create many instance of such function, while we need only one. This
    // would be unnatural and confusing.
    //
    // Maybe we should attach it to variable x? But, there is no point in
    // creating object for such variable, since what is important
    // is a function, not such a variable. It also has downsides of
    // previous approach.
    //
    // Java gives us a solution for such problems: static methods. Static
    // method is always a single object, you can't create multiple version
    // of it. Here is the static function computing mentioned above.
    static double linearFunction(double x) {
	return 2.0 * x + 1.0;
    }

    public static void main(String[] args) {
	double x = 0.0;

	System.out.println("linearFunction(" + x + ") == " +
			   linearFunction(0.0) + ".");

	System.out.println("linearFunction(" + x + ") == " +
			   linearFunction(1.0) + ".");
	System.out.println("linearFunction(" + x + ") == " +
			   linearFunction(2.0) + ".");
	System.out.println("linearFunction(" + x + ") == " +
			   linearFunction(3.0) + ".");
    }

    // Now we can, after so long time, explain another part part of the line
    // public static void main(String[] args) {
    // Word "static" is here to assure that this method can be run without
    // creating any object to which it is attached.
    //
    // In fact method main() is closely related to FUNCTION main() in C++
    // (and in C, when it was before). Again and again, we can see that
    // Java is very much based on C++. Like FUNCTION main() in C++, METHOD
    // main() in Java is special on many levels. Every program in Java
    // that can be run directly, must contain ONE AND ONLY ONE main() method.
    // Only code that directly or indirectly is used inside the main() method
    // will be run by this program.

    // We must remind you, that outside programs that are directly run
    // by the user, there are also programs that are not intended to by
    // run that way. There are also "helpers programs", that are not run
    // directly by users, but by other programs. So the rules are as follows.
    // 1) Every program that is directly run by the user, needs to have
    //    one and only one main method().
    // 2) "Helper programs" don't have a main() method.

    // If we run the program directly, Java is searching for the main()
    // method and runs it. This is another special property of main()
    // method: program just run it. You will never write directly the call
    // to it, which would like something like these.
    // Main.main("I ", "am", "learning", "Java.");
    // More about it in a minute.
}
