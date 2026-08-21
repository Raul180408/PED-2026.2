/*
Escreva um programa para calcular quanto vai custar a viagem da Giselda. Peça para ela: 
    Quantos quilômetros seu carro percorre por litro de combustível

    Quantos quilômetros ela pretende viajar de carro.

    Qual o valor do combustível no posto onde ela abastece

    Quantas pessoas vão viajar com ela e dividir a conta

    Com as informações acima, calcule quanto dinheiro cada pessoa terá que gastar. Sua conta deve incluir o gasto total de combustíve dividido pela quantidade de pessoas.

*/
#include <stdio.h>

int main() {
    float kmpL, preco, distancia, vl_final;
    int qtd;

    printf("Informe quantos Kms pretende viajar de carro: ");
    scanf("%f", &distancia);
    printf("Informe quantos Km/L seu carro faz: ");
    scanf("%f", &kmpL);
    printf("Informe o valor do combustível: ");
    scanf("%f", &preco);
    printf("Informe quantas pessoas irão dividir a conta: ");
    scanf("%d", &qtd);
    vl_final = ((distancia/kmpL)*preco)/qtd;
    printf("O valor que cada um ai pagar é R$%f",vl_final);

    return 0;
}