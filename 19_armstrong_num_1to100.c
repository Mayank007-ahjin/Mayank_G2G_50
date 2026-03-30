#include <stdio.h>
#include <math.h>

int main() {
    int num, sum, temp, digit;

    printf("Armstrong numbers from 1 to 100 are: \n");
    for (num = 1; num <= 100; num++) {
        sum = 0;
        temp = num;

        while (temp != 0) {
            digit = temp % 10;
            sum = sum + digit * digit * digit;
            temp = temp / 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}