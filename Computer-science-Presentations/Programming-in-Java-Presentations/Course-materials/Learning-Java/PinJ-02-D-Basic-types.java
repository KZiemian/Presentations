class Main {
    public static void main(String[] args) {
	// Java languages have some types that it call "basic types", we
	// make a short introduction to some of them. At this moment it is
	// not important why they are called this way.

	// Standard integer numbers.
	int intVar1 = 10;

	System.out.println("intVar1 == " + intVar1 + ".");

	// Byte, just 8 bits of memory number.
	byte byteVar1 = 25;

	System.out.println("byteVar1 == " + byteVar1 + ".");

	// Floating-point numbers, single precission (32-bit).
	float float32Var1 = 0.5f;

	System.out.println("float32Var1 == " + float32Var1 + ".");

	// Note "f" in "0.5f". It is needed, since without it, "0.0" would
	// be interpreted as double precission floating-point number,
	// 64-bits of length.

	double float64Var1 = 0.7;

	System.out.println("float64Var1 == " + float64Var1 + ".");

	// Strings are more complicated, as it should be excpected. But at
	// this moment we don't need to care about this that much.
	String stringVar1 = "It is a string.";

	System.out.println("stringVar1 == " + stringVar1);
    }
}
