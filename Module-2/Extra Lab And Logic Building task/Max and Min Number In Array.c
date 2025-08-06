#include<stdio.h>  
main() { 
    int array[10]; 
    int i, max, min; 
 
    printf("Enter 10 Numbers:\n"); 
    for (i = 0; i < 10; i++) { 
        scanf("%d", &array[i]); 
    } 
    max = min = array[0]; 
 
    for (i = 1; i < 10; i++) { 
        if (array[i] > max) { 
            max = array[i]; 
        } 
        if (array[i] < min) { 
            min = array[i]; 
        } 
    } 
  
    printf("Maximum number: %d\n", max); 
    printf("Minimum number: %d\n", min); 
 
} 

