#include <stdio.h>
main(){
    int i, sum, num, count = 0;
    printf(
        "All Armstrong Number between 1 To 1000 Are:\n");
    for (i = 1; i <= 1000; i++) {
        num = i;

        while (num != 0) { num /= 10;
            count++;
        }
        num = i;
        sum = pow(num % 10, count) + pow((num % 100 - num % 10) / 10, count) + pow((num % 1000 - num % 100) / 100, count);
 
        if (sum == i) {
            printf("%d ", i);
        }
        count = 0;
    }
}
