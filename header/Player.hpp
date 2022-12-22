#include <string>
#include "Archer.hpp"
#include "Warrior.hpp"
#include "Wizard.hpp"
#include "Monk.hpp"
#include "../Inventory/inventory.hpp"

using namespace std;


#ifndef PLAYER_HPP
#define PLAYER_HPP

// class Player : public Archer, public Warrior, public Wizard, public Monk {

class Player : public Archer, public Wizard, public Monk, public Warrior {
    protected:
        string playerName;
        string jobName;
        Inventory theInventory;
        Item* equippedWeapon = NULL;
    
    public:
	    Player(string pName, string jName, int h, int d);
        ~Player();
        int jobType();
        string getName();
        int attack(int job);
        void takeDamage(int mobDamage);
        int getHealth();
        void addHealth(int healthPoints);
        void playerInformation();
        void printHealth();
        void playerGetItem(int index);
        void putInBag(Item* theItem);
};

#endif // PLAYER_HPP
