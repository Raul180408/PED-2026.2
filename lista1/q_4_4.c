#include <stdio.h>

#define TRUE 1
#define FALSE 0

int isPrimo(int n) {
    if (n < 2) {
        return FALSE;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return FALSE;
        }
    }

    return TRUE;
}

int main() {
    printf("Numeros primos entre 1 e 100:\n");

    for (int i = 1; i <= 100; i++) {
        if (isPrimo(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}