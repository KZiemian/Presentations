class Main {
    public static void main(String[] args) {
	int intVar1 = 0;
	int intVar2 = 1;

	System.out.println("intVar1 == " + intVar1 + ".");
	System.out.println("intVar2 == " + intVar2 + ".");

	// In Java we can use well know syntax
	// intVar1 += 3;
	// which is equivalent to
	// intVar1 = intVar1 + 3;

	System.out.println("\nintVar1 += 3;");

	intVar1 += 3;

	System.out.println("intVar1 == " + intVar1 + ".");

	// Line
	// intVar1 += intVar2;
	// as one may expected have a meaning
	// intVar1 = intVar1 + intVar2;
	System.out.println("\nintVar1 += intVar2;");

	intVar1 += intVar2;

	System.out.println("intVar1 == " + intVar1 + ".");

	// Code belowe ilustrate more operations of this kind.
	System.out.println("\nintVar1 -= 7;");

	intVar1 -= 7;

	System.out.println("intVar1 == " + intVar1 + ".");

	System.out.println("\nintVar1 *= -2;");

	intVar1 *= -2;

	System.out.println("intVar1 == " + intVar1 + ".");

	System.out.println("\nintVar1 /= 4;");

	intVar1 /= 4;

	System.out.println("intVar1 == " + intVar1 + ".");

	System.out.println("\nintVar1 = 10;");

	intVar1 = 10;

	System.out.println("intVar1 == " + intVar1 + ".");

	System.out.println("\nintVar1 %= 4;");

	intVar1 %= 4;

	System.out.println("intVar1 == " + intVar1 + ".");
    }
}
