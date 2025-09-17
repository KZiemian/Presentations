class Main {
    public static void main(String[] args) {
	// The way that we create variables in Java is based on how this is
	// done in C++. And C++ of course copied it from C.. First we
	// write the type of the variable, then its name and then we assign
	// the value to it.
	int intVar1 = 0;

	// As we may expect, the name of the variable is replaced by its value
	// in operation of joining strings.
	System.out.println("intVar1 == " + intVar1 + ".");

	// In contrast to C, in Java defining variables in any place of
	// the program is fully acceptable.
	int intVar2 = 1;

	System.out.println("intVar2 == " + intVar2 + ".");

	// In Java we cannot USE variable without initial value before it,
	// which helps prevent many errors.
	// int intVar3;
	// System.out.println("intVar3 == " + intVar3 + ".");

	// Defining uninitialize variable and never using it, is fine,
	// but should be avoided, as it is a bad practice.
	// int intVar3;
	// System.out.println("We do nothing with intVar3.");
    }
}
