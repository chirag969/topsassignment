#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random, guess;
    int no_of_guess = 0;

    srand(time(0));
    random = rand() % 100 + 1;

    printf("Welcome to the World of Guessing Numbers!\n");

    do {
        printf("\nPlease enter your guess between (1 to 100): ");
        scanf("%d", &guess);

        no_of_guess++; 
        if (guess < random) {
            printf("Guess a larger number.\n");
        } else if (guess > random) {
            printf("Guess a smaller number.\n");
        } else {
            printf("Congratulations!!! You have successfully guessed the number in %d attempts.\n", no_of_guess);
        }

    } while (guess != random);

}

