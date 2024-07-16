#include <iostream>

using namespace std;

//Define enum for players positions
enum Position {
    goalkeeper,
    midfielder,
    striker,
    winger,
    defender
};
//Define structure for soccer player
struct Soccer {
    int playerNumber;
    float playerTopSpeed;
    Position playerPosition;
};
//Function to convert Position enum to string name
string nameOfPosition(Position positionName) {
    switch (positionName) {
        case goalkeeper:
            return "Goalkeeper";
        case midfielder:
            return "Midfielder";
        case striker:
            return "Striker";
        case winger:
            return "Winger";
        case defender:
            return "Defender";
        default:
            return "Unknown";
    }
}
//Function to convert character input to Position enum
Position inputPosition(char positionInput) {
    switch (positionInput) {
        case 'g':
            return goalkeeper;
        case 'm':
            return midfielder;
        case 's':
            return striker;
        case 'w':
            return winger;
        case 'd':
            return defender;
        default:
            return goalkeeper; 
    }
}

int main() {
    //To input information for players 1 and 2
    Soccer player1{};
    cout << "Enter information for Player 1." << endl;
    cout << "Player Number: ";
    cin >> player1.playerNumber;

    cout << "Player's Top Speed (Mph): ";
    cin >> player1.playerTopSpeed;

    char input1; 
    cout << "Player's Position (g/m/s/w/d): ";
    cin >> input1;
    player1.playerPosition = inputPosition(input1);

    Soccer player2{};
    cout << "\nEnter information for Player 2." << endl;
    cout << "Player Number: ";
    cin >> player2.playerNumber;

    cout << "Player's Top Speed (Mph): ";
    cin >> player2.playerTopSpeed;

    char input2; 
    cout << "Player's Position (g/m/s/w/d): ";
    cin >> input2;
    player2.playerPosition = inputPosition(input2);
    
    //Display information for players 1 and 2
    cout << "\n\nPlayer 1 information:" << endl;
    cout << "Player: " << player1.playerNumber << endl;
    cout << "Speed: " << player1.playerTopSpeed << "Mph " << endl;
    cout << "Position: " << nameOfPosition(player1.playerPosition);

    cout << "\n\nPlayer 2 information:" << endl;
    cout << "Player: " << player2.playerNumber << endl;
    cout << "Speed: " << player2.playerTopSpeed << "Mph " << endl;
    cout << "Position: " << nameOfPosition(player2.playerPosition) << endl;

    return 0;
}