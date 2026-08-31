#include <stdio.h>

int contadig(int n){
    if (n/10 == 0) return 1;
    else return 1 + contadig(n/10);
}

int main() {
    printf(" o número 987654 tem %d dígitos", contadig(987654));

    return 0;
}
/*
ex: 987

    1 + contadig(98) = 1 + 1 + 1 = 3
    1 + contadig(9) = 1 + 1
    contadig(9) = 1
*/