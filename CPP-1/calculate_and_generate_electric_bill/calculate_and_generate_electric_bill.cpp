#include <iostream>


using namespace std;

int main()
{
	cout << " Auckland Power - Customer's Electricity Bill Generator\n\n"
		 <<" ******************************************************\n\n";

	// Input for customer details
	string customerName;
	cout << " Enter Customer Name: ";
	cin >> customerName;

	int customerNumber;
	cout << " Enter Customer Number: ";
	cin >> customerNumber;

	int units;
	cout << " Enter Consumed Units: ";
	cin >> units;

	// Calculating the units consumed
	double amount = (units - 300) * 1 + (100 * 0.80) + (100 * 0.50) + 100 * 0.30;

	// Displaying the bill
	cout << "\n\n Auckland Power - Customer Bill\n\n"
		<< " *******************************\n\n"
		<< "\n Customer Name: " << customerName << "\n"
		<< "\n Customer Number: " << customerNumber << "\n"
		<< "\n Units Consumed: " << units << "\n"
		<< "\n Amount: $" << amount << "\n"
		<< "\n *******************************\n";

	return 0;
}