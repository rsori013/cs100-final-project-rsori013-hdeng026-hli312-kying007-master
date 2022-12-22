#include "../header/Player.hpp"

#include <string>
#include <iostream>
using namespace std;

Player::Player(string pName, string jName, int h, int d): playerName(pName), jobName(jName){
    this->playerName = pName;
    this->jobName = jName;
    this->health = h;
    this->damage = d;
}

Player:: ~Player(){}

int Player::jobType(){
    if (jobName == "Warrior"){
        return 1;
    }
    if (jobName == "Wizard"){
        return 2;
    }
    if (jobName == "Monk"){
        return 3;
    }
    if (jobName == "Archer"){
        return 4;
    }
    return 0;
}

string Player::getName(){
    return this->playerName;
}

int Player::attack(int job){
    
    switch (job) {
        case 1:
        {
            cout << "Choose your attack" << endl;
            cout << "Enter 1 to attack. Enter 2 to see the props. Enter 3 to use BloodSteal. Enter 4 to skip a turn." << endl;
            string playerChoice;
            while(cin >> playerChoice){
                if (playerChoice == "1"){
                    int totalDamage;
                    if(equippedWeapon != NULL)
                    {
                        totalDamage = this->damage + equippedWeapon->Buff;
                    }
                    else
                    {
                        totalDamage = this->damage;
                    }
                    return totalDamage;
                }
                else if (playerChoice == "2"){
                    theInventory.printItem();
                    int indx;
                    cout << "Select an Item" << endl;
                    cin >> indx;
                    if (!theInventory.isEmpty()){
                        playerGetItem(indx);
                        return 0;
                    }
                    else {
                        cout << "Enter 1 to attack. Enter 2 to see the props. Enter 3 to Use Spells. Enter 4 to skip a turn." << endl;
                    }
                }
                else if (playerChoice == "3"){
                    return bloodSteal();
                }
                else if (playerChoice == "4"){
                    return 0;
                }
                else{
                    cout << "Please enter valid choice." << endl;
                    cout << "Enter 1 to attack. Enter 2 to see the props. Enter 3 to Use Spells. Enter 4 to skip a turn." << endl;
                }
            }
            
        }
        case 2:
        {
            cout << "Choose your attack" << endl;
            cout << "Enter 1 to attack. Enter 2 to see the props. Enter 3 to Use Spells. Enter 4 to skip a turn." << endl;
            string playerChoice;
            while(cin >> playerChoice){
                if (playerChoice == "1"){
                    int totalDamage;
                    if(equippedWeapon != NULL)
                    {
                        totalDamage = this->damage + equippedWeapon->Buff;
                    }
                    else
                    {
                        totalDamage = this->damage;
                    }
                    return totalDamage;
                }
                else if (playerChoice == "2"){
                    theInventory.printItem();
                    int indx;
                    cout << "Select an Item" << endl;
                    cin >> indx;
                    if (!theInventory.isEmpty()){
                        playerGetItem(indx);
                        return 0;
                    }
                    else {
                        cout << "Enter 1 to attack. Enter 2 to see the props. Enter 3 to Use Spells. Enter 4 to skip a turn" << endl;
                    }
                }
                else if (playerChoice == "3"){
                    switch(spellBook())
                    {
                        case 1:
                        {
                            return -2;
                        }
                        case 2:
                        {
                            return 50;
                        }
                        case 3:
                        {
                            return -1;
                        }
                    }
                    return 0;
                }
                else if (playerChoice == "4"){
                    return 0;
                }
                else{
                    cout << "Please enter valid choice." << endl;
                    cout << "Enter 1 to attack. Enter 2 to see the props. Enter 3 to Use Spells. Enter 4 to skip a turn." << endl;
                }
            }
        }
        
       
        case 3:
        {
            cout << "Choose your attack" << endl;
            cout << "Enter 1 to attack. Enter 2 to see the props. Enter 3 to Train and increase damage. Enter 4 to skip a turn." << endl;
            string playerChoice;
            while(cin >> playerChoice){
                if (playerChoice == "1"){
                    int totalDamage;
                    if(equippedWeapon != NULL)
                    {
                        totalDamage = this->damage + equippedWeapon->Buff;
                    }
                    else
                    {
                        totalDamage = this->damage;
                    }
                    return totalDamage;
                }
                else if (playerChoice == "2"){
                    theInventory.printItem();
                    int indx;
                    cout << "Select an Item" << endl;
                    cin >> indx;
                    if (!theInventory.isEmpty()){
                        playerGetItem(indx);
                        return 0;
                    }
                    else {
                        cout <<"Enter 1 to attack. Enter 2 to see the props. Enter 3 to Train and increase damage. Enter 4 to skip a turn."  << endl;
                    }
                }
                else if (playerChoice == "3"){
                    return Training();
                }
                else if (playerChoice == "4"){
                    return 0;
                }
                else{
                    cout << "Please enter valid choice." << endl;
                    cout << "Enter 1 to attack. Enter 2 to see the props. Enter 3 to Train and increase damage. Enter 4 to skip a turn."  << endl;
                }
            }
        }
        case 4:
        {
            cout << "Choose your action" << endl;
            cout << "Enter 1 to attack. Enter 2 to see the props. Enter 3 to dodge the attack. Enter 4 to skip a turn." << endl;
            string playerChoice;
            while(cin >> playerChoice){
                cout << "Choose your action" << endl;
                cout << "Enter 1 to attack. Enter 2 to see the props. Enter 3 to dodge the attack. Enter 4 to skip a turn." << endl;
                if (playerChoice == "1"){ 
                    int totalDamage;
                    if(equippedWeapon != NULL)
                    {
                        totalDamage = this->damage + equippedWeapon->Buff;
                    }
                    else
                    {
                        totalDamage = this->damage;
                    }
                    return totalDamage;
                }
                else if (playerChoice == "2"){
                    theInventory.printItem();
                    int indx;
                    cout << "Select an Item" << endl;
                    cin >> indx;
                    if (!theInventory.isEmpty()){
                        playerGetItem(indx);
                        return 0;
                    }
                    else {
                        cout << "Enter 1 to attack. Enter 3 to dodge the attack. Enter 4 to skip a turn." << endl;
                    }
                }
                else if (playerChoice == "3"){
                    if (dodging()){
                        cout << "dodge successful" << endl;
                        return -1;
                    }
                    cout << "dodge unsuccessful" << endl;
                    return 0;
                }
                else if (playerChoice == "4"){
                    return 0;
                }
                else{
                    cout << "Please enter valid choice." << endl;
                    cout << "Enter 1 to attack. Enter 2 to see the props. Enter 3 to dodge the attack. Enter 4 to skip a turn." << endl;
                }
            }
        }
    }
    return 0;
}

