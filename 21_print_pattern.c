#include <stdio.h>

int main() {
    int n = 5, i, j, num;

    for (i = 0; i < n; i++) {
        num = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);  // formula for Pascal's triangle
        }
        printf("\n");
    }
    return 0;
}