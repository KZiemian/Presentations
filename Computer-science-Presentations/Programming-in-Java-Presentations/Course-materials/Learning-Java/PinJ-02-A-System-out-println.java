// Programs in Java are verbose, they are also quite hard for the beginners
// to read, so we will try to tackle them one line at a time.

// If you know object-oriented programming from C++ or Python, you will
// understand what the class is immediately. If you don't know object-oriented
// programming just thinks that class is a box inside which we put different
// things. We will talk A LOT about classes in Java, after we cover basic
// material.
class Main {
    public static void main(String[] args) {
	// Part of the program inside curly braces is called a code block.

	System.out.println("Hello, World!");
	// This line is already quite complicated. It is saying that Java
	// need to find class that is called "System" and this class
	// has a field called "out" and this field has a method "println",
	// which means "print line" (print line on the screen adding new line
	// at its end).

	// In other words System.out.println("Hello, World!") tells Java
	// that it should
	// 1) Find an object System.
	// 2) Inside System find the object out.
	// 3) Inside object out find object println.
	// 4) Call println with the argument "Hello, World!", which results in
	// printing "Hello, World!" on the screen of the computer.

	// Why must life be so complicated?
    }
}
