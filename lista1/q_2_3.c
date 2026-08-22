/*
2.3. Maior de três números
Leia três números e imprima o maior deles.
*/
#include <stdio.h>

int maior(int a, int b, int c){
    if (a>b && a>c){
        return a;
    }
    else if (b>a&&b>c){
        return b;
    }
    else if (c>a && c>b){
        return c;
    }
    else {
        return 0;
    }
}

int main() {
    int a, b, c;
    
    printf("Digite o 1º número: ");
    scanf("%d", &a);
    printf("Digite o 2º número: ");
    scanf("%d", &b);
    printf("Digite o 3º número: ");
    scanf("%d", &c);

    if (maior(a, b, c) == 0){
        printf("os numeros digitados são iguais");
    }
    else {
        printf("O maior número digitado é %d", maior(a, b, c));
    }
    
    return 0;
}