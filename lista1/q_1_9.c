 
#include <stdio.h>

int main(){
    int valor, valori, troco100, troco50, troco20, troco10, troco5, troco2, troco1;
    
    printf("Digite o valor: ");
    scanf("%d", &valor);
    
    valori = valor;
    troco100 = valor/100;
    valor = valor%100;
    troco50 = valor/50;
    valor = valor%50;
    troco20 = valor/20;
    valor = valor%20;
    troco10 = valor/10;
    valor = valor%10;
    troco5 = valor/5;
    valor = valor%5;
    troco2 = valor/2;
    valor = valor%2;
    troco1 = valor/1;
    valor = valor%1;
    
    printf("\nValor: R$%d", valori);
    printf("\nnota de 100: %d", troco100);
    printf("\nnota de 50: %d", troco50);
    printf("\nnota de 20: %d", troco20);
    printf("\nnota de 10: %d", troco10);
    printf("\nnota de 5: %d", troco5);
    printf("\nnota de 2: %d", troco2);
    printf("\nnota de 1: %d", troco1);
    
    return 0;
}