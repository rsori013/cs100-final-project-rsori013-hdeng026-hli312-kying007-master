#include <string>
using namespace std;
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character {
    protected:
        int health;
        int damage;
    
    public:
        Character() { health = 100; damage = 10; }; //default
        virtual int attack(int) = 0;
};

#endif // CHARACTER_HPP