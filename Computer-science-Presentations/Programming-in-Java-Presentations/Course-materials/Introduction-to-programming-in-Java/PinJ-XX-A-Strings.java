// Is string in Java basic type or just another class? The answer is that
// it is class, but soo special that it should be consider as basic type
// as int. To be honest, strings in Java can feel a bit odd and are very
// complicated under the hood. But, if you just want to know how to use them,
// they are very nice.

class Main {
    public static void main(String[] args) {
	// Java have no operators overloading. It mean that you cannot
	// define your type, like MyType and make code like
	// myTypeVar1 = myTypeVar1 + myTypeVar1;
	// works. It is because + is addition operator and code like above
	// is definition of operator overloading. Overloading at it most bacis
	// is telling language how to understand operator + (or operators
	// like -, *, /, etc.) with type defined by programmer.

	// In the Java community it is said that only exception to this rule
	// is that + is overloaded for strings. It is true that, as we
	// seen dozen times already, operator plus works with strings,
	// but we shouldn't spend time debating how correct this statements
	// is. It was used a lot and it is all that is important to us.

	System.out.println("Hello, " + "World!");

	// You can create string variable in Java in two ways.
	String stringVar1 = "abc";
	Strint stringNewVar1 = new String("abc");
	// The first definition is like that for int, the second as for
	// the class. Is there any difference between them?
	// Yes and no.
	// Yes, because stringVar1 and stringNewVar1 will be handled
	// differently by Java.
	// No, because this topic is to advanced for this course and we
	// will bearly care about that.


    }
}
