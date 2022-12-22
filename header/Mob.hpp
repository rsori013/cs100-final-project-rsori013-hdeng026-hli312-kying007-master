#include <string>
using namespace std;

#ifndef MOB_HPP
#define MOB_HPP
class Mob {
    protected: 
        int health;
        int damage;
        string mobName;
    public:
        Mob();
        Mob(int h, int d, string name); //default
        string getName();
        int attack();
        void takeDamage(int playerDamage);
        bool isDead(); //if health is zero then true
        int getHealth();
        void printHealth();
        // Item dropItem(string itemName);
        
};

#endif // MOB_HPP