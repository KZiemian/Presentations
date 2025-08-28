// We can now write implementation of the lamp, about we were talking at
// the beginnig of our course.

// This code is very unprofessional, but it works. Not the worst thing in the
// world.

class Lamp {
    boolean m_stateOfLamp;
    String m_lightBubblePower;

    Lamp() {
	m_stateOfLamp = false;
	m_lightBubblePower = "60 W";
    }

    // It is not the best constructor, but for the it can be tolerated.
    Lamp(boolean stateOfLamp, String lightBubblePower) {
	m_lightBubblePower = lightBubblePower;
	m_stateOfLamp = stateOfLamp;
    }

    void showLightBubblePower() {
	System.out.println("Light bubble has " + m_lightBubblePower +
			   " of power.");
    }

    void showLampState() {
	if (m_stateOfLamp == true) {
	    System.out.println("The lamp is turn on.");
	} else {
	    System.out.println("The lamp is turn off.");
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
	System.out.println("myLampVar1.showLightBubblePower();");
	myLampVar1.showLightBubblePower();

	System.out.println("\nDescription of myLampVar2.");
	System.out.println("myLampVar2.showLampState();");
	myLampVar2.showLampState();
	System.out.println("myLampVar2.showLightBubblePower();");
	myLampVar2.showLightBubblePower();

	System.out.println("\nSwitching myLampVar1 on and off.");
	System.out.println("myLampVar1.showLampState();");
	myLampVar1.showLampState();

	System.out.println("\nmyLampVar1.switchLampOn();");
	myLampVar1.switchLampOn();

	System.out.println("\nmyLampVar1.showLampState();");
	myLampVar1.showLampState();

	System.out.println("\nmyLampVar1.switchLampOff();");
	myLampVar1.switchLampOff();

	System.out.println("\nmyLampVar1.showLampState();");
	myLampVar1.showLampState();

	// This code is very unprofessional, but it works.
    }
}
