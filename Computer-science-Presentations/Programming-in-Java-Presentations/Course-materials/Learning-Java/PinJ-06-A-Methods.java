// Methods are the example of how the fact that Java is object-oriented design
// from top to bottom, make learning it a chellange from time to time.

// If you know what function in languages like C and C++ is, this isn't a
// problem. If you know how memeber functions work in C++ you have bearly
// anything to learn here. But, if you still didn't get what function
// or member function/method is, you will have to streatch your imagination
// a little bit.

// Problem is that while function are simpler objects than methods,
// but in Java more logical is to learn methods first and functions latter.
// This is a price for being object-oriented language from top to bottom.

// Dictionary warning. The same concepts in different programming languages
// have different names. The concept we are talking about is most often
// called "method". But creators of C++ insists that in C++ only proper name
// is member function. In Java both names are fine.

// We are following convention used by Bruce Eckel in his book that we listed
// in bibliography. He use both "method" and "member function", but the first
// one in more prominent.

// We go back to the stupid, but very simple class.

class TwoNumbers {
    int m_intVar1;
    int m_intVar2;

    // The simplest definition of the method is that the method is a part of
    // the class instance, that work on its fields. We start from simple
    // example, that is not as stupid as the whole class.
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

	// We can see that syntax of calling method
	// twoNumbersVar1.showNumbers();
	// looks similiar to "System.out.println()". We discussed what
	// "System.out.println" means long ago and now we will try to tight
	// it together now. The basic syntax for calling method of some
	// object has the form
	// nameOfTheObject.nameOfTheMethod();
	// So we first wrote the name of the object, which method we want
	// to call, then we write "." and then the name of the method
	// that we want to call ending it with parentese. This ending
	// parentese can be empty, but can also have some values that we
	// want send to the method. We will explain it after showing some
	// examples.

	// Syntax "System.out.println" means that there is an object called
	// "System" it has a field called "out" and "out" has a method
	// called "println". Complicated? Unfortunetly, truth is even more
	// complicated, but we will learn it bit by bit.
    }
}
