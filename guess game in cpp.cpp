#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator with current time

    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int tries = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100. Try to guess it!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << tries << " tries." << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    } while (true);

    return 0;
}
