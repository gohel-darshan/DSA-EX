#include <iostream>
#include <string>

using namespace std;

class Gadget {
private:
    string name;
    int powerLevel;
    int useCount;

    // Private method to update use count
    void updateUseCount() {
        useCount++;
        if (useCount > 10) {
            cout << "Warning: Gadget '" << name << "' has been overused!" << endl;
        }
    }

public:
    // Constructor
    Gadget(string gadgetName, int power)
        : name(gadgetName), powerLevel(power), useCount(0) {}

    // Public method to display gadget details
    void displayDetails() {
        cout << "Gadget Name: " << name << endl;
        cout << "Power Level: " << powerLevel << endl;
        cout << "Use Count: " << useCount << endl;
    }

    // Public method to use the gadget
    void useGadget() {
        updateUseCount();
    }

    // Getter for name and power level (for Nobita)
    string getName() {
        return name;
    }

    int getPowerLevel() {
        return powerLevel;
    }
};

int main() {
    Gadget gadget1("Time Machine", 100);
    
    // Nobita uses the gadget
    for (int i = 0; i < 12; i++) {
        gadget1.useGadget();
    }

    // Display gadget details
    gadget1.displayDetails();

    return 0;
}
