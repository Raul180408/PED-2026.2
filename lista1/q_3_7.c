#include <stdio.h>
/*
3.7. Média com condição dinâmica de parada
Leia números inteiros repetidamente até que o usuário
 digite -1 (valor que não deve entrar na conta). 
 Ao final, imprima quantos números foram lidos e a média deles.
*/
int main() {
    int x, n=0, m=0;
    double media;
    while(1){
        printf("digite um número para acumular na média ou '-1' para encerrar: ");
        scanf("%d",&x);
        if (x==-1){
            media = m/n;
            printf("\na média entre os %d números digitados é %f\n", n, media);
            break;
        }
        n += 1;
        m += x;
        
    }
    return 0;
}