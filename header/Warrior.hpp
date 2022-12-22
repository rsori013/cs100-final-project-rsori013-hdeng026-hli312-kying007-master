#include "Character.hpp"
using namespace std;

#ifndef __WARRIOR_HPP__
#define __WARRIOR_HPP__

class Warrior :  virtual public Character  {
    public:
    int bloodSteal();

};

#endif