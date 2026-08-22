/*
1.4. Área do círculo
Leia o raio de um círculo (número real) 
e calcule sua área (A = π * r²). Para o valor de PI, 
inclua a biblioteca math.h, que vai disponibilizar a constante M_PI, por exemplo:
*/
#include <stdio.h>
#include <math.h>

float area(float raio){
    return M_PI * raio * raio;
}

int main() {
    float raio;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    printf("A área de um círculo com raio %f é %f", raio, area(raio));


    return 0;
}