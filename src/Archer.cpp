#include "../header/Character.hpp"
#include "../header/Archer.hpp"
#include <cmath>
#include <time.h>


bool Archer::dodging()
{
    srand((unsigned) time(0));
    int prob = rand() % 10;
    if (prob >= 0 && prob <=6){
        return true;
    }
    return false;
}
