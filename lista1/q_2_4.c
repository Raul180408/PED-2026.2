#include <stdio.h>
/*2.4. Classificação por idade
Leia a idade de uma pessoa e classifique-a como "criança" (0–11), "adolescente" (12–17), "adulto" (18–59) ou "idoso" (60+).*/
int main(){
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade < 0){
        printf("Idade não pode ser negativa");
    }
    else if (idade <= 11){
        printf("Criança");
    }
    else if (idade <= 17){
        printf("Adolescente");
    }
    else if (idade <= 59){
        printf("Adulto");
    }
    else{
        printf("idoso");
    }

    return 0;
}