#include "Character.hpp"
using namespace std;

#ifndef __WIZARD_HPP__
#define __WIZARD_HPP__
class Wizard : virtual public Character {
    public:
        int spellBook();
};
#endif