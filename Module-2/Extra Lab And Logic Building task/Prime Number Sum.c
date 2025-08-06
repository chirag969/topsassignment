#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int N, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    printf("Prime numbers up to %d are:\n", N);
    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nSum of all prime numbers up to %d is: %d\n", N, sum);

    return 0; // Good practice
}

