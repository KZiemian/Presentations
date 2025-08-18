// Programs in Java are verbose, they also quite hard for the beginners to
// read, so we will try to tackle them one line at the time.

class Main {
    public static void main(String[] args) {
	System.out.println("Hello, World!");
	// This line is already quite complicated. It is saying that Java
	// need to find class that is called "System" and this class
	// has a field called "out" and this field has a method "println",
	// which mean "print line" (print line on the screen adding new line
	// at its end).

	// In other words System.out.println("Hello, World!") tells Java
	// that it should
	// 1) Find System.
	// 2) Inside System find out.
	// 3) Inside out find println.
	// 4) Call println with argument "Hello, World!", which result in
	// printing "Hello, World!" on the screen of the computer.

	// Why life must by so complicated?
    }
}
