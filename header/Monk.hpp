#include "Character.hpp"
using namespace std;

#ifndef __MONK_HPP__
#define __MONK_HPP__
class Monk :  virtual public Character {
    public:
        int Training();

};

#endif