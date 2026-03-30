#include <stdio.h>

int main() {
    int num, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }

    printf("Sum of digits of %d is %d\n", num, sum);
    return 0;
}