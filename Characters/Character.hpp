#include "Mob.hpp"
class Character {
    private:
        int health;
        int damage;
	    int shield;
    public:
        Character Character(); //default
        void attack(Mob e);
        bool isDead(int health); //if health is zero then true
}
