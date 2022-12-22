#include "Mob.hpp"
#include "Player.hpp"
using namespace std;


#ifndef STORYBOARD_HPP
#define STORYBOARD_HPP

class StoryBoard {
    public:
        void runGame();

        //why do you need passed in value in gameover function?
        void gameOver(Player* thePlayer, Mob*);
        
        bool isDead(Player* thePlayer);
        int battleWithMob(Player* thePlayer, Mob*);
        void displayArt(string);
        void goblinsFight(Player* thePlayer, string );
        void orcFight(Player* thePlayer,string );
        void skeletonKingFight(Player* thePlayer,string );
};

#endif // STORYBOARD_HPP
