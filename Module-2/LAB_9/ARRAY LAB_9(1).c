#include <stdio.h>
main() {
    int i, sum = 0, maximum;
    int a[5];

    for (i = 0; i < 5; i++) {
        printf("\nEnter a[%d]: ", i);
        scanf("%d", &a[i]);
        sum += a[i];

        if (i == 0)
            maximum = a[i];  // Initialize maximum to the first element
        else if (maximum < a[i])
            maximum = a[i];
    }

    for (i = 0; i < 5; i++) {
        printf("\na[%d] = %d", i, a[i]);
    }

    printf("\nSum Of All Array Elements = %d", sum);
    printf("\nMaximum Element In Array = %d\n", maximum);

}
