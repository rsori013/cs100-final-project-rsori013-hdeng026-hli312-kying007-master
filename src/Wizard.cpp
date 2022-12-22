#include "../header/Wizard.hpp"
#include <iostream>
int Wizard::spellBook()
{
    bool flag = false;
    int spell = 0;
    do {
        flag = false;
        cout << "Enter 1 for Ice spell. Enter 2 for Fire Spell. Enter 3 for magic shield" << endl;
        cin >> spell;
        if(spell == 1)
        {
            cout << "You snap your fingers and the enemy freezes and is unable to attack" << endl;
            //call attack or something and freeze mob for a turn
        }
        else if(spell == 2)
        {
            cout << "You cast the fire spell" << endl;
            //call attack and do extra damage
        }
        else if(spell == 3)
        {
            cout << "A shimmering blue shield appears in front of you and blocks the enemy's attack." << endl;
        }
        else
        {
            cout << "You entered an invalid input" << endl;
            flag = true;
        } 
    }while(flag);
    return spell;
}