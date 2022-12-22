#include "../header/StoryBoard.hpp"
#include <iostream>
using namespace std;

int main (){
	StoryBoard theStory;
	theStory.displayArt("title.txt");

	cout << "\t \t \t \tAre you ready for this game to blow your mind?" << endl;
	cout << "\t \t \t \t \tPress Y for YES and N for No:" << endl;
	cout << "\t \t \t \t \t \t" <<"      ";
	char answer;
	cin >>  answer;
	if (answer == 'y' || answer == 'Y'){
		theStory.runGame();
	}
	else {
		cout << "You made your choice, See you Next Time" << endl;
	}
	
	
	
	return 0;
}
