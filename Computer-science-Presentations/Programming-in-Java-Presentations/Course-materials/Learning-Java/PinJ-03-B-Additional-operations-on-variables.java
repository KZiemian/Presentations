class Main {
    public static void main(String[] args) {
	// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	// These operators work in the same way on the floating-point
	// numbers.
	double float64Var1 = 0.0;
	double float64Var2 = 0.83;

	System.out.println("float64Var1 += 0.25;");

	float64Var1 += 0.25;

	System.out.println("float64Var1 == " + float64Var1 + ".");

	System.out.println("\nfloat64Var1 += float64Var2;");

	float64Var1 += float64Var2;

	System.out.println("float64Var1 == " + float64Var1 + ".");

	System.out.println("\nfloat64Var1 -= 0.75;");

	float64Var1 -= 0.75;

	System.out.println("float64Var1 == " + float64Var1 + ".");

	System.out.println("\nfloat64Var1 *= 10.0;");

	float64Var1 *= 10.0;

	System.out.println("float64Var1 == " + float64Var1 + ".");

	System.out.println("\nfloat64Var1 /= 2.0;");

	float64Var1 /= 2.0;

	System.out.println("float64Var1 == " + float64Var1 + ".");
    }
}
