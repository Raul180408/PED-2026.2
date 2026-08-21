#include <stdio.h>

int maior(int a, int b, int c){
    if (a>b && a>c){
        return a;
    }
    else if (b > a && b>c){
        return b;
    }
    else if (c > a && c> b){
        return c;
    }
    else{
        return 0;
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

    res = maior(a, b, c);
    if (!res){
        printf("são iguais");
    }
    else{
        printf("%d é o maior", res);
    }

    return 0;
}