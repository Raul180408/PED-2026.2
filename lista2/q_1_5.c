#include <stdio.h>

int somadig(int n){
    if (n/10 == 0) return n%10;
    else return n%10 + somadig(n/10);
}

int main() {
    printf("a soma dos dígitos de 987654 é %d", somadig(987654));
    return 0;
}
/*
ex: 987

    987%10 + somadig(98) = 8 + 9 + 7 = 24
    98%10 + somadig(9) = 8 + 9
    somagig(9) = 9
*/