> This is our CS100 Class project and I re-uploaded it as a public repo.
# ADVENTURE RPG

 
 > Authors: Haifan Deng (https://github.com/Haifan-Deng), Ivan Li (https://github.com/BYRaphiel), Kobe Ying (https://github.com/Kobe-Y), Rovin Soriano   (https://github.com/rsori013)


## Project Description
Why are we interested?
The RPG TEXT GAME ADVENTURE Project is intersting for everyone because it will be an application of C++ that we have never tried before. Everyone is very excited to create a project like this since none of us have an experience. This is important for us because we are learning new skills and kind of having an experience what it is like working in teams for a project.

What language or tools are we going to use for this project?
We plan to use c++ to code the game. We are also thinking of adding some ascii art for some for the enemy so the player can see who they are fighthing for and not just all texts. We also use Valgrind to check for memory leaks and Google test in order to check if the functions we have created successfully works or not.

What will be the user input?
The input will be the user's decision for the game, we will implement a series of choices for the player. They player  will then pick a choice and base on what was selected a corresponding action will take place.

What are some features in this project?
In this Adventure RPG Game we created the user can choose among 4 different characters such as Warrior, Wizzard, Monk and Archer. These different characters have their unique abilities that will create a huge impact for the game play. The goal in this game is to rescue the princess that is being held on top of the mountain and inorder to reach the top there will be some path choices the user will have to pick. Another feature is that a user will pick up specific items that will be stored in their inventory which they can later on use during battles onces fighting the monsters from the paths they take. At each step of the game, a narrative is presented and the user can select between different options. Once a monster is encounter lots of options are which a user can pick from, user can either run away, fight back where user have an option to just just regular attack, some special abitility a specific character have, use some items in the inventory the picked up or just skip a turn. The game is also have ascii arts for every monster the user will encounter to add some intenseness. Game also consist of a very organize battle system where we are able to see the health remaining for both the user and the enemy and how much damage both the user and the enemy did to each other. All in all the game is full of amazing features that makes it fun to play with.

 
 

 
 
 > ## Phase II
## Class Diagram
![uml diagram download](https://github.com/rsori013/cs100-final-project-rsori013-hdeng026-hli312-kying007-master/assets/114533891/2d724570-727b-4adc-b479-cae47c47a377)

 > Character is the superclass (interface) to Warrior, Wizard, Monk, Archer. The four different characters have unique attack capabilities between each other. Wizard can cast spells, Monk can double the damage with training, Archers can dodge monster attacks and Warrior can suck blood from the enemies. Player then inherits these classes and takes it to storyboard where the main game will run. Storyboard is composed of the player, and aggregated from the mob class. The battle will happen through the battleWithMob function in StoryBoard. Mobs will drop items for players to pick up one they are beaten. Items will be stored in the player inventory in an item vector. Items will be weapons or potions. Weapons inside the inventory can be use as an offense against the monsters and potions can be use to regain health up to full health. To equip items we use playerGetItem in the player class. playerWeapon is a item type that will first set up to NULL at the beginning of the game. When the player equips a weapon, playerWeapon copys those values to then be used in the attack() function for player where the damage is added to the base damage. To equip an item, the player will print items and enter the number next to the item displayed. 

 > ## Phase III
> DONE

 
 > ## Final deliverable
 ## Screenshots
![314366840_3352779071662596_3447558513300740212_n](https://user-images.githubusercontent.com/114533891/204489203-622cf59d-7d6e-4488-b1b0-27d4bccd4a78.png)
![2](https://user-images.githubusercontent.com/114533891/204489223-49192b75-3664-4b7e-b6ae-b80c8aaa0f37.png)
![3](https://user-images.githubusercontent.com/114533891/204489234-61440b72-3956-4787-9495-0ef7223574b6.png)
![4](https://user-images.githubusercontent.com/114533891/204489352-44dc1022-473e-42d7-899c-7d6450b6cccf.png)
![5](https://user-images.githubusercontent.com/114533891/204489373-03a4729f-1b93-49e8-9b97-56a4b129bb88.png)
![6](https://user-images.githubusercontent.com/114533891/204489389-312cfb34-d47f-4ec0-ad5a-030710fbcab3.png)
![7](https://user-images.githubusercontent.com/114533891/204490240-061da9f7-4ec0-4fb8-8a41-11f1629c0775.png)
![8](https://user-images.githubusercontent.com/114533891/204490400-a79f17da-e780-4073-b5bb-b39031ab8484.png)



 ## Installation/Usage
 Option 1:
 1. Clone the remote repo into your local repo with https: "git clone https://github.com/cs100/final-project-hdeng026-hli312-kying007-rsori013.git"
 2. Nevigate to the src directory: "cd src"
 3. Call make to help you compile the game "make"
 4. Run the game "./run_game"
 5. Enjoy
 
 Option 2 (for MacOS/unix machines):
 1. download zipfile by clicking "code" button
 2. navigate to the zip file and unzip
 3. go into the unzipped final-project and navigate to src
 4. enter "make"
 5. then enter "./run_game"
 6. Enjoy
 
 ## Testing
 > The project was tested by creating unit tests with the gtest submodule, and valgrind for memory leak checks.
> Valgrind Report after playing game: 
>
![mem](https://user-images.githubusercontent.com/114533891/204489976-db9034a8-918a-429e-a81f-9eebe9620439.png)
>
> Google Test Result Screen Shot
>
![first test case pic](https://user-images.githubusercontent.com/114533891/204653264-0692d7b9-5be4-43f7-93f1-f2f5719f373b.png)
![2nd test case pick](https://user-images.githubusercontent.com/114533891/204653290-3dea2c91-cc1e-431f-9e90-35e047eb9bac.png)


 
