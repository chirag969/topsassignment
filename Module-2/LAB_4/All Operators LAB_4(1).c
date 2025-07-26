#include<stdio.h>
main() {
 int a,b;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);

    // Arithmetic operations
    printf("\t Arithmetic Operators \n");
    
    printf("\n Addition (a + b)       = %d\n", a + b);
    printf("Subtraction (a - b)    = %d\n", a - b);
    printf("Multiplication (a * b) = %d\n", a * b);
    if (b != 0) {
        printf("Division (a / b)       = %d\n", a / b);
        printf("Modulus (a %% b)        = %d\n", a % b);
    } else {
        printf("Division and modulus by zero are allowed.\n");
    }

    // Relational operations
    printf("\t Relational Operators \n");
    
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // Logical operations
    printf("\t Logical Operators \n");
    
    printf("(a && b): %d\n", (a && b));
    printf("(a || b): %d\n", (a || b));
    printf("!(a): %d\n", !a);
    printf("!(b): %d\n", !b);
}


