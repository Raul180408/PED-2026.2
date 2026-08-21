/*1.7. Troca de valores com variável auxiliar
Leia dois números inteiros A e B e imprima os valores trocados entre si, utilizando uma terceira variável para realizar a troca.*/
#include <stdio.h>

int main(){

    int a, b, c;

    printf("Digite um número a: ");
    scanf("%d", &a);
    printf("Digite um número b: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("a: %d, b: %d", a, b);

    return 0;
}