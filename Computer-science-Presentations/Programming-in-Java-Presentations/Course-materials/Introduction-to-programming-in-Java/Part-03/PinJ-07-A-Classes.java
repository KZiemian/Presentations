// Object-oriented programming is so central to Java that we will start
// discussing it now, even when we still didn't talk about many Java's
// features.
//
// We will start from a quite silly, but simple example of class, that just
// stores two numbers.

class TwoIntNumbers {
    int m_integerNumber1;
    int m_integerNumber2;
}

// Code above defines class. It tell use that every object build according
// to the rules defined by class TwoIntNumbers contains inside two integer
// numbers.
//
// Technical term for such internal variables is "field". So class TwoNumbers
// have two fields with the names m_firstNumber and m_secondNumber.

// We have seen "class Main" many times already. We explain what it means,
// when we learn a few more things about the classes.



class Main {
    public static void main(String[] args) {
	TwoIntNumbers twoIntNumbersVar1 = new TwoIntNumbers();

	System.out.print("Instructions:\n" +
			 "twoIntNumbersVar1.m_integerNumber1 = 1;\n" +
			 "twoIntNumbersVar2.m_integerNumber2 = 2;\n\n");
	twoIntNumbersVar1.m_integerNumber1 = 1;
	twoIntNumbersVar1.m_integerNumber2 = 2;

	System.out.println("twoIntNumbersVar1.m_integerNumber1 == " +
			   twoIntNumbersVar1.m_integerNumber1 + ".");
	System.out.println("twoIntNumbersVar1.m_integerNumber2 == " +
			   twoIntNumbersVar1.m_integerNumber2 + ".");
    }
}
