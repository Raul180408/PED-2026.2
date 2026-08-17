/*
2.6. Ano bissexto
Leia um ano e determine se ele é bissexto, considerando as regras: divisível por 4 e não por 100, ou divisível por 400.
*/
#include <stdio.h>

int main(){
    int ano;
    printf("Informe o ano: ");
    scanf("%d", &ano);
    if ((ano%4 == 0 && ano%100 != 0)|| ano%400 == 0){
        printf("O ano é bissexto.");
    }
    else{
        printf("O ano não é bissexto?");
    }

    return 0;
}