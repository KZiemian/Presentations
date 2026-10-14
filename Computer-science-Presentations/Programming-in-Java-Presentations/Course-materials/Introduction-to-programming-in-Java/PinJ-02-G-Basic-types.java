class Main {
    public static void main(String[] args) {
	// In Java languages some types are called "basic types", we will
	// make a short introduction to some of them.

	// Standard integer numbers.
	int intVar1 = 10;

	System.out.println("Type int is standard integer type.");
	System.out.print("intVar1 == " + intVar1 + ".\n\n\n");

	// Byte, just 8 bits of memory.
	byte byteVar1 = 25;

	System.out.print("Type byte stores signed int of size one byte " +
			   "(eight bits).\n" +
			 "It can store numbers from range -128 to 127.\n");
	System.out.print("byteVar1 == " + byteVar1 + ".\n\n\n");

	// We again want to stress that naming variables in such a way,
	// that their names communicate their meaning is very important.
	// As before, name byteVar1 is shorthand for "byte variable
	// number 1.".
	//
	// Since the whole reason for this variable to exists is to allow
	// us to test how Java handles this type, its name is quite
	// descriptive of its meaning.

	// Floating-point numbers, single precision (32-bit).
	float float32Var1 = 0.5F;

	System.out.println("Type float stores floating-point numbers " +
			   "using 32 bits.");
	System.out.print("float32Var1 == " + float32Var1 + ".\n\n");

	// Note "F" in "0.5F". It is needed, since without it, "0.0" would
	// be interpreted as double precision floating-point number,
	// 64-bits of length.
	//
	// You can also use a small "f".
	float32Var1 = 0.75f;

	System.out.println("In Java, if you want to use a 32 bit long " +
			   "floating-point number, you must end it " +
			   "by \"F\" or \"f\": 0.5F, 0.75f.");
	System.out.println("In any other case, Java will store such " +
			   "numbers using 64 bits.");
	System.out.print("float32Var1 == " + float32Var1 + ".\n\n\n");


	// Floating-point numbers, double precision (64-bit).
	double float64Var1 = 0.7;

	System.out.println("Type double stores floating-point numbers " +
			   "using 64 bits.");
	System.out.print("float64Var1 == " + float64Var1 + ".\n\n\n");

	// Boolean variable.
	boolean boolVar1 = true;

	System.out.println("Type bool stores one of two boolean " +
			   "variables: true or false.");
	System.out.println("boolVar1 == " + boolVar1 + ".");

	boolVar1 = false;

	System.out.print("boolVar1 == " + boolVar1 + ".\n\n\n");


	// Chars in Java represent single characters and as in C and C++
	// they have a numerical side.
	char charVar1 = 'a';

	System.out.println("Type char stores, as names suggest, single " +
			   "char.");
	System.out.println("charVar1 == " + charVar1 + ".");

	System.out.println("Instruction: charVar1 = 65;");
	charVar1 = 65;

	System.out.println("charVar1 == " + charVar1 + ".");

	// Line below is forbidden in Java and this is a good thing.
	// charVar1 = 'a' + intVar1;

	System.out.println("Java by design supports Unicode, " +
			   "so these lines are also valid.");
	System.out.println("Instruction: charVar1 = 333;");
	charVar1 = 333;

	System.out.println("charVar1 == " + charVar1 + ".");

	// This also works.
	System.out.println("Instruction: charVar1 = '\\u00AB';");
	charVar1 = '\u00AB';

	System.out.print("charVar1 == " + charVar1 + ".\n\n");

	System.out.print("For the record, Unicode is a system of " +
			 "defining and classifying characters. It is " +
			 "a very big topic, maybe we will discuss it " +
			 "in more detail some time later. Maybe.\n\n\n");

	// Strings are more complicated, as it should be expected. But at
	// this moment we don't need to care about this that much.
	String stringVar1 = "I'm a string.";

	System.out.println("Type string is of course, for storing " +
			   "strings.");
	System.out.println("stringVar1 == " + stringVar1);

	// Our course is quite short, so we will mostly use ints, doubles,
	// strings and boolean variables and values.
    }
}
