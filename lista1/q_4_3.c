#include <stdio.h>

long fatorial(int n) {
    long res = 1;

    for (int i = 1; i <= n; i++) {
        res *= i;
    }

    return res;
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Fatorial de %d = %ld\n", n, fatorial(n));

    return 0;
}