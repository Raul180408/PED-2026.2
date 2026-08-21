#include <stdio.h>

int isCapicua(int n) {
    int original = n;
    int invertido = 0;

    while (n > 0) {
        invertido = invertido * 10 + n % 10;
        n /= 10;
    }

    if (original == invertido) {
        return 1;
    }

    return 0;
}

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("%d\n", isCapicua(n));

    return 0;
}