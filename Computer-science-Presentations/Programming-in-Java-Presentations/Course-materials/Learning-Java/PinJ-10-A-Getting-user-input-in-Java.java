// MAKE BETTER COMMENTS
// Before we go further it is useful, to learn how to read user input
// from keybord in Java.

// We will need Scanner class, so we need to import it using line below.
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
	// We create string variable in which we will store user input.
	String userInput = "";

	// We create new scanner object. We call constructor of Scanner
	// with argument System.in, which means "System input". It tell
	// Java that this scanner object need to scan "System input" for
	// incoming data. By deafult "System input" is set to read from
	// a keyboard.
	Scanner scannerObject = new Scanner(System.in);

	System.out.println("Enter short information:");
	userInput = scannerObject.nextLine();
	// Line above tell scanner object to read line from the keybord.
	// By line we understood sequence of characters ended by symbol of
	// new line (by pushing "Enter"). After reading this line, program
	// will store it into variable userInput. Why life must be so hard?

	System.out.println("Your information: " + userInput);
    }
}

// This code is writen in step-by-step manner, which is hopeful easier to
// read for the beginners, but not very profesionnal. In our next file, we
// present the same program, but writen a bit better.