void Player::takeDamage(int mobDamage){
    this->health = this->health - mobDamage;
    if (this->health < 0){
		this->health = 0;
	}
}

int Player::getHealth(){
    return this->health;
}

void Player::addHealth(int healthPoints){
    this->health = this->health + healthPoints;
}

void Player::playerInformation(){
    cout << this->playerName << ", you're character is a/an  " << this->jobName << ", you're current health is " << this->health;
    cout << ", and your damage is: " << this->damage << endl;
    cout << endl;
}

void Player::printHealth(){
    cout << this->playerName << ", your remaining health: " << this->health << endl;
    cout << endl;
}

void Player::putInBag(Item* theItem){
    theInventory.collectItem(theItem);
}

void Player::playerGetItem(int index){
    Item* useItem = theInventory.getItem(index);
    if (useItem->itemType == "Potion"){
        cout << "You used a health potion. +40 Health" << endl;
        this->health += 40;
        theInventory.deleteItem(index);
    }
        
    else if(useItem->itemType == "Weapon" && equippedWeapon != NULL) {
        cout << "Equip a new item will discard the previous one!" << endl;
        cout << "Action Confirm:  Y/N" << endl;
        char userInput;
        cin >> userInput;
        while(userInput != 'Y' || userInput != 'y' || userInput != 'N' || userInput != 'n') {
            cout << "invalid input, try again!" << endl;
            cin >> userInput;
        }

        if(userInput == 'Y' || userInput == 'y') {
            equippedWeapon = theInventory.getItem(index);
            theInventory.deleteItem(index);
        }

        else if(userInput == 'N' || userInput == 'n') {
            cout << "Canceled";
        }
        
    }

    else {
        equippedWeapon = theInventory.getItem(index);
        cout << "Weapon Equiped" << endl;
        theInventory.deleteItem(index);
    }

}