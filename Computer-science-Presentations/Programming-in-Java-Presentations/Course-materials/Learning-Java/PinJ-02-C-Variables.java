class Main {
    public static void main(String[] args) {
	// Creating variables in Java is based on this in C++ (which is based
	// on C). First we write type of the variable, then its name and then
	// we assign the value to it.
	int intVar1 = 0;

	// As we may expected, name of the variable is replaced by it value
	// in operation of joining strings.
	System.out.println("intVar1 == " + intVar1 + ".");
	// Since "=" is assigment operator in Java, no surprise here, we will
	// use comperecent operator "==" to symbolize that two things are
	// equal.

	// In contrast to C, in Java defining variables in any place of
	// the program is fully acceptable.
	int intVar2 = 1;

	System.out.println("intVar2 == " + intVar2 + ".");

	// In Java we cannot define variable without initial value, which
	// help prevents many errors.
	// int intVar3;
	// System.out.println("intVar3 == " + intVar3 + ".");
    }
}
