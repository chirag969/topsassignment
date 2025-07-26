#include <stdio.h>
#include <string.h>

int main(){
    char str[100], rev[100], tmp;
    printf("Enter string: ");
    scanf("%s", str);
    strcpy(rev, str);

    int begin = 0, end = strlen(str) - 1;
    while (begin < end) {
        tmp = str[begin];
        str[begin++] = str[end];
        str[end--] = tmp;
    }
    printf("Reversed: %s\n", str);
    if (strcmp(rev, str) == 0)
        printf("%s is palindrome!\n", rev);
    else
        printf("%s is not palindrome.\n", rev);
    
}

