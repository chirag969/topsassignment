#include <stdio.h>
main() {
    int n, i,sum=0;

    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    int array[n]; 

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    float average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

}

