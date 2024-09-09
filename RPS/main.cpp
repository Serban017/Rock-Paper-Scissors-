#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

int main() {

	char PlayerChoice;
	char AIChoice{};
	int Player_Score = 0;
	int AI_Score = 0;
	char play_Again = 'Y';

	srand(time(0));

	cout << "The winner is decided based on these rules: \n";
		cout << "	Rock beats Scissors. \n";
		cout << "	Scissors beat Paper. \n";
		cout << "	Paper beats Rock. \n";

	while (play_Again == 'Y' || play_Again == 'y')
	{
		

		int randomNum = rand() % 3; 
		switch (randomNum)
		{
		case 0: 
			AIChoice = 'R'; //the computer randomly chooses rock	
			break;
		case 1: 
			AIChoice = 'P';	//the computer randomly chooses paper
			break;
		case 2: 
			AIChoice = 'S'; //the computer randomly chooses scissors
			break;
		}

		cout << "Enter your choice (R for Rock, P for Paper, S for Scissors): \n";
		cin	>> PlayerChoice;

		if (PlayerChoice == AIChoice) cout << "It's a tie, the AI chose " << AIChoice << " as well \n";
		
			else
				if ((PlayerChoice == 'R' && AIChoice == 'S') ||
					(PlayerChoice == 'S' && AIChoice == 'P') ||
					(PlayerChoice == 'P' && AIChoice == 'R'))
				{
					Player_Score += 1;
					cout << "Player wins! Ai chose " << AIChoice << "\n";
				}
				 	
				else {
					AI_Score += 1;
					cout << "AI wins with " << AIChoice << "\n";
				}
			
		cout << "Player Score = " << Player_Score << "\n";
		cout << "AI Score = " << AI_Score << "\n";
		cout << "\n";
		cout << "Do you want to play again? (Y to continue, any other key to quit): " <<"\n" <<"(quiting will reset the score)" << "\n";
		cin >> play_Again;
		cout << "\n";

	}

	cout << "Final Scores:\n";
	cout << "Player Score: " << Player_Score << "\n";
	cout << "AI Score: " << AI_Score << "\n";
	cout << "Thanks for playing!\n";

	
		return 0;

}