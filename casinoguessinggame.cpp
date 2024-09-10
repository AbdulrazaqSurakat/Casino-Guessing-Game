#include <iostream>
#include <cstdlib> // Required for srand and rand
#include <ctime>   // Required for time (to seed srand)
using namespace std;


#include <iostream>
#include <cstdlib> // Required for srand and rand
#include <ctime>   // Required for time (to seed srand)
#include <string>
using namespace std;


int playerNum() {
	int playersnumber;
	cin >>  playersnumber;
	return playersnumber;
}
void findWinner(int playersNUmber, int computerChoice) {
	if (playersNUmber == computerChoice) {
		cout << "You win, you guessed right!" << endl;
	}
	else {
		cout << "You lose, you guessed wrong!" << endl;
	}
}

class easyGame{
public:

int playersnumber;
int computernumber;

	easyGame(int playersNumber, int computerNumber) {
		playersnumber = playersNumber;
		computernumber = computerNumber;
	}
	
void getPlayersNumber() {
	cout << "The player guessed: " << playersnumber << endl;
}
void getcomputernumber() {
	cout << "The computer guessed: " << computernumber << endl;
}
void getResults() {
	cout << "The player guessed: " << playersnumber << endl;
	cout << "The computer guessed: " << computernumber << endl;
	findWinner(playersnumber, computernumber);
}
};
class mediumGame {
public:

	int playersnumber;
	int computernumber;

	mediumGame(int playersNumber, const int computerNumber) {
		playersnumber = playersNumber;
		computernumber = computerNumber;
	}

	void getPlayersNumber() {
		cout << "The player guessed: " << playersnumber << endl;
	}
	void getcomputernumber() {
		cout << "The computer guessed: " << computernumber << endl;
	}
	void getResults() {
		cout << "The player guessed: " << playersnumber << endl;
		cout << "The computer guessed: " << computernumber << endl;
		findWinner(playersnumber, computernumber);
	}
};
class hardGame {
public:

	int playersnumber;
	int computernumber;

	hardGame(int playersNumber, const int& computerNumber) {
		playersnumber = playersNumber;
		computernumber = computerNumber;
	}
	
	void getPlayersNumber() {
		cout << "The player guessed: " << playersnumber << endl;
	}
	void getcomputernumber() {
		cout << "The computer guessed: " << computernumber << endl;
	}
	void getResults() {
		cout << "The player guessed: " << playersnumber << endl;
		cout << "The computer guessed: " << computernumber << endl;
		findWinner(playersnumber, computernumber);
	}
};

int main() {
	string dificultyLevel;
	int computerChoice;
	cout << "Please choose the difficulty number:/n" << endl;
	cout << "Easy/n" << endl;
	cout << "Medium/n" << endl;
	cout << "Hard" << endl;
	cin >> dificultyLevel;

	if (dificultyLevel =="Easy" ){
		srand(time(0));
	computerChoice = rand() % 3 + 1;
}
	else if (dificultyLevel == "Medium") {
	srand(time(0));
	computerChoice = rand() % 10 + 1;
	}
	else if (dificultyLevel == "Hard") {
	srand(time(0));
	computerChoice = rand() % 100 + 1;
	}
	cout << "Please guess a number:" << endl;

	mediumGame easyGame1(playerNum(), computerChoice);
	easyGame1.getResults();


	return 0;
}
