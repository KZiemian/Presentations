// Methods are an example of how much Java is an object-oriented language.
// It makes learning it from time to time quite hard.
//
// If you know what function is in languages like C and C++ is, methods
// are not so complicated. If you know how member functions work in C++ you
// have barely anything to learn here. But, if you still didn't get what
// function or member function/method is, you will have to stretch your
// imagination a little bit.
//
// Problem is that functions are simpler objects than methods,
// but in Java it is more logical to learn methods first and Java's functions
// later. This is a price for it being object-oriented language from top to
// bottom.

// Dictionary warning. The same concepts in different programming languages
// have different names. The concept we are talking about is most often
// called "method". But creators of C++ insists that in C++ only proper name
// is "member function". In Java both names are fine.
//
// We are following convention used by Bruce Eckel in his book that we listed
// in bibliography. He uses both "method" and "member function", but the first
// one is more prominent.

// We go back to the silly, but very simple class.

class TwoNumbers {
    int m_intVar1;
    int m_intVar2;

    // The simplest definition of the method is that the method is a part of
    // the class instance that works on its fields. We start from simple
    // example, that is not as silly as the whole class.
    void showNumbers() {
	System.out.println(m_intVar1 + ", " + m_intVar2 + ".");
    }
}

class Main {
    public static void main(String[] args) {
	TwoNumbers twoNumbersVar1 = new TwoNumbers();
	TwoNumbers twoNumbersVar2 = new TwoNumbers();

	twoNumbersVar1.m_intVar1 = 1;
	twoNumbersVar1.m_intVar2 = 2;

	twoNumbersVar2.m_intVar1 = 3;
	twoNumbersVar2.m_intVar2 = 4;

	System.out.println("Now we use method showNumbers() to print " +
			   "values of the fields to the screen.");

	System.out.println("twoNumbersVar1: ");
	twoNumbersVar1.showNumbers();

	System.out.println("twoNubmersVar2: ");
	twoNumbersVar2.showNumbers();

	System.out.println("\nWe can see how methods can be usefull.");

	// We can see that the syntax of the calling method
	// twoNumbersVar1.showNumbers();
	// looks similar to "System.out.println()". We discussed what
	// "System.out.println" means a long time ago and now we will try to
	// tighten it together. The basic syntax for calling method of some
	// object has the form
	// nameOfTheObject.nameOfTheMethod();
	// So we first write the name of the object, then we write "."
	// and then the name of the method that we want to call ending it
	// with parentese. This ending parenthesis can be empty, but can also
	// have some values that we want to send to the method. We will
	// explain after showing some examples.

	// Syntax "System.out.println" means that there is an object called
	// "System" it has a field called "out" and "out" has a method
	// called "println". Complicated? Unfortunately, the truth is even
	// more complicated, but we will learn it bit by bit.
    }
}
