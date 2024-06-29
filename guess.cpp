#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));
    int N = rand() % 100 + 1; 
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Guess the number between 1 and 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < N) {
            cout << "Too low! Try again." << endl;
        } else if (guess > N) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number " << N << "!" << endl;
            cout << "Number of attempts: " << attempts << endl;
        }
    } while (guess != N);

    return 0;
}
