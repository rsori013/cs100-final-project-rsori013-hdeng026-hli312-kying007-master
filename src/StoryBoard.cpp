#include <iostream>
#include <fstream>
#include "../header/StoryBoard.hpp"
#include "../header/Player.hpp"
#include "../header/Mob.hpp"
#include "../Inventory/inventory.hpp"
#include <stdlib.h>
using namespace std;




void StoryBoard::runGame(){
    cout << "BACKGROUND STORY:" << endl;
    cout << "The princess has been kidnapped by the monsters and is locked up in a cage on top of the mountain. The Skeleton King(boss) demands 1000 bitcoins in exchange for the life of the princess." ;
    cout << "As much as the King wants to give the monsters the amount of bitcoins they are asking for, the kingdom is currently in recession and cannot afford the ransom."; 
    cout << "The King hires you to brute force rescue the princess. Becareful! The mountain is surrounded by different types of monsters. The princess' life is in your hands!";
    cout << "Make sure to bring her back in one piece. The whole kingdom believes in your skills!" << endl << endl; 
    
    string playerName;
    cout << "Enter player name: ";
    cin >> playerName;
    string jobName;
    string jobChoose;
    int damage;
    cout << "Choose the character of your choice for this mission." << endl;
    cout << "Enter 1 to be a Warrior. Enter 2 to be a Wizard. Enter 3 to be a Monk. Enter 4 to be an Archer" << endl;
    cout << "You pick: ";
    while (cin >> jobChoose){
        if (jobChoose == "1"){
            jobName = "Warrior";
            damage = 20;
            break;
        }
        else if (jobChoose == "2"){
            jobName = "Wizard";
            damage = 20;
            break;
        }
        else if (jobChoose == "3"){
            jobName = "Monk";
            damage = 20;
            break;
        }
        else if (jobChoose == "4"){
            jobName = "Archer";
            damage = 20;
            break;
        }
        else {
            cout << "Please enter valid choice." << endl;
            cout << "Enter 1 to be a Warrior. Enter 2 to be a Wizard. Enter 3 to be a Monk. Enter 4 to be an Archer" << endl;
        }
    }

    Player* thePlayer = new Player(playerName, jobName, 100, damage);
    thePlayer->playerInformation();

    // Goblin Fight
    int choice;
    cout << "*" << playerName << " starts travelling*" << endl;
    cout << "\nYou have been walking for quite some time now..." << endl;
    cout << "You finally reached the foot of the mountain!" << endl;
    cout << "The mountain diverge into 3 different paths, which one will you take?" << endl;
    cout << "Enter 1 to go left   Enter 2 to go straight  Enter 3 to go right" << endl;
   
    cout << "You pick path: " ;
    cin >>  choice;
    switch(choice){
        case 1:{
            cout << "Went to the left path.." << endl;
            Item* Weapon1 = new Weapons(69, "DimondSword");
            Weapon1->printGet();
            Weapon1->Buff = 69;
            thePlayer->putInBag(Weapon1);
            cout << endl;
            break;
        }
        case 2:{
            cout << "Went to the straight path.." << endl;
            Item* Potion1 = new Potion("GreenPotion");
            Potion1->printGet();
            thePlayer->putInBag(Potion1);
            cout << endl;
            break;
        }
        case 3:{
            cout << "Went to the right path.." << endl;
            Item* Weapon2 = new Weapons(50, "GoldSword");
            Item* Potion2 = new Potion("GreenPotion");
            Weapon2->printGet();
            thePlayer->putInBag(Weapon2);
            Weapon2->Buff = 50;
            Potion2->printGet();
            thePlayer->putInBag(Potion2);
            cout << endl;
            break;
        }
        default:{
            cout << "Such path does not exist, You are now Lost. YOU FAILED TO SAVE THE PRINCESS!" <<endl;
            delete thePlayer;
            exit(0);
        }
    }
    goblinsFight(thePlayer,playerName);

    //orc fight
    int choice2;
    cout << endl;
    cout << "*looks above to see how far the top is* " << endl;
    cout << "*realizes it is almost half way top, and proceeds to keep walking..." << endl; 
    cout << "*after a quite while of hiking you saw an Orc sleeping*" << endl;
    cout << "What do you want to do " << playerName << "?" << endl;
    cout << "Enter 1 if you want to wake up the orc, Enter 2 if you want to avoid it and use a different path towards" << endl;
    cout << "You want to do: ";
    cin >> choice2;
    switch(choice2){
        case 1:
        cout << playerName << ": Wake up you ugly orc! I could have went the other way to avoid you but I am bored fight me! " << endl;
        // get something?
        break;
        case 2:
         cout << "*Walking as silent as possible*" << endl;
         cout << "*Orc's alarm clock starts beeping* " << endl;
        // get something?
        break;
        default:
        cout << "The orc ate you for not choosing a given option. YOU DIED!" <<endl;
        // delete thePlayer;
        // delete Orcs;
         exit(0);
    }
    orcFight(thePlayer,playerName);

    cout << endl;
    cout << playerName << ": pheeeeww, that was close." << endl;
    cout << playerName << ": Atleast he can sleep for good now!" << endl <<endl;;

    //skeleton king
    int choice3;
    cout << "*keeps on hiking to the top of mountain*" << endl;
    cout << "*sees the peak of the mountain*" << endl;
    cout << "What do you want to do now that you are close to the top of the mountain?" << endl;
    cout << "Enter 1 if you take a 15 mins break to eat some of your premeal, Enter 2 if you want shout and mock the Skeleton King" << endl;
    cout << "Enter 3, if you want to hiking in silent                         Enter 4 if you want to run away." << endl;
    cout << "You want to do: ";
    cin >> choice3;
    switch(choice3){
        case 1:
        cout << "*Eating food*" << endl;
        cout << "*drinking redbull*" << endl;
        cout << playerName <<": I feel the redbull kicking in! I love cafeinne" << endl;
        cout << "continue to hike to the peak of the mountain" << endl;
        skeletonKingFight(thePlayer,playerName);
        break;
        case 2:
        cout << "Skeleetooon KINGGG!!! YOU BOOOOOOONEES! IM HERE!!!" <<  endl;
        cout << "PRINCESS IM HERE TO SAVE YOU NO NEED TO WORRY!" << endl;
        cout << "*" << playerName << "running while shouting towards Skeletong King" << endl;
        skeletonKingFight(thePlayer,playerName);
        break;
        case 3:
        cout << "*silently hikes going up*" << endl;
        cout << playerName << ": SURPRISE!!!" << endl;
        cout << "*Skeleton King and Princess surprise*" << endl;
        skeletonKingFight(thePlayer,playerName);
        break;
        case 4:
        cout << "You are a coward for running, YOU FAILED TO SAVE THE PRINCESS!" <<endl;
        cout << "You came back to the kingdom and the king executed you, YOU DIED" << endl;
        delete thePlayer;
        exit(0);
        break;
        default:
        cout << "You picked an option that does not exist" << endl;
        cout <<  "A group of lions ate you. YOU DIED" << endl;
        delete thePlayer;
        exit(0);
    }
   
   if(thePlayer->getHealth() > 0){
   cout << "You defeated the all the monsters! You did well, now the princess is finally in safe hands." << endl;
   cout << "A feast and 1 bitcoin is waiting for when you return." << endl;
   cout << "Good Game Well Played "  << playerName << endl; 
   }
   else {
    cout << "You died brave trying your best. Goodluck in the afterlife! " << endl;
   }
    delete thePlayer;
}

