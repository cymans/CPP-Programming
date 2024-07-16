#include <iostream>

using namespace std;

//Defined a structure to manage the data.
struct Expenses {
    string date;
    double transportCost;
    double mealCost;
    double entertainmentCost;
    double others;

    //Constructor to initialize the members.
    Expenses() : date{}, transportCost{}, mealCost{}, 
                 entertainmentCost{}, others{} {}
};
//Function for inputting expenses
void inputExpenses(Expenses& expenses) { 
    cout << "Enter date (DD-MM-YYYY): ";
    cin >> expenses.date;
    cout << "Enter transport cost: $";
    cin >> expenses.transportCost;
    cout << "Enter meal cost: $";
    cin >> expenses.mealCost;
    cout << "Enter entertainment cost: $";
    cin >> expenses.entertainmentCost;
    cout << "Enter others: $";
    cin >> expenses.others;
}
//Function for calculating the expenses for the day
double totalDayExpenses(Expenses& expenses) { 
    return expenses.transportCost + expenses.mealCost + 
           expenses.entertainmentCost + expenses.others;
}
//Function for displaying daily expenses
void displayDayExpenses(Expenses& expenses) { 
    cout << "Date: " << expenses.date << "\n";
    cout << "Transport Cost: $" << expenses.transportCost << "\n";
    cout << "Meal Cost: $" << expenses.mealCost << "\n";
    cout << "Entertainment cost: $" << expenses.entertainmentCost << "\n";
    cout << "Others: $" << expenses.others << "\n";
    cout << "Daily Expenses Total: $" << totalDayExpenses(expenses) << "\n"; 
}

int main() {

    const int day = 3;
    Expenses expenses[day];
    
    int choice{};
    do {
        cout << "\nPersonal Expenses Tracking System\n";
        cout << "---------------------------------\n";
        cout << "1- Log Daily Expenses\n";
        cout << "2- View Daily Expenses\n";
        cout << "3- View Weekly Expenses\n";
        cout << "4- Exit\n";
        cout << "Select option: ";
        cin >> choice; 

        switch (choice) {
            case 1:
                for (int i = 0; i < day; i++) {
                    cout << "\nEnter day " << i + 1 << " expenses.\n";
                    inputExpenses(expenses[i]);
                }
                break;

            case 2:
                cout << "\nDaily Expenses Report:\n";
                for (int i = 0; i < day; i++) {
                    cout << "\nDay " << i + 1 << " expenses. \n";
                    displayDayExpenses(expenses[i]); 
                }
                break;
            case 3: {
                double weeklyTotal = {};
                cout << "\nWeekly Expenses Report:\n";
                for (int i = 0; i < day; i++) {
                    cout << "\nDay " << i + 1 << " expenses: \n";
                    displayDayExpenses(expenses[i]);    
                    weeklyTotal += totalDayExpenses(expenses[i]); 
                }
                cout << "\nWeekly Expenses Total: $" << weeklyTotal << "\n"; 
                break;
            }
            case 4:
                cout << "\nGoodbye!\n";
                break;
            default:
                cout << "\nInvalid option.\n";
                break;
            }
    } while (choice != 4);

    return 0;
}