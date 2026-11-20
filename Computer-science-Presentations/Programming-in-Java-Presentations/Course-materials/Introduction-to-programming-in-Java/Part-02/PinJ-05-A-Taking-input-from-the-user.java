// Taking input from the user in Java is not a very straightforward operation.
// Honestly, what in Java is a straightforward operation? At the same time,
// it would be useful for us, to learn how to read things like numbers from
// the user, even when code doing it, will be for some time mysterious to us.
//
// As such this file presents to you code that reads an integer number from
// the keyboard and prints it on the screen. If you don't understand it now,
// just accept it as it is. We will explain it in more detail, when
// we will be ready for Java.

// For serious Java programmers this code may look bad, but our course is
// dedicated mostly for the people that just start to learn Java

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
	int numberFromTheUser = 0;
	Scanner scanFromTheKeyboard = new Scanner(System.in);

	System.out.print("Give us an integer number: ");
	String userInput = scanFromTheKeyboard.nextLine();

	numberFromTheUser = Integer.parseInt(userInput);

	System.out.println("You give us the number: " + numberFromTheUser +
			   ".");
    }
}
