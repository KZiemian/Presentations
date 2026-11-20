// While loop in Java is quite straightforward.

class Main {
    public static void main(String[] args) {
	int i = 0;

	System.out.print("While loop in Java is quite straightforward.\n" +
			 "Like in C and C++, while loops execute " +
			 "its body when the loop condition is true.\n\n");

	System.out.print("To keep with tradition, we name variable for " +
			 "a loop as i, from the word \"iteration\".\n\n");

	System.out.print("Like always, remember to check that your " +
			 "loop will stop at the right moment.\n\n");


	while (i < 5) {
	    System.out.println("Loop iterations: " + i + ".");

	    i++;
	}
    }
}
