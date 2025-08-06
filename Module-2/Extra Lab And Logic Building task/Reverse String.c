#include <stdio.h>
void reverseString(char str[]) {
    int i, length = 0;
    while (str[length] != '\0') length++;
    for (i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
}

main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Reversed string: ");
    reverseString(str);
    
}

