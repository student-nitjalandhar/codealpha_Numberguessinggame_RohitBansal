#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a number between 1 and 100.\n";
    cout << "Try to guess it!\n";

    // Loop until the player guesses the correct number
    while (guess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > randomNumber) {
            cout << "Too high!\n";
        } else if (guess < randomNumber) {
            cout << "Too low!\n";
        } else {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        }
    }

    return 0;
}

