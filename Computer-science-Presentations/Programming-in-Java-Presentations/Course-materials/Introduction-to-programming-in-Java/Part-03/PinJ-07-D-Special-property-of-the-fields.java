class TwoIntNumbers {
    int m_intVar1;
    int m_intVar2;
}

class BasicTypesClass {
    boolean m_booleanField;
    byte m_byteField;
    char m_charField;
    double m_doubleField;
    int m_intField;

    // Below are other basic types, about whom we spoke very little.
    // It is still worth our attention to check their default values
    // in the class.
    // SHOULD it be "short" or "short int"? The same question applies to
    // "long".

    short m_shortIntField;
    long m_longIntField;
    float m_floatField;
}

class Main {
    public static void main(String[] args) {
	TwoIntNumbers twoIntNumbersVar1 = new TwoIntNumbers();

	System.out.print("In Java using an uninitialized variable " +
			 "will bring an error.\n" +
			 "But fields of the class instance are treated " +
			 "in a special way.\n\n");

	System.out.println("twoIntNumbersVar1.m_intVar1 == " +
			   twoIntNumbersVar1.m_intVar1 + ".");
	System.out.print("twoIntNumbersVar1.m_intVar2 == " +
			   twoIntNumbersVar1.m_intVar2 + ".\n\n");

	System.out.print("When an instance of the class is created " +
			 "and we didn't give Java any information about " +
			 "initial values of the fields, all fields " +
			 "belonging to one of the basic types are " +
			 "\"zeroed\". More precisely default values of " +
			 "their types are assigned for them, for numbers " +
			 "this value is 0, hence the name \"zeroed\".\n\n");



	BasicTypesClass basicTypesClassVar = new BasicTypesClass();

	System.out.println("Default values of basic types.");
	System.out.println("basicTypesClassVar.m_booleanField == " +
			   basicTypesClassVar.m_booleanField + ".");
	System.out.println("basicTypesClassVar.m_byteField == " +
			   basicTypesClassVar.m_byteField + ".");
	System.out.println("basicTypesClassVar.m_charField == " +
			   basicTypesClassVar.m_charField +
			   "(empty space).");
	System.out.println("basicTypesClassVar.m_doubleField == " +
			   basicTypesClassVar.m_doubleField + ".");
	System.out.println("basicTypesClassVar.m_intField == " +
			   basicTypesClassVar.m_intField + ".");
	System.out.println("basicTypesClassVar.m_shortIntField == " +
			   basicTypesClassVar.m_shortIntField + ".");
	System.out.println("basicTypesClassVar.m_longIntField == " +
			   basicTypesClassVar.m_longIntField + ".");
	System.out.println("basicTypesClassVar.m_floatField == " +
			   basicTypesClassVar.m_floatField + ".");
    }
}
