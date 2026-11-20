class Main {
    public static void main(String[] args) {

	// The way that we create variables in Java is based on how it is
	// done in C++. And C++ of course copied it from C. First we
	// write the type of the variable, then its name and then we assign
	// the value to it.

	int integerNumber1 = 0;

	// We name our variable integerNumber1, because this variable exists
	// only to show us how Java works with integer numbers, this name
	// in some way explains the function of this variable.
	//
	// In any language it is very important to name variables in the way
	// that communicate their meaning. We hope that in current context
	// name integerNumber1 is reasonable good one.

	// As we may expect, the name of the variable is replaced by its value
	// in operation of joining strings.

	System.out.println("integerNumber1 == " + integerNumber1 + ".");

	 // In contrast to C and its various standards, in Java defining
	// variables in any place of the program is always fully acceptable.

	int integerNumber2 = 1;

	System.out.println("integerNumber2 == " + integerNumber2 + ".");

	// In Java we cannot USE a variable without giving it initial value,
	// which helps prevent many errors.
	// int integerNumber3;
	// System.out.println("integerNumber3 == " + integerNumber3 + ".");
	//
	// Defining uninitialize variable and never using it, is fine,
	// but should be avoided, as it is a bad practice that leads to
	// confusion. If you want to check such code, uncomment lines below.

	// int integerNumber4;
	// System.out.println("We do nothing with integerNumber4.");
    }
}
