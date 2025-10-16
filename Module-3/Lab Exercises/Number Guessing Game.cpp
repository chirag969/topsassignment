#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;
main() {
    int random, guess;
    int no_of_guess = 0;

    // Initialize random number generator
    srand(time(0));
    random = rand() % 100 + 1;

    cout << "Welcome to the World of Guessing Numbers!" << endl;

    do {
        cout << "\nPlease enter your guess between (1 to 100): ";
        cin >> guess;

        no_of_guess++;

        if (guess < random) {
            cout << "Guess a larger number." << endl;
        } else if (guess > random) {
            cout << "Guess a smaller number." << endl;
        } else {
            cout << "Congratulations!!! You have successfully guessed the number in "
                 << no_of_guess << " attempts." << endl;
        }

    } while (guess != random);
}

