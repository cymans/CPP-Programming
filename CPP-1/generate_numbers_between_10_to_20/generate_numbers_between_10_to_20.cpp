#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function for generating a random number.
int numberGenerator() {		
	return (rand() % 10) + 11;
}

int main()
{	
	// Random seed initialized.
	srand(time(0));
	
	int randomNumbers[6] = {};
	int oddNumbers = 0;
	int evenNumbers = 0;
	int counter;
	
	
	cout << "Random numbers between 10 to 20" <<
		"\n*******************************\n\n";
		
		
	// To generate and print the random numbers.
	for (counter = 0; counter < 6; counter++) {
		randomNumbers[counter] = numberGenerator();
		cout << randomNumbers[counter]<<",";
	}

	// To generate odd and even numbers.
	for (counter = 0; counter < 6; counter++) {
		if (randomNumbers[counter] % 2 == 0) {
			evenNumbers++;
		}
		else {
			oddNumbers++;
		}
	}

	cout << "\n\nNumber of even Numbers in the list: " << evenNumbers << endl;
	cout << "Number of odd Numbers in the list: " << oddNumbers << endl;
		
	return 0;
}