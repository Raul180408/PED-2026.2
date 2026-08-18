/*
3.1. Contagem de 1 a N
Leia um número inteiro N e imprima todos os números de 1 até N.
*/
#include <stdio.h>

int main(){
    int n;
    printf("n: ");
    scanf("%d", &n);
    for (int i =1; i <= n; i++){
        
        printf("%d \n", i);
    }

    return 0;
}