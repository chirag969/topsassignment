#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1)   // base case
        return 1;
    else
        return n * factorial(n - 1);  // recursive case
}

main() {
    int num;
    printf("Enter The Number: ");
    scanf("%d",&num);
    
    printf("Factorial of %d is %d", num, factorial(num));  
}


