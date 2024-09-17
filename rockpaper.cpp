#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    
    string choices[3] = {"Rock", "Paper", "Scissors"};
    int playerChoice, computerChoice;

    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Enter 0 for Rock, 1 for Paper, 2 for Scissors: ";
    cin >> playerChoice;

    computerChoice = rand() % 3;

    cout << "You chose: " << choices[playerChoice] << endl;
    cout << "Computer chose: " << choices[computerChoice] << endl;

    if (playerChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((playerChoice == 0 && computerChoice == 2) ||
               (playerChoice == 1 && computerChoice == 0) ||
               (playerChoice == 2 && computerChoice == 1)) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }

    return 0;
}
HACK ING IJARHEGEE ''