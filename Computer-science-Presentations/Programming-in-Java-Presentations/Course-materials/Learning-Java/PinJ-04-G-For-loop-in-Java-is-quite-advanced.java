class Main {
    public static void main(String[] args) {
	// You can put a lot of code inside for control statement. But, you
	// code should be readable to others, so keep this in mind.

	// This loop will run untile i >= 1000 or j == 4.
	for (int i = 0, j = 0; i < 1000 && j != 4; i++, j++) {
	    System.out.println("i == " + i + ", j == " + j + ".");
	}

	// You now see that for control statement can be quite complicated
	// and, for precaisly this reason, may be hard to read. As such, we
	// should avoid writing such for loops, as much as it is possible,
	// especially if we still learning Java.

	// Just for demonstrating power of for loop in Java, we will show
	// one more example.

	System.out.println("\nEven more advanced for loop.");

	for (int i = 0, j = i + 10; i < 5; i++, j = i * 2) {
	    System.out.println("i == " + i + ", j == " + j + ".");
	}

	// We should note important difference between C, C++ and Java.
	// In the case of first two languages you can use "," as operator
	// in instructions like this:
	// intVar1 = 1, intVar2 = 2;
	// Comma just sperate this two instructions, allowing them to be
	// part of one expression. But, in Java this is forbidden.
	// You can ONLY use comma inside control statement of for loop,
	// like we see it above.
    }
}
