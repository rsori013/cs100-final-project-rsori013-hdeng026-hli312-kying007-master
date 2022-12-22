#include "../header/Character.hpp"
#include "../header/Warrior.hpp"
#include <iostream>

int Warrior::bloodSteal() {
    this->health += this->damage;
    return damage;
}
