#include "Character.hpp"
using namespace std;

#ifndef __ARCHER_HPP__
#define __ARCHER_HPP__
class Archer : virtual public Character {
    public:
    bool dodging();
};

#endif
