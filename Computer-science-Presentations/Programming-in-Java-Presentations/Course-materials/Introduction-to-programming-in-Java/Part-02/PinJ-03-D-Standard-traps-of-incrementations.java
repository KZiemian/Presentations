class Main {
    public static void main(String[] args) {
	int integerNumber1 = 0;
	int integerNumber2 = 5;

	System.out.println("integerNumber1 == " + integerNumber1 + ".");
	System.out.print("integerNumber2 == " + integerNumber2 + ".\n\n");

	System.out.print("As in C and C++, incrementation operators " +
			 "can be a bit confusing.\n\n");


	System.out.println("Instruction: " +
			   "integerNumber1 = integerNumber2++;");
	integerNumber1 = integerNumber2++;

	System.out.println("integerNumber1 == " + integerNumber1 + ".");
	System.out.print("integerNubmer2 == " + integerNumber2 + ".\n\n");


	System.out.print("As we can see, the operator of " +
			 "postincrementation in the line\n" +
			 "integerNumber1 = integerNumber2++;\n" +
			 "in the first step returns the value of " +
			 "integerNumber2, in our case 5, which is assigned " +
			 "to integerNumber1. Only in the second step " +
			 "the value of integerNumber2 is incremented " +
			 "from 5 to 6.\n\n" +
			 "The same is true in the case of " +
			 "postdecrementation.\n\n");


	System.out.println("Instruction: " +
			   "integerNumber1 = integerNumber2--;");
	integerNumber1 = integerNumber2--;

	System.out.println("integerNumber1 == " + integerNumber1 + ".");
	System.out.print("integerNumber2 == " + integerNumber2 + ".\n\n");


	System.out.print("In contrast to the \"post\" operators, " +
			 "\"pre\" operators first change the value of " +
			 "the variable and after that returns the current " +
			 "value of the variable.\n\n");


	System.out.println("Instruction: integerNumber1 = ++integerNumber2;");
	integerNumber1 = ++integerNumber2;

	System.out.println("integerNumber1 == " + integerNumber1 + ".");
	System.out.print("integerNumber2 == " + integerNumber2 + ".\n\n");

	System.out.println("Instruction: " +
			   "integerNumber1 = --integerNumber2;");
	integerNumber1 = --integerNumber2;

	System.out.println("integerNumber1 == " + integerNumber1 + ".");
	System.out.println("integerNumber2 == " + integerNumber2 + ".");
    }
}
