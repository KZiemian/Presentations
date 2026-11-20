class Main {
    public static void main(String[] args) {
	int integerNumber1 = 0;
	int integerNumber2 = 1;

	System.out.println("integerNumber1 == " + integerNumber1 + ".");
	System.out.print("integerNumber2 == " + integerNumber2 + ".\n\n");

	System.out.print("In Java we can use well know syntax\n" +
			 "integerNumber1 += 3;\n" +
			 "which is equivalent to\n" +
			 "integerNumber1 = integerNumber1 + 3;\n\n");

	System.out.println("Instruction: integerNumber1 += 3;");
	integerNumber1 += 3;

	System.out.print("integerNumber1 == " + integerNumber1 + ".\n\n");


	System.out.print("Line\n" +
			 "integerNumber1 += integerNumber2;\n" +
			 "as one may expected has a meaning\n" +
			 "integerNumber1 = integerNumber1 + " +
			 "integerNumber2;\n\n");

	System.out.println("Instruction: " +
			   "integerNumber1 += integerNumber2;");
	integerNumber1 += integerNumber2;

	System.out.print("integerNumber1 == " + integerNumber1 + ".\n\n\n\n");



	System.out.print("We will now demonstrate more operations " +
			   "of this type.\n\n");

	System.out.println("Instruction: integerNumber1 -= 7;");
	integerNumber1 -= 7;

	System.out.print("integerNumber1 == " + integerNumber1 + ".\n\n");

	System.out.println("Instruction: integerNumber1 *= -2;");
	integerNumber1 *= -2;

	System.out.print("integerNumber1 == " + integerNumber1 + ".\n\n");


	System.out.println("Instruction: integerNumber1 /= 4;");
	integerNumber1 /= 4;

	System.out.print("integerNumber1 == " + integerNumber1 + ".\n\n");

	System.out.println("To make following operations easier to " +
			   "understand, we will set the value of " +
			   "integerNumber1 to 10.");
	System.out.println("Instruction: integerNumber1 = 10;");
	integerNumber1 = 10;

	System.out.print("integerNumber1 == " + integerNumber1 + ".\n\n");

	System.out.println("Instruction: integerNumber1 %= 4;");
	integerNumber1 %= 4;

	System.out.println("integerNumber1 == " + integerNumber1 + ".");
    }
}
