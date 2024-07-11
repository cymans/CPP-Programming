#include <iostream>

using namespace std;

int main()
{
	int startingNumber = 0;
	int finalNumber = 0;

	// Input for starting number and final number. "While loop" was used so 
	// program won't terminate if starting number is smaller than final number.
	while (startingNumber >= finalNumber) {		
		cout << "Enter starting number: ";		 
		cin >> startingNumber;					
												
		cout << "Enter final number: ";
		cin >> finalNumber;
		if (startingNumber >= finalNumber)
			cout << "\nPlease enter a smaller number for the starting number.\n\n";
	}

	cout << "\nNumbers divisible by 7 from " << startingNumber << " to " << finalNumber << "\n"
			<<"************************************\n";

	// For generating a list of numbers that are divisible by 7.
	int counter;			
	for (counter = startingNumber; counter <= finalNumber; counter++){	
		if (counter % 7 == 0)
			cout << counter << ", ";
	}
	
	return 0;
}