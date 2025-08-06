#include <stdio.h>
main() {
    int a[2][2], b[2][2], sum[2][2];
    printf("Enter elements of 1st matrix:\n");
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < 2; i++)
        for ( j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    printf("Sum Of The Both Matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

}

