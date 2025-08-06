#include <stdio.h>
main() {
    int num, start, end, i;
    printf("Enter The Number To Multiply: ");
    scanf("%d", &num);
    
    printf("Enter The start Number: ");
    scanf("%d", &start);
    
    printf("Enter The End Number: ");
    scanf("%d",&end);

    for (i = start; i <= end; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}                                    

