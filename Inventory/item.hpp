#include <iostream>
#include <string>
using namespace std;

#ifndef __ITEM_HPP__
#define __ITEM_HPP__

class Item {
    public:
        string itemName;
        string itemType;
        int Buff = 0;

        void printGet() {
            cout << "you get a " << itemType << endl;
        };
        virtual ~Item() {};
        virtual void PrintItemInfo() = 0;
};

#endif