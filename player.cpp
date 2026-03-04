#include "player.h"
#include <iostream>
#include <string>
#include <algorithm> // For std::max

// Default Constructor
Player::Player() {
    name = "Hero";
    health = 100;
    maxHealth = 100;
    attackPower = 10;
    std::cout << "Default constructor called." << std::endl;
}

// Overloaded Constructor
Player::Player(std::string name, int health, int attackPower) {
    this->name = name;
    this->health = health;
    this->maxHealth = health; // Set maxHealth to starting health
    this->attackPower = attackPower;
    std::cout << "Overloaded constructor called." << std::endl;
}

// Destructor
Player::~Player() {
    std::cout << "The object for Player " << name << " has been destroyed." << std::endl;
}

// Take Damage Method
void Player::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
    
    if (health == 0) {
        std::cout << name << " falls to the ground, defeated." << std::endl;
    }
}

// Display Status Method
void Player::displayStatus() const {
    std::cout << "[" << name << "] - HP: " << health << "/" << maxHealth << std::endl;
}

// Getter Functions
std::string Player::getName() const { return name; }
int Player::getHealth() const { return health; }
int Player::getMaxHealth() const { return maxHealth; }
int Player::getAttackPower() const { return attackPower; }




