#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 100; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 2; i <= 100; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 2; i <= 100; i++) {
        int isPrime = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
