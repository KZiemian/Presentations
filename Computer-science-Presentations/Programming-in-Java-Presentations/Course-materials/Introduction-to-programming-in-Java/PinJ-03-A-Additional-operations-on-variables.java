class Main {
    public static void main(String[] args) {
	int intVar1 = 0;
	int intVar2 = 1;

	System.out.println("intVar1 == " + intVar1 + ".");
	System.out.print("intVar2 == " + intVar2 + ".\n\n");

	System.out.print("In Java we can use well know syntax\n" +
			 "intVar1 += 3;\n" +
			 "which is equivalent to\n" +
			 "intVar1 = intVar1 + 3;\n\n");

	System.out.println("Instruction: intVar1 += 3;");
	intVar1 += 3;

	System.out.print("intVar1 == " + intVar1 + ".\n\n");


	System.out.print("Line\n" +
			 "intVar1 += intVar2;\n" +
			 "as one may expected has a meaning\n" +
			 "intVar1 = intVar1 + intVar2;\n\n");

	System.out.println("Instruction: intVar1 += intVar2;");
	intVar1 += intVar2;

	System.out.print("intVar1 == " + intVar1 + ".\n\n\n\n");



	System.out.print("We will now demonstrate more operations " +
			   "of this type.\n\n");

	System.out.println("Instruction: intVar1 -= 7;");
	intVar1 -= 7;

	System.out.print("intVar1 == " + intVar1 + ".\n\n");

	System.out.println("Instruction: intVar1 *= -2;");
	intVar1 *= -2;

	System.out.print("intVar1 == " + intVar1 + ".\n\n");


	System.out.println("Instruction: intVar1 /= 4;");
	intVar1 /= 4;

	System.out.print("intVar1 == " + intVar1 + ".\n\n");

	System.out.println("To make following operations easier to " +
			   "understand, we will set the value of intVar1 " +
			   "to 10.");
	System.out.println("Instruction: intVar1 = 10;");
	intVar1 = 10;

	System.out.print("intVar1 == " + intVar1 + ".\n\n");

	System.out.println("Instruction: intVar1 %= 4;");
	intVar1 %= 4;

	System.out.println("intVar1 == " + intVar1 + ".");
    }
}
