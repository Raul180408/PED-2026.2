#include <stdio.h>

void maior(int a, int b, int c){
    if (a>b && a>c){
        printf("o maior é %d", a);
    }
    else if (b > a && b>c){
        printf("o maior é %d", b);
    }
    else if (c > a && c> b){
        printf("o maior é %d", c);
    }
    else{
        printf("são iguais");
    }
}

int main() {
    int a, b, c, res;

    printf("Digite o 1º número: ");
    scanf("%d", &a);

    printf("Digite o 2º número: ");
    scanf("%d", &b);

    printf("Digite o 3º número: ");
    scanf("%d", &c);

    maior(a, b, c);

    return 0;
}