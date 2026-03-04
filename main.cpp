#include <iostream>
#include "player.h"

int main() {
    // 1. Create Player Objects
    Player hero; // Default constructor
    Player wizard("Gandalf", 120, 15); // Overloaded constructor

    // 2. Display Initial Status
    std::cout << "--- Initial Status ---" << std::endl;
    hero.displayStatus();
    wizard.displayStatus();

    // 3. Simulate Combat
    std::cout << "\n--- Hero takes damage! ---" << std::endl;
    hero.takeDamage(25);
    hero.displayStatus();

    std::cout << "\n--- Wizard takes damage! ---" << std::endl;
    wizard.takeDamage(150); // Massive damage
    wizard.displayStatus();

    std::cout << std::endl; // For spacing before destructors print

    return 0;
}

/*
@skillznathan ➜ /workspaces/Lab-6-RPGPART1 (main) $ g++ main.cpp player.cpp -o program
@skillznathan ➜ /workspaces/Lab-6-RPGPART1 (main) $ ./program
Default constructor called.
Overloaded constructor called.
--- Initial Status ---
[Hero] - HP: 100/100
[Gandalf] - HP: 120/120

--- Hero takes damage! ---
[Hero] - HP: 75/100

--- Wizard takes damage! ---
Gandalf falls to the ground, defeated.
[Gandalf] - HP: 0/120

The object for Player Gandalf has been destroyed.
The object for Player Hero has been destroyed.
@skillznathan ➜ /workspaces/Lab-6-RPGPART1 (main) $ 
*/