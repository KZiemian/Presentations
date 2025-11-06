// MAKE BETTER COMMENTS
// If you know how if-else work in other languages, there is basically
// nothing new to learn in Java.
//
// We want to ask user for the input, so we need this code.

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
	int numberFromTheUser = 0;

	Scanner scannerObject = new Scanner(System.in);

	System.out.print("Give us an integer number: ");

	String userInput = scannerObject.nextLine();

	numberFromTheUser = Integer.parseInt(userInput);


	if (numberFromTheUser > 10) {
	    System.out.print("Number you gave is equal to " +
			       numberFromTheUser +
			       ", which is bigger than 10.\n\n");
	} else {
	    System.out.print("Number you gave is equal to " +
			       numberFromTheUser +
			       ", which is lesser or equal to 10.\n\n");
	}



	System.out.print("Give us another integer number: ");

	userInput = scannerObject.nextLine();

	numberFromTheUser = Integer.parseInt(userInput);

	if (numberFromTheUser > 5) {
	    System.out.println("Number you gave is equal to " +
			       numberFromTheUser +
			       ", which is bigger than 5.");
	} else if (numberFromTheUser >= 0) {
	    System.out.println("Number you gave is equal to " +
			       numberFromTheUser +
			       ", hence it is non-negative.");
	} else {
	    System.out.println("Number you gave is equal to " +
			       numberFromTheUser + " and is negative.");
	}
    }
}
