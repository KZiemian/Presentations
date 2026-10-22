// MAKE BETTER COMMENTS
// In object-oriented programming there is important concept called
// "hidding implementation" or "encapsulation". The basic idea is this.
// When you write your source code and created executable files based on it,
// you should hide all things that user don't need to know.
//
// Consider such example. You wrote program for handling contacts on
// smartphones. In your program there is a method, let say
// int makeNewConntact(String name, String surname, int number)
// If you call this method like this
// makeNewConntact("Joseph", "Smith Jr.", 012345)
// it will create new contact on your smartphone. Methods like this one
// is all that user needs to use his phone, but to make it work you need a lot
// more code.
//
// For example, you need to write method like findPhoneSignal() that search
// for net signal to connect you with other phones. Or method
// checkSignalStrength() to find how strong is signal in current location.
// And many more methods that are needed to allow you to speak from your
// phone, like handling battery levels and so on.
//
// But, they are dealing with many technicalities that normal user
// don't want to do by himself, we should do it for him. Also, since normal
// user don't know how to deal directly with phone signals, if we allow him
// to use such methods, he can set things ups in such way, that his phone
// will stop working. This is one reason, why we should hide some things from
// the users.
//
// Other reasons for hidding information is two fold. We spend time writting
// our code and we want to be paid for that. As such, we don't want to
// other people just read our code and copied it for free. Also, there
// people out there, that want to break into other peoples phones and use it
// to steal their money and other evil things. Of course hackers would try to
// find our hidden informations and this is another story.
//
// In other words, hidding some things from others is a good idea.

// We explain some basic concepts by using example. Consider that we have
// secret number and we want to check if user know it. We start from
// writing very bad class implementing such secret number. Before that
// we will import some important functionalities.

import java.util.Scanner;

class BadSecretNumber {
    int m_BadSecretNumber;

    // Constructor will set up value of our bad secret number.
    BadSecretNumber(int valueOfSecretNumber) {
	m_BadSecretNumber = valueOfSecretNumber;
    }

    // Method compare bad secret number with what user gave us.
    boolean checkSecretNumber(int numberGivenByUser) {
	if (m_BadSecretNumber == numberGivenByUser) {
	    return true;
	} else {
	    return false;
	}
    }
}

class Main {
    public static void main(String[] args) {
	// Calling constructor show us what secret number is, but pretend
	// for the sake of argument, that we didn't see it. In fact, we
	// can hide such things from users.
	BadSecretNumber badSecretNumberVar1 = new BadSecretNumber(10);

	Scanner scannerObject = new Scanner(System.in);



	System.out.print("Write down a secret number: ");
	String userInput = scannerObject.nextLine();
	// If this line below is misterious, just ignore it for a while.
	int numberGivenByUser = Integer.parseInt(userInput);


	boolean userKnowSecretNumber =
	    badSecretNumberVar1.checkSecretNumber(numberGivenByUser);

	if (userKnowSecretNumber == true) {
	    System.out.println("You know the secret number.");
	} else {
	    System.out.println("You don't know the secret number.");
	}

	System.out.println("\n\nProblem with this code is that we can " +
			   "always ask Java to show us what the value of " +
			   "the secret number is.");
	System.out.println("The secret number is: " +
			   badSecretNumberVar1.m_BadSecretNumber + ".");
    }
}
