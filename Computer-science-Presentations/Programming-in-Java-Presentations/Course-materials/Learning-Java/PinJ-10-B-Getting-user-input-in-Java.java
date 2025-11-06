// MAKE BETTER COMMENTS
// This is the same code as in "PinJ-08-A-Getting-user-input-in-Java.java"
// file, but writen a bit more profesional.

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
	Scanner scannerObject = new Scanner(System.in);

	System.out.println("Enter short information:");
	String userInput = scannerObject.nextLine();

	System.out.println("Your infromation: " + userInput);
    }
}

// Line
// String userInput = scannerObject.nextLine();
// at the same time create variable userInput and stores inside it a value
// returned by method scannerObject.nextLine(), which read one line from
// the keyboard (until first symbol of new line, created by pushing "Enter"
// key).
//
// It is very good practices in Java, to create variable only in the moment
// when you need it, but for the beginners it can be a bit harder to read.
// We encourage all reader to learn to use lines like
// String userInput = scannerObject.nextLine();
// After short practice, they are very natural things to write.
