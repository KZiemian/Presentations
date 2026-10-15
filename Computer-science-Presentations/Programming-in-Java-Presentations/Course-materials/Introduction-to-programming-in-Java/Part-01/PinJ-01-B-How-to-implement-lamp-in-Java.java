// This code is very unprofessional, but it works. Not the worst thing in
// the world, but don't write such code for real life programs. Write
// better one.

class Lamp {
    boolean m_stateOfLightBubble;
    String m_powerOfLightBubble;

    Lamp() {
	m_stateOfLightBubble = false;
	m_powerOfLightBubble = "60 W";
    }

    // It is not the best constructor, but it can be tolerated for a while.
    Lamp(boolean stateOfLightBubble, String powerOfLightBubble) {
	m_powerOfLightBubble = powerOfLightBubble;
	m_stateOfLightBubble = stateOfLightBubble;
    }

    void showLightBubblePower() {
	System.out.print("Light bubble has " + m_powerOfLightBubble +
			   " of power.");
    }

    void showLampState() {
	if (m_stateOfLightBubble == true) {
	    System.out.print("The lamp is turned on.");
	} else {
	    System.out.print("The lamp is turned off.");
	}
    }

    void switchLampOn() {
	m_stateOfLightBubble = true;
    }

    void switchLampOff() {
	m_stateOfLightBubble = false;
    }
}

class Main {
    public static void main(String[] args) {
	Lamp myLampVar1 = new Lamp();
	Lamp myLampVar2 = new Lamp(true, "20 W");

	System.out.println("This code is very unprofessional, but " +
			   "it works, which at this moment is enough.\n");

	System.out.println("Description of myLampVar1.");
	System.out.println("Instruction: myLampVar1.showLampState();");
	myLampVar1.showLampState();
	System.out.println("\nInstruction: " +
			   "myLampVar1.showLightBubblePower();");
	myLampVar1.showLightBubblePower();

	System.out.println("\n\nDescription of myLampVar2.");
	System.out.println("Instruction: myLampVar2.showLampState();");
	myLampVar2.showLampState();
	System.out.println("\nInstruction: " +
			   "myLampVar2.showLightBubblePower();");
	myLampVar2.showLightBubblePower();

	System.out.println("\n\n\nSwitching lamp represented by " +
			   "myLampVar1 on and off.");
	System.out.println("Instruction: myLampVar1.showLampState();");
	myLampVar1.showLampState();

	System.out.println("\n\nInstruction: myLampVar1.switchLampOn();");
	myLampVar1.switchLampOn();

	System.out.println("Instruction: myLampVar1.showLampState();");
	myLampVar1.showLampState();

	System.out.println("\n\nInstruction: myLampVar1.switchLampOff();");
	myLampVar1.switchLampOff();

	System.out.println("Instruction: myLampVar1.showLampState();");
	myLampVar1.showLampState();

	System.out.println("\n\nEnd of the program.");

	// This code is very unprofessional, but it works. It can be
	// tolerated for a while, because we are still just learning Java.
    }
}
