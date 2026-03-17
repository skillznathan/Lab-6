#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Inventory.h"

class Player {

private:
    std::string name;
    int health;
    Inventory inventory;

public:
    Player(std::string name, int health);

    void addItem(const Item& item);
    void showInventory() const;

    ~Player();
};

#endif