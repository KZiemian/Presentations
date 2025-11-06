class TwoNumbers {
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
    short m_shortIntField;
    long m_longIntField;
    float m_floatField;
}

class Main {
    public static void main(String[] args) {
	// In Java using an uninitialized variable will bring an error,
	// but fields of the class instance are treated in a special way.
	TwoNumbers twoNumbersVar1 = new TwoNumbers();

	System.out.print("twoNumbersVar1.m_intVar1 == " +
			   twoNumbersVar1.m_intVar1 + ".");
	System.out.print("twoNumbersVar1.m_intVar2 == " +
			   twoNumbersVar1.m_intVar2 + ".\n\n");

	// When an instance of the class is created and we didn't set
	// the values of the fields, all fields having one of the basic
	// types are "zeroed". More precisely default values of their types
	// are assigned for them, for numbers such value is 0.

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
