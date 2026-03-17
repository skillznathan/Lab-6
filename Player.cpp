#include "Player.h"
#include <iostream>

Player::Player(std::string name, int health)
    : name(name), health(health), inventory(5)
{
    std::cout << "Default constructor called for Player." << std::endl;
}

void Player::addItem(const Item& item) {

    if (inventory.addItem(item)) {
        std::cout << name << " found a ";
        item.display();
    }
}

void Player::showInventory() const {

    std::cout << "\n--- " << name << "'s Inventory ---" << std::endl;
    inventory.display();
}

Player::~Player() {
    std::cout << "Player " << name << " has been destroyed." << std::endl;
}