#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("Choose: 1 for Binary to Decimal, 2 for Decimal to Binary: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int binary, decimal = 0, temp, i = 0;
        printf("Enter binary number: ");
        scanf("%d", &binary);
        temp = binary;

        while (temp != 0) {
            decimal = decimal + (temp % 10) * pow(2, i);
            temp = temp / 10;
            i++;
        }
        printf("Decimal: %d\n", decimal);
    } else if (choice == 2) {
        int decimal, binary = 0, remainder, place = 1;
        printf("Enter decimal number: ");
        scanf("%d", &decimal);

        while (decimal != 0) {
            remainder = decimal % 2;
            binary = binary + remainder * place;
            decimal = decimal / 2;
            place = place * 10;
        }
        printf("Binary: %d\n", binary);
    } else {
        printf("Invalid choice.\n");
    }
    return 0;
}