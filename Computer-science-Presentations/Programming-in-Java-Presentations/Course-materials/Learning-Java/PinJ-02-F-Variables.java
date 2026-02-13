class Main {
    public static void main(String[] args) {
	// The way that we create variables in Java is based on how it is
	// done in C++. And C++ of course copied it from C. First we
	// write the type of the variable, then its name and then we assign
	// the value to it.
	int intVar1 = 0;

	// We name our variable intVar1, because it is shorthand for
	// "integer variable number 1". Since this variable exists only
	// to show us how Java works with integer numbers, this name in
	// some way explains the function of this variable.
	//
	// In any language it is very important to name variables in the way
	// that communicate their meaning. We hope that in current context
	// name intVar1 is reasonable good one.

	// As we may expect, the name of the variable is replaced by its value
	// in operation of joining strings.
	System.out.println("intVar1 == " + intVar1 + ".");

	 // In contrast to C and its various standards, in Java defining
	// variables in any place of the program is always fully acceptable.
	int intVar2 = 1;

	System.out.println("intVar2 == " + intVar2 + ".");

	// In Java we cannot USE a variable without giving it initial value,
	// which helps prevent many errors.
	// int intVar3;
	// System.out.println("intVar3 == " + intVar3 + ".");
	//
	// Defining uninitialize variable and never using it, is fine,
	// but should be avoided, as it is a bad practice that leads to
	// confusion.
	// int intVar3;
	// System.out.println("We do nothing with intVar3.");
    }
}
