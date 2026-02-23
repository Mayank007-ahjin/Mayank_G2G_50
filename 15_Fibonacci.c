#include <stdio.h>

int main() {
    int a = 0, b = 1, c, n;

    scanf("%d", &n);

    if(n < 0) {
        printf("Series not exist");
    } else if (n == 1) {
        printf("%d", a);
    } else if (n == 2) {
        printf("%d %d", a, b);
    } else {
        printf("%d %d", a, b);
        for (int i = 1; i <= n - 2; i++) {
            c = a + b;
            printf(" %d", c);
            a = b;
            b = c;
        }
    }

    return 0;
}