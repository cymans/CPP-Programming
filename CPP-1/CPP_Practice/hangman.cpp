#include <iostream>
#include "Sample.cpp"
#include "myfunctions.h"

using namespace std;

//Function to draw the line.
void drawLine() {
	cout << "------------------------------------\n";
}

//Function to draw the hangman.
void hangman() {
	cout << " _______\n";
	cout << " |     |\n";
	cout << " |     0\n";
	cout << " |    \\|/\n";
	cout << " |     | \n";
	cout << " |    / \\\n";
	cout << " |\n";
	cout << "===\n";
}

//Function to draw the inverted man with parameter and return type.
int invertedMan(int attempts) {
	if (attempts == 0) {
		cout << " _______\n";
		cout << " |     |\n";
		cout << " |    /|\\\n";
		cout << " |     |\n";
		cout << " |    /|\\\n";
		cout << " |     0\n";
		cout << " |\n";
		cout << "===\n";
		cout << "\nGame over!\n"; //Message for losing.
		
	}
	return attempts;
}

//Function to draw the walkman.
void walkman() {
	cout << "\n";
	cout << " 0\n";
	cout << "\\|/\n";
	cout << " | \n";
	cout << "/ \\\n";
	cout << "\nYou guessed them all. Congratulations!\n "; //Message for winning.
}

//Function to play the game with parameter.
void playGame(string word) {

	// sayName();

	string displayWord = word;

	for (int i = 0; i < word.length(); i++)
		displayWord[i] = '*';  //To cover the unguessed letters.

	char guess;
	int attempts = 3;

	while (attempts > 0) {
		cout << "Guess the missing letters: " << displayWord << " : ";
		cin >> guess;

		bool rightGuess = false;
		for (int i = 0; i < word.length(); i++) {
			if (word[i] == guess) {
				displayWord[i] = guess;
				rightGuess = true;
			}
		}

		if (!rightGuess) {
			attempts--;
			cout << "\nWrong guess. " << attempts << " Attempts left.\n";
		}

		if (attempts == invertedMan(attempts));

		if (string(displayWord.begin(), displayWord.end()) == word) {
			walkman();
			cout << "The word is: " << displayWord << endl;
			cout << "Thank you for playing!\n";
			break;
		}
	}
}

int main() {

	drawLine();
	cout << " Welcome to play Hangman. Goodluck!\n";
	hangman();
	drawLine();
	playGame("technology"); //Passing secret word as argument.

	return 0;
}
