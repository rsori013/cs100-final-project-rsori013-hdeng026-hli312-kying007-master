#include "../header/Mob.hpp"
#include <string>
#include <iostream>
using namespace std;

Mob::Mob(int h, int d, string name){
	health = h;
	damage = d;
	mobName = name;
}

int Mob::attack(){
	return damage;
}

string Mob::getName(){
	return mobName;
}

void Mob::takeDamage(int playerDamage){
	health = health - playerDamage;
	if (health < 0){
		health = 0;
	}
}

bool Mob::isDead(){
	if (health > 0){
		return false;
	}
	return true;
}

int Mob::getHealth(){
    return health;
}

void Mob::printHealth(){
    cout << "Remaining health: " << this->health << endl;
    cout << endl;
}

// Item Mob::dropItem(string itemName);
