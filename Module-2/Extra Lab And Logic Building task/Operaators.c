#include<stdio.h>
main(){
	// simple calculator
	char operator;
	float num1, num2, result;
	
	printf("Enter num 1: ");
    scanf("%f", &num1);

    printf("Enter operator : ");
    scanf(" %c", &operator);  

    printf("Enter num 2: ");
    scanf("%f", &num2);
	// Using Conditional Operator 
	//(condition)?():();
	result = (operator == '+') ? (num1+num2):
		     (operator == '-') ? (num1-num2):
			 (operator == '*') ? (num1*num2):
		     (operator == '/' && num2 != 0) ? (num1 / num2) :
             0;
     (operator == '/' && num2 == 0) ? 
        printf("Error: Cannot divide by zero.\n") : 
        printf("Result: %f\n", result);
    
}
