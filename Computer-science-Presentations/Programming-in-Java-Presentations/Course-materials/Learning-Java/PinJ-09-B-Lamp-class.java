// We can now write the implementation of the lamp, about which we were
// talking very long ago.

// This code is very unprofessional, but it works. Not the worst thing in
// the world.

class Lamp {
    boolean m_stateOfLamp;
    String m_lightBubblePower;

    Lamp() {
	m_stateOfLamp = false;
	m_lightBubblePower = "60 W";
    }

    // It is not the best constructor, but for the classroom it can be
    // tolerated.
    Lamp(boolean stateOfLamp, String lightBubblePower) {
	m_lightBubblePower = lightBubblePower;
	m_stateOfLamp = stateOfLamp;
    }

    void showLightBubblePower() {
	System.out.print("Light bubble has " + m_lightBubblePower +
			   " of power.");
    }

    void showLampState() {
	if (m_stateOfLamp == true) {
	    System.out.print("The lamp is turned on.");
	} else {
	    System.out.print("The lamp is turned off.");
	}
    }

    void switchLampOn() {
	m_stateOfLamp = true;
    }

    void switchLampOff() {
	m_stateOfLamp = false;
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

	System.out.println("\n\n\nSwitching myLampVar1 on and off.");
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

	// This code is very unprofessional, but it works.
    }
}
