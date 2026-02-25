class Main {
    public static void main(String[] args) {
	System.out.print("You can put a lot of code inside for control " +
			 "statement opening parenteses. But, you " +
			 "code should be readable to others, so keep " +
			 "this in mind.\n\n");

	System.out.print("This loop will run until i >= 1000 " +
			 "or j == 4.\n\n");

	for (int i = 0, j = 0; i < 1000 && j != 4; i++, j++) {
	    System.out.println("i == " + i + ", j == " + j + ".");
	}

	System.out.print("\nYou now see that for control statement " +
			 "in Java can be quite complicated and, for " +
			 "precisely this reason, may be hard to read. " +
			 "As such, we should avoid writing such complex " +
			 "for loops as much as possible, especially " +
			 "if we are still learning Java.\n\n");

	System.out.print("Just to demonstrate the power of for loop " +
			 "in Java, we will show one more example.\n\n");

	System.out.print("Even more advanced for loop.\n\n");

	for (int i = 0, j = i + 10; i < 5; i++, j = i * 2) {
	    System.out.println("i == " + i + ", j == " + j + ".");
	}

	System.out.print("\nWe should note the important difference " +
			 "between C, C++ and Java. In the case of first " +
			 "two languages you can use \",\" as operator " +
			 "in instructions like this:\n" +
			 "intVar1 = 1, intVar2 = 2;\n" +
			 "Comma just separates these two instructions, " +
			 "allowing them to be parts of one expression. " +
			 "But, in Java this is forbidden. You can ONLY " +
			 "use the comma inside control statement of " +
			 "the for loop, like we see it above. \n");
    }
}
