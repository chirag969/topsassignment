//Convert array into asce and dec order
#include <stdio.h>
#include <string.h>

main() {
    char str[100];
    int ascii[100], i, j, temp;
    
    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    // Convert characters to ASCII values
    for(i = 0; i < len; i++) {
        ascii[i] = (int)str[i];
    }

    // Sort ASCII values in descending order
    for(i = 0; i < len - 1; i++) {
        for(j = i + 1; j < len; j++) {
            if(ascii[i] < ascii[j]) {
                temp = ascii[i];
                ascii[i] = ascii[j];
                ascii[j] = temp;
            }
        }
    }

    // Print the sorted ASCII values and characters
    printf("\nSorted ASCII values (descending):\n");
    for(i = 0; i < len; i++) {
        printf("%d ", ascii[i]);
    }

    printf("\nCorresponding characters:\n");
    for(i = 0; i < len; i++) {
        printf("%c ", ascii[i]);
    }

}

