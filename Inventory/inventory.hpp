#include <iostream>
#include <vector>
#include "item.hpp"
#include "Potion.hpp"
#include "Weapons.hpp"

using namespace std;

#ifndef __INVENTORY_HPP__
#define __INVENTORY_HPP__

class Inventory {
    public:
        ~Inventory();
        vector<Item*> itemList;
        void collectItem(Item* anItem);
        void printItem();
        Item* getItem(int index);
        void deleteItem(int index); //delete the item once used
        bool isEmpty();
};

#endif