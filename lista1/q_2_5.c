/*
2.5. Nome do mês
Leia um número de 1 a 12 e imprima o nome do mês correspondente usando switch. Se o número for inválido, imprima uma mensagem de erro.
*/
#include <stdio.h>

int main(){
    int mes = 0;
    
    while(1){
        printf("Digite um mês (número): ");
        scanf("%d", &mes);
        if (mes < 0 || mes > 12){
            printf("inválido");
        }
        else{
            break;
        }
    }

    switch (mes){
        case 1: 
            printf("Janeiro");
        
        case 2:
            printf("Fevereiro");

        case 3:
            printf("Março");

        case 4:
            printf("Abril");

        case 5:
            printf("Maio");

        case 6:
            printf("Junho");

        case 7:
            printf("Julho");

        case 8:
            printf("Agosto");

        case 9:
            printf("Setembro");

        case 10:
            printf("Outubro");

        case 11:
            printf("Novembro");

        case 12:
            printf("Dezembro");
    }

    return 0;
}