/*
2. Faça um programa que leia dois valores inteiros e 
chame uma função que receba esses dois valores por passagem 
por referência. A função deve reorganizar os valores de forma
que a primeira variável passe a conter o maior dos dois valores,
e a segunda variável, o menor. Em seguida, no programa principal,
exiba na tela o conteúdo atualizado das duas variáveis.
*/
#include <stdio.h>
#include <stdlib.h>



void func(int *a, int *b){
    int x;

    x = *a;
    *a = *b;
    *b = x;
   
}

int main()
{
    int *a, *b;
    
    scanf("%d", a);
    scanf("%d", b);

    func(a, b);

    printf("\n\n%d\n%d", *a, *b);

    return 0;
}
