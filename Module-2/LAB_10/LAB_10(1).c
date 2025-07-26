#include <stdio.h>
main() {
    int num;
    int *ptr; // Declare a pointer to int
    printf("Enter The Number:  ");
    scanf("%d",&num);
    
    ptr = &num; // Assign the address of num to the pointer
    printf("Original Value Of Number: %d\n", num);

     *ptr=20;
	 // Modify the value of num using the pointer

    printf("Modified Value Of Number: %d\n",num);
    printf("Value Using Pointer: %d\n", *ptr); // Print value through pointer
    printf("Address Of Number: %p\n", &num);
    printf("Pointer ptr Holds Address: %p\n", ptr);

}

