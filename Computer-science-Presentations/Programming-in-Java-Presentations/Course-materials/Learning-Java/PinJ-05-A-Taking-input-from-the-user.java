// MAKE BETTER COMMENTS
// Taking input from the user is Java is not very straightforward operation.
// Honestly, what in Java is straightforward operation? At the same time,
// it would be useful for us, to learn how to read numbers from the user,
// even when code doing so, will be mysterious to us.
//
// As such this file present to you code that read integer number from
// the keyboard and print it on the screen. If you don't understand it now,
// just accept it as it is. We will explain it better, when we learn more
// about Java.

// For serious Java programmer this code may look bad, but our course is
// dedicated mostly for the people that just start to learn Java.

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
	int numberFromTheUser = 0;
	Scanner scannerObject = new Scanner(System.in);

	System.out.println("Give us a number:");
	String userInput = scannerObject.nextLine();

	numberFromTheUser = Integer.parseInt(userInput);

	System.out.println("\nYou give us number: " + numberFromTheUser +
			   ".");
    }
}
