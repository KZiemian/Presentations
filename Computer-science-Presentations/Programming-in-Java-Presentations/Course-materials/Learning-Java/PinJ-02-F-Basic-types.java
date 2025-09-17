class Main {
    public static void main(String[] args) {
	// In Java languages some types are called "basic types", we make
	// a short introduction to some of them.

	// Standard integer numbers.
	int intVar1 = 10;

	System.out.println("intVar1 == " + intVar1 + ".");

	// Byte, just 8 bits of memory.
	byte byteVar1 = 25;

	System.out.println("byteVar1 == " + byteVar1 + ".");

	// Floating-point numbers, single precision (32-bit).
	float float32Var1 = 0.5F;

	System.out.println("float32Var1 == " + float32Var1 + ".");

	// Note "F" in "0.5F". It is needed, since without it, "0.0" would
	// be interpreted as double precision floating-point number,
	// 64-bits of length.

	// You can also use a small "f".
	float32Var1 = 0.75f;

	System.out.println("float32Var1 == " + float32Var1 + ".");


	double float64Var1 = 0.7;

	System.out.println("float64Var1 == " + float64Var1 + ".");

	// Chars in Java represent single characters and as in C and C++
	// they have a numerical side.
	char charVar1 = 'a';

	System.out.println("charVar1 == " + charVar1 + ".");

	charVar1 = 65;

	System.out.println("charVar1 == " + charVar1 + ".");

	// Line below is forbidden in Java and it is a good thing.
	// charVar1 = 'a' + intVar1;

	// Java by design supports Unicode, so this line is also valid.
	charVar1 = 333;

	System.out.println("charVar1 == " + charVar1 + ".");

	// This also works.
	charVar1 = '\u00AB';

	System.out.println("charVar1 == " + charVar1 + ".");

	// Unicode is a very big topic, maybe we will discuss it in more
	// detail some time later. Maybe.

	// Strings are more complicated, as it should be expected. But at
	// at this moment we don't need to care about this that much.
	String stringVar1 = "I'm a string.";

	System.out.println("stringVar1 == " + stringVar1);

	// Our course is quite short, so we will mostly use ints, doubles,
	// strings and boolean variables and values.
    }
}
