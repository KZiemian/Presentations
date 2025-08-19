// Natural enviroment of Java is an internet. So it shouldn't come as
// a surprise, that people behind it created method to extract special
// type of comments from Java source code and turn them into a webpage.
// Tool for it is called javadoc.

// The main idea is that programmer write down documentation of the code
// in the special comments and then javadoc extract them and turn into
// webpage that is easy to read.

// We should mention that javadoc is more strict than javac. Good Java
// source file should contain ONE, PUBLIC class (we didn't talk about class
// yet, but I hope this is not a big problem) and all other code should be
// inside it. Also, name of the file should match the name of the class.

// For example this file contains at the top class javaDoc01, so its name
// is javaDoc01.java.

/** This is javaDoc01 class. It is used for ilustrating how javadoc works. */
public class JavaDoc01 {
    /** This is field of the class, but we didn't talk about it yet. */
    int m_intVar1;

    /** This is method of the class, the same problem as before. */
    public double linearFunction(double x) {
	return 2.0 * x + 1.0;
    }
}

// In our previous programs we named the top class "Main", because it is
// convinient, if the program is designed to be run directly. We will
// be still doing that, because it is convinient and we still have a lot to
// learn before we will be writing classes. But javadoc is quite strict,
// so we must name top class and file in the same way.

// To test javadoc, we should create directory JavaDocTest, put this file
// in it and then run
// $ javadoc javaDoc01.java
// By default javadoc produce a lot of files, HTML, CSS, JavaScript and more,
// to creat pages containing special type of comments, that was extrated from
// Java files. This is why we should run this command in separeted directory.

// Creators of Java and javadoc make a peculiar and hard to understand
// decision, that comments that conteins documentation of program should
// starts with / followed by ** and end with * followed by /. We see exemple
// of that in the code above. Such choice just looks weird.

// Program javadoc is quite sophisticated and we cannot spend time on
// learning all its features, we just want to inform you, that such tool
// exists. More information may be found on the page
// https://docs.oracle.com/javase/8/docs/technotes/tools/windows/javadoc.html
