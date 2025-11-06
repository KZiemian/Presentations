// This code is very unprofessional, but it works. Not the worst thing in
// the world, but don't write such code for real life programs.

class Lamp {
    boolean m_stateOfLightBubble;
    String m_powerOfLightBubble;

    Lamp() {
	m_stateOfLightBubble = false;
	m_powerOfLightBubble = "60 W";
    }

    // Is not the best constructor, but it can be tolerated for a while.
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

	System.out.println("Description of myLampVar1.");
	System.out.println("myLampVar1.showLampState();");
	myLampVar1.showLampState();
	System.out.println("\nmyLampVar1.showLightBubblePower();");
	myLampVar1.showLightBubblePower();

	System.out.println("\n\nDescription of myLampVar2.");
	System.out.println("myLampVar2.showLampState();");
	myLampVar2.showLampState();
	System.out.println("\nmyLampVar2.showLightBubblePower();");
	myLampVar2.showLightBubblePower();

	System.out.println("\n\n\n\nSwitching myLampVar1 on and off.");
	System.out.println("myLampVar1.showLampState();");
	myLampVar1.showLampState();

	System.out.println("\n\nmyLampVar1.switchLampOn();");
	myLampVar1.switchLampOn();

	System.out.println("myLampVar1.showLampState();");
	myLampVar1.showLampState();

	System.out.println("\n\nmyLampVar1.switchLampOff();");
	myLampVar1.switchLampOff();

	System.out.println("myLampVar1.showLampState();");
	myLampVar1.showLampState();

	System.out.println("\n\nEnd of the program.");

	// This code is very unprofessional, but it works. It can be
	// tolerated, because we are still just learning Java.
    }
}