void StoryBoard::goblinsFight(Player* thePlayer,string playerName){
    string mobName = "Goblin";
    cout << "As you continue to your path a " << mobName << " sees you!" << endl;
    displayArt("goblin.txt");
    cout << "Goblin: Do you know which mountain you at? You in my turf human." << endl;
    cout << playerName << ": I am here to rescue the princess!" << endl;
    cout << "Goblin: You got the money boss is asking for?" << endl;
    cout << playerName << ": No! I came to fight and get her for free :p" << endl;
    cout << "Goblin: You got balls coming in here by yourself! You realy think you can beat me? *laughs*"<<endl;
    cout << playerName << ": Just shut up and fight me!" << endl;
    Mob* Goblins = new Mob(60, 5, mobName);
    int isQuit = battleWithMob(thePlayer, Goblins);
    delete Goblins;
    if (isQuit != 0){
        delete thePlayer;
        delete Goblins;
        exit(0);
    }
    cout << "I knew that goblin got nothing on me, easy dub!!!" << endl;
}

void StoryBoard::orcFight(Player* thePlayer, string playerName){
    displayArt("orc.txt");
    string mobName = "Orcs";
    cout << playerName << ": Goodmorning Orc you look grumpy, did not get enough sleep? HAHAHA" << endl;
    cout << "Orc: *yawning* I wish I can sleep more zzzZZZZ" << endl;
    cout << "Orc: Who the hell are you?!? I guess it doest matter because boss ordered to kill anyone that goes here." << endl;
    cout << "Orc: I guess I will just go back to sleep again once I kill you!!!" << endl;
    cout << "*aggresively attack*" << endl;
    Mob* Orcs = new Mob(70, 10, mobName);
    int isQuit = battleWithMob(thePlayer, Orcs);
    delete Orcs;
    if (isQuit != 0){
        delete thePlayer;
        delete Orcs;
        exit(0);
    }
}


