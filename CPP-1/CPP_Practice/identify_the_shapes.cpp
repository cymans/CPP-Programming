#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

//Function prototypes for generating the shapes, calculate score, play game and menu.
void generateSquare();
void generateTriangle();
void generateRectangle(int, int);
int calculateScore(int);
void playGame();
void mainMenu();
int score{}; //Global variable for storing player's score

int main() {

	cout << " Welcome to play Identify the Shapes\n";
	cout << " -----------------------------------\n";
	cout << " You get 10 points for correct answer\n";
	cout << " ------------------------------------\n";
	mainMenu();

	return 0;
}
//Below are all function definitions of the prototypes.
void mainMenu() {
	int choice{};
	do {
		cout << "\n Main Menu\n";
		cout << " 1- Play\n";
		cout << " 2- Final Score\n";
		cout << " 3- Exit\n";
		cout << " Select option: ";
		cin >> choice;
		cout << "\n";

		switch (choice) {
		case 1:
			playGame();
			break;
		case 2:
			cout << " Total Score: " << score << "\n";
			break;
		case 3:
			cout << " Thanks for playing!\n";
			break;
		default:
			cout << " Invalid option.\n";
		}

	} while (choice != 3);
}

void playGame() {
	srand(time(0));
	int showShapes = (rand() % 3) + 1;

	switch (showShapes) {
	case 1:
		generateSquare();
		break;
	case 2:
		generateTriangle();
		break;
	case 3:
		generateRectangle(4, 7); //Passing height and width as arguments.
		break;
	}

	int selectShape;
	cout << "\n What is the shape above?\n";
	cout << " 1- Square\n";
	cout << " 2- Triangle\n";
	cout << " 3- Rectangle\n";
	cout << " 4- None of the above\n";
	cout << " Select number: ";
	cin >> selectShape;

	if (selectShape == showShapes) {
		cout << "\n That's correct!\n";
		calculateScore(selectShape);
	}
	else
		cout << "\n That's wrong.\n";
}

int calculateScore(int answer) {
	if (answer)
		score += 10;
	return score;
}

void generateRectangle(int height, int width) {
	for (int h = 0; h < height; h++) {
		for (int w = 0; w < width; w++) {
			cout << setw(2) << "*";
		}
		cout << "\n";
	}
}

void generateTriangle() {
	int height = 4;
	for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= i; j++) {
			cout << setw(2) << "*";
		}
		cout << "\n";
	}
}

void generateSquare() {
	int height = 4;
	int width = 4;
	for (int h = 0; h < height; h++) {
		for (int w = 0; w < width; w++) {
			cout << setw(2) << "*";
		}
		cout << "\n";
	}
}