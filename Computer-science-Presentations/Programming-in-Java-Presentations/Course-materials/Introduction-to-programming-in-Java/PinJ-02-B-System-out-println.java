// Programs in Java are verbose, they are also quite hard for the beginners
// to read, so we will try to tackle them bit by bit.
//
// If you know object-oriented programming from C++ or Python, you will
// understand what the class and object of the class are immediately. If you
// don't know object-oriented programming just thinks that object is a box
// inside which we put different things. We will talk A LOT about classes in
// Java, after we cover basic material.
class Main {
    public static void main(String[] args) {
	// Part of the program inside curly braces is called a code block.

	System.out.println("Hello, World!");
	// This line is already quite complicated. It is saying that Java
	// need to find object that is called "System" and this object
	// has inside an object called "out" and this object has inside
	// object "println", which means "print line" (print line of
	// text on the screen and next go to the new line).
	//
	// In other words System.out.println("Hello, World!") tells Java
	// that it should:
	// 1) Find an object "System".
	// 2) Inside "System" look for the object "out".
	// 3) Inside object "out" look for object "println".
	// 4) Call "println" with the argument "Hello, World!", which
	// results in printing "Hello, World!" on the screen of the computer.
	//
	// Why must life be so complicated?
	//
	// We should notice that we used the word "object" in the loose sense,
	// to avoid more technical Java vocabulary. What is important now,
	// is that you get some basic idea what is going on, not being
	// very correct using technical terminology. We will learn some
	// technical words and how to use them in the future.
    }
}
