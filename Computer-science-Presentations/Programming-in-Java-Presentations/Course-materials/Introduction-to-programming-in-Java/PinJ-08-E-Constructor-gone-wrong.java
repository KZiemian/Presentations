// To make things simpler, we will create three versions of our silly,
// but simple, class. Two numbers version 1, two numbers version 2
// and two numbers version 3. This time we need TwoNumbersVerTwo.
class TwoNumbersVerTwo {
    int m_intVar1;
    int m_intVar2;

    // You can create a constructor that takes no arguments and does nothing
    // useful, but this is a very bad idea. We mention it, because you can
    // see such code in various learning materials for Java.
    TwoNumbersVerTwo() {
	System.out.println("We are now running a totally useless " +
			   "constructor TwoNumbersVerTwo().");
    }

    void showNumbers() {
	System.out.print(m_intVar1 + ", " + m_intVar2 + ".");
    }
}

class Main {
    public static void main(String[] args) {
	System.out.print("Program before defining variables.\n\n");

	// This code is very stupid, but it works and this is all the deal.
	// You shouldn't never, ever write such code.
	TwoNumbersVerTwo twoNumbersVerTwoVar1 = new TwoNumbersVerTwo();
	TwoNumbersVerTwo twoNumbersVerTwoVar2 = new TwoNumbersVerTwo();

	System.out.print("\nCode after defining variables.\n\n");

	System.out.println("The moral is: you can write very, very " +
			   "stupid code if you want.\n" +
			   "But please, don't do it.");
    }
}
