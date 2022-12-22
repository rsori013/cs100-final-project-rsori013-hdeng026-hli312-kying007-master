#include <iostream>
#include <string>
#include "item.hpp"
using namespace std;

#ifndef POTION_HPP_
#define POTION_HPP_

class Potion : public Item{
	public:
		virtual ~Potion() {};
		Potion(string name){
			itemName = name;
			itemType = "Potion";
		}
		void PrintItemInfo(){
			cout << itemName << " in type: " << itemType << endl;
		}
		int addDamage(){ return 0; };
};

#endif /*POTION_HPP_*/