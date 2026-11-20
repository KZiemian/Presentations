class Main {
    public static void main(String[] args) {
	double floatNumber64Var1 = 0.0;
	double floatNumber64Var2 = 0.85;

	System.out.println("floatNumber64Var1 == " + floatNumber64Var1 +
			   ".");
	System.out.print("floatNumber64Var2 == " + floatNumber64Var2 +
			 ".\n\n");

	System.out.print("Operators presented below, work in " +
			 "the same way on the floating-point numbers, " +
			 "as they work on integer numbers.\n\n");

	System.out.println("Instruction: floatNumber64Var1 += 0.25;");
	floatNumber64Var1 += 0.25;

	System.out.print("floatNumber64Var1 == " + floatNumber64Var1 +
			 ".\n\n");


	System.out.println("Instruction: " +
			   "floatNumber64Var1 += floatNumber64Var2;");
	floatNumber64Var1 += floatNumber64Var2;

	System.out.print("floatNumber64Var1 == " + floatNumber64Var1 +
			 ".\n\n");


	System.out.println("Instruction: floatNumber64Var1 -= 0.75;");
	floatNumber64Var1 -= 0.75;

	System.out.print("floatNumber64Var1 == " + floatNumber64Var1 +
			 ".\n\n");


	System.out.println("Instruction: floatNumber64Var1 *= 10.0;");
	floatNumber64Var1 *= 10.0;

	System.out.print("floatNubmer64Var1 == " + floatNumber64Var1 +
			 ".\n\n");


	System.out.println("Instruction: floatNumber64Var1 /= 2.0;");
	floatNumber64Var1 /= 2.0;

	System.out.println("floatNumber64Var1 == " + floatNumber64Var1 + ".");
    }
}
