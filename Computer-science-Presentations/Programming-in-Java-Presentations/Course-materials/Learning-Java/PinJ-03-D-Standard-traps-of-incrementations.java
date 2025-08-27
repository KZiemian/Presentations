class Main {
    public static void main(String[] args) {
	// As in C and C++, incrementations operators can be a bit confusing.
	int intVar1 = 0;
	int intVar2 = 5;

	System.out.println("intVar1 == " + intVar1 + ".");
	System.out.println("intVar2 == " + intVar2 + ".");

	System.out.println("\nintVar1 = intVar2++;");

	intVar1 = intVar2++;

	System.out.println("intVar1 == " + intVar1 + ".");
	System.out.println("intVar2 == " + intVar2 + ".");
	// As we can see operator of postincrementation in the line
	// intVar1 = intVar2++;
	// in the first step return value of intVar2, in our case 5,
	// which is assigned to intVar1. Only in the second step value of
	// intVar2 is incremented from 5 to 6.

	// The same is true in the case of postdecrementation.
	System.out.println("\nintVar1 = intVar2--;");

	intVar1 = intVar2--;

	System.out.println("intVar1 == " + intVar1 + ".");
	System.out.println("intVar2 == " + intVar2 + ".");

	// In contrast to the "post" operators, "pre" operators first
	// change the value of variable and after that return value of
	// variable.

	System.out.println("\nintVar1 = ++intVar2;");

	intVar1 = ++intVar2;

	System.out.println("intVar1 == " + intVar1 + ".");
	System.out.println("intVar2 == " + intVar2 + ".");

	System.out.println("\nintVar1 = --intVar2;");

	intVar1 = --intVar2;

	System.out.println("intVar1 == " + intVar1 + ".");
	System.out.println("intVar2 == " + intVar2 + ".");
    }
}
