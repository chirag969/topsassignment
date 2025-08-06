#include <stdio.h>
main(){
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, specials = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
	for ( i=0; str[i]!='\0'; i++) {
        char ch = str[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if (ch != '\n') {
            specials++;
        }
    }
    printf("\nVowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specials);

}

