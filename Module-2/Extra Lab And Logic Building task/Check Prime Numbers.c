#include <stdio.h>
main(){
    int i, j, n, isPrime;
    printf("Enter Number : ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d:\n", n);
    for (i = 2; i <= n; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    printf("\n");
}

