#include<stdio.h>
int fibonacci_recursive(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int fibonacci_iterative(int n) {
    int a = 0, b = 1, c, i; 
    if (n == 0) return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

main() {
    int n;

    printf("Enter the term (N): ");
    scanf("%d", &n);

    printf("Nth Fibonacci (Iterative): %d\n", fibonacci_iterative(n));
    printf("Nth Fibonacci (Recursive): %d\n", fibonacci_recursive(n));

}

