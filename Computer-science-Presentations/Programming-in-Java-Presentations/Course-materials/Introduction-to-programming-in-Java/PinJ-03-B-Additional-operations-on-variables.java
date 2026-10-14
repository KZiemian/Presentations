class Main {
    public static void main(String[] args) {
	double float64Var1 = 0.0;
	double float64Var2 = 0.85;

	System.out.println("float64Var1 == " + float64Var1 + ".");
	System.out.print("float64Var2 == " + float64Var2 + ".\n\n");

	System.out.print("Operators presented below, work in " +
			   "the same way on the floating-point numbers, " +
			   "as they work on integer numbers.\n\n");

	System.out.println("Instruction: float64Var1 += 0.25;");
	float64Var1 += 0.25;

	System.out.print("float64Var1 == " + float64Var1 + ".\n\n");


	System.out.println("Instruction: float64Var1 += float64Var2;");
	float64Var1 += float64Var2;

	System.out.print("float64Var1 == " + float64Var1 + ".\n\n");


	System.out.println("Instruction: float64Var1 -= 0.75;");
	float64Var1 -= 0.75;

	System.out.print("float64Var1 == " + float64Var1 + ".\n\n");


	System.out.println("Instruction: float64Var1 *= 10.0;");
	float64Var1 *= 10.0;

	System.out.print("float64Var1 == " + float64Var1 + ".\n\n");


	System.out.println("Instruction: float64Var1 /= 2.0;");
	float64Var1 /= 2.0;

	System.out.println("float64Var1 == " + float64Var1 + ".");
    }
}
