class Main {
    public static void main(String[] args) {
	int intVar1 = 0;
	int intVar2 = 5;

	System.out.println("intVar1 == " + intVar1 + ".");
	System.out.print("intVar2 == " + intVar2 + ".\n\n");

	System.out.print("As in C and C++, incrementation operators " +
			 "can be a bit confusing.\n\n");


	System.out.println("Instruction: intVar1 = intVar2++;");
	intVar1 = intVar2++;

	System.out.println("intVar1 == " + intVar1 + ".");
	System.out.print("intVar2 == " + intVar2 + ".\n\n");


	System.out.print("As we can see, the operator of " +
			 "postincrementation in the line\n" +
			 "intVar1 = intVar2++;\n" +
			 "in the first step returns the value of intVar2, " +
			 "in our case 5, which is assigned to intVar1. " +
			 "Only in the second step the value of " +
			 "intVar2 is incremented from 5 to 6.\n\n" +
			 "The same is true in the case of " +
			 "postdecrementation.\n\n");


	System.out.println("Instruction: intVar1 = intVar2--;");
	intVar1 = intVar2--;

	System.out.println("intVar1 == " + intVar1 + ".");
	System.out.print("intVar2 == " + intVar2 + ".\n\n");


	System.out.print("In contrast to the \"post\" operators, " +
			 "\"pre\" operators first change the value of " +
			 "the variable and after that returns the current " +
			 "value of the variable.\n\n");


	System.out.println("Instruction: intVar1 = ++intVar2;");
	intVar1 = ++intVar2;

	System.out.println("intVar1 == " + intVar1 + ".");
	System.out.print("intVar2 == " + intVar2 + ".\n\n");

	System.out.println("Instruction: intVar1 = --intVar2;");
	intVar1 = --intVar2;

	System.out.println("intVar1 == " + intVar1 + ".");
	System.out.println("intVar2 == " + intVar2 + ".");
    }
}
