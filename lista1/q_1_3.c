#include <stdio.h>

int main() {
    float notas, soma=0;

    for (int i=1; i<=3; i++){

        printf("Digite a %dº nota: ", i);
        scanf("%f", &notas);
        
        soma += notas;
    }
    printf("A média entre as notas digitadas é %f", soma/3);


    return 0;
}