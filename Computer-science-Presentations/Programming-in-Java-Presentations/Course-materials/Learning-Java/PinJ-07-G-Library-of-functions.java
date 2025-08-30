// We can use static functions to build something ackin to the libraries of
// functions know from other languages.

class MathFunctions {
    static double linearFunction(double x) {
	return 2.0 * x + 1.0;
    }

    static double squareFunction(double x) {
	return x * x;
    }
}

class Main {
    public static void main(String[] args) {
	double x = 0.0;

	while (x <= 10.0) {
	    System.out.println("MathFunctions.linearFunction(" + x +
			       ") == " + MathFunctions.linearFunction(x) +
			       ".");

	    x += 1.0;
	}

	// Adding empty line.
	System.out.println("");

	x = 0.0;

	while (x <= 10.0) {
	    System.out.println("MathFunctions.squareFunction(" + x +
			       ") == " + MathFunctions.squareFunction(x) +
			       ".");

	    x += 1.0;
	}
    }
}
