#include <stdio.h>

int main(){
    float a, b, res;
    char sinal;

    printf("Digite o 1º número: ");
    scanf("%f", &a);
    printf("Digite o sinal (+, -, * ou /): ");
    scanf("%s", &sinal);
    printf("Digite o 2º número: ");
    scanf("%f", &b);

    switch (sinal)
    {
    case '+':
        res = a+b;
        break;
    case '-':
        res = a-b;
        break;
    case '*':
        res = a*b;
        break;
    case '/':
        if (b == 0){
            printf("não existe divisão por zero");
            break;
        }
        res = a/b;
        break;
    
    default:
        printf("Operação inválida");
        break;
    }
    printf("O resultado é %f", res);
    
    return 0;
}