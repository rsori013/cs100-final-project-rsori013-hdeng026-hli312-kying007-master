#include "Character.hpp"
class Mob {
    private: 
        int health;
        int damage;
    public:
        void attack(Character c);
        bool isDead(int health); //if health is zero then true
	Mob Mob(); //default
}
