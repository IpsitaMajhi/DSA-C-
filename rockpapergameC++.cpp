#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed for the random number generator
    char choice;
    int playerChoice, computerChoice;
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        cout << "Enter your choice (R for Rock, P for Paper, S for Scissors): ";
        cin >> choice;

        // Convert the player's choice to an integer for comparison
        switch (choice) {
            case 'r':
            case 'R':
                playerChoice = 0; // Rock
                break;
            case 'p':
            case 'P':
                playerChoice = 1; // Paper
                break;
            case 's':
            case 'S':
                playerChoice = 2; // Scissors
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                continue; // Restart the game loop
        }

        // Generate computer's choice
        computerChoice = rand() % 3; // Generates a random number between 0 and 2

        // Determine the winner
        if ((playerChoice == 0 && computerChoice == 2) ||
            (playerChoice == 1 && computerChoice == 0) ||
            (playerChoice == 2 && computerChoice == 1)) {
            cout << "You win!" << endl;
        } else if (playerChoice == computerChoice) {
            cout << "It's a draw!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }

        cout << "Do you want to play again? (Y/N): ";
        cin >> playAgain;
    }

    return 0;
}