void StoryBoard::skeletonKingFight(Player* thePlayer,string playerName){
    displayArt("skeletonking.txt");
    string mobName = "Skeleton King";
    cout << "*reach the top of the mountain*" << endl;
    cout << "*sees the princess locked in a cage*" << endl;
    cout << playerName << ": princess hang tight in there your father sent me here to rescue you" << endl;
    cout << "Skeleton King: HAHAHAHA did I just hear that you are here to rescue someone? I wont let that happen!" << endl;
    cout << "*skeletons starts spawning in the ground" << endl;
    cout << "Skeleton King: I will empty out my wrath on you of not sending me bitcoins I am asking for!!" << endl;
    Mob* skeletongKing = new Mob(100, 20, mobName);
    int isQuit = battleWithMob(thePlayer, skeletongKing);
    delete skeletongKing;
    if (isQuit != 0){
        delete thePlayer;
        delete skeletongKing;
        exit(0);
    }
}



// output the game over message
void StoryBoard::gameOver(Player* thePlayer, Mob* Mob){
    cout << "Your mission failed" << endl;
    delete thePlayer;
    delete Mob;
    exit(0);
}

bool StoryBoard::isDead(Player* thePlayer){
    if (thePlayer->getHealth() > 0){
        return false;
    }
    return true;
}

int StoryBoard::battleWithMob(Player* thePlayer, Mob* Mob) {
    cout << endl;
    cout << "Battle Begins" << endl;
    int round = 1;

    while(!isDead(thePlayer)){
        cout << "ROUND " << round << endl;
        cout << endl;


        // player attack
        cout << "Your turn" << endl;
        cout << "Choose 1 to select options" << endl;
        cout << "Choose 2 to Give up" << endl;
        
        string option;

        while (cin >> option){
            if (option == "1"){
                int playerDamage = thePlayer->attack(thePlayer->jobType());
                //What does this if statement mean? 
                if (playerDamage == -1){
                    thePlayer->printHealth();
                    cout << Mob->getName() << endl;
                    Mob->printHealth();    
                }
                else if(playerDamage == -2){
                    Mob->takeDamage(10);
                    cout << Mob->getName() << " takes " << 10 << " damage" << endl;
                    thePlayer->printHealth();
                    cout << "The enemy defrosts and can now attack";
                    cout << endl;
                }
                else{
                    Mob->takeDamage(playerDamage);
                    cout << Mob->getName() << " takes " << playerDamage << " damage" << endl;
                    Mob->printHealth();
                    if (isDead(thePlayer)){
                        gameOver(thePlayer, Mob);
                        //exit(0);
                    }
                    thePlayer->takeDamage(Mob->attack());
                    cout << thePlayer->getName() << " takes " << Mob->attack() << " damage" << endl;
                    thePlayer->printHealth();
                    cout << endl;
                } 

                break;
            }
            
            else if (option == "2"){
                gameOver(thePlayer, Mob);
                //exit(0); ?
            }

            else {
                cout << "invalid option, try again!" << endl;
            }
        }

        // Goblin attack
        cout << "Enemy's turn" << endl;
        //int mobDamage = Mob->attack(); //unused variable!!!!
        cout << Mob->getName() << " attacks you" << endl;
 
            
        if (Mob->isDead()){
            cout << Mob->getName() <<" is Dead" << endl;
            return 0;
        }
        ++round;
    }
    return 0;
}


void StoryBoard::displayArt(string txtfile){
    ifstream file;
    file.open(txtfile);
    if(file.fail())
        cout << "Failed to open ASCII file";

    cout << endl;
    string temp;
    while(!file.eof()){
        getline(file, temp);
        cout << "\t\t\t"  << temp << endl;
    }

    cout << endl;

    file.clear();

}