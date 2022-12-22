#include <iostream>
#include <string>
#include "item.hpp" //not yet implement
using namespace std;

#ifndef WEAPON_HPP_
#define WEAPON_HPP_

class Weapons : public Item{
	public:
		int damageBuff;
		Weapons();
		virtual ~Weapons() {};
		Weapons(int buff, string name){
			damageBuff = buff;
			itemName = name;
			itemType = "Weapon";
		}
		void PrintItemInfo(){
			cout << itemName << " in type: " << itemType <<  ", with Damage buff: " << damageBuff << endl;
		}
		void addDamage(){
			Buff = damageBuff;
		}
};

#endif /*WEAPON_HPP_*/

