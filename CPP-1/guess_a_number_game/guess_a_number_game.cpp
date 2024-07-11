#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{	
	// Title and game info. Used setw function for indentation.

	cout << setw (35) << "Guess The Number Game\n"
		<< setw (36) << "*********************\n\n"
		<< "You will get three chances to guess the number.\n\n"
		<< "Guess a number between 1 to 10.\n\n";

	//Random seed initialized
	srand(time(0));

	int secretNumber = (rand() % 10) + 1; // Random number generator.
	int usersGuess = 0;
	int chanceCounter = 0;
	int chance = 3;

	// Generating the game and printing user input, guess numbers, etc.
	while (usersGuess != secretNumber && chanceCounter < chance) {
		cout << "\nGuess no. " << chanceCounter +1<< ". " << " Enter number: ";
		cin >> usersGuess;
		chanceCounter++;
		
		if (usersGuess != secretNumber && chanceCounter < chance)
			cout << "\nSorry wrong guess... try again.\n";
		
		else if (usersGuess != secretNumber && chanceCounter <= chance)
			cout << "\nSorry wrong guess... You've reached the limit.\n"
				<< "\nThe number is: " << secretNumber << endl;
		
		else {
			cout << "\nYou won... Well done!\n";
		}
	}
		
	return 0;
}