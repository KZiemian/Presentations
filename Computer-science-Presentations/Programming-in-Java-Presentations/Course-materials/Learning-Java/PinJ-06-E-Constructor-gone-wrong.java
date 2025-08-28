// To make things simpler, we will creat three versions of our stupid,
// but simple, class. Two numbers version 1, two numbers version 2
// and two numbers version 3.
class TwoNumbersVerTwo {
    int m_intVar1;
    int m_intVar2;

    // You can created construtor that takes no arguments and do nothing
    // useful, but this is very bad idea. We mention it, because you can
    // see such examples in various learning materials for Java.
    TwoNumbersVerTwo() {
	System.out.println("We are now running totally useless constructor " +
			   "TwoNumbersVerTwo().");
    }
}

class Main {
    public static void main(String[] args) {
	System.out.println("Program before definig variables.\n");

	// This code is very stupid, but it works and this is all the deal.
	// You shouldn't never ever write such code.
	TwoNumbersVerTwo twoNumbersVerTwoVar1 = new TwoNumbersVerTwo();
	TwoNumbersVerTwo twoNumbersVerTwoVar2 = new TwoNumbersVerTwo();

	System.out.println("\nCode after defining variables.\n");

	System.out.println("The moral is: you can write very, very " +
			   "stupid code if you want.\n" +
			   "But please, don't do it.");
    }
}
