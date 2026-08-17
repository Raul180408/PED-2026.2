/*2.7. Classificação de triângulo por lados
Leia três valores representando lados de um triângulo. 
Primeiro verifique se eles realmente formam um triângulo 
válido (a soma de quaisquer dois lados deve ser maior que o terceiro). 
Se for válido, classifique-o em equilátero, isósceles ou escaleno.
*/
#include <stdio.h>

int main(){
    float ld1, ld2, ld3;

    printf("Informe a medida do 1º lado do triângulo: ");
    scanf("%f", &ld1);
    printf("Informe a medida do 2º lado do triângulo: ");
    scanf("%f", &ld2);
    printf("Informe a medida do 3º lado do triângulo: ");
    scanf("%f", &ld3);
    if ((ld1 + ld2)>ld3){
        if (ld1==ld2&&ld1==ld3){
            printf("O triângulo é equilátero.");
        }
        else if (ld1==ld2||ld2==ld3||ld1==ld3){
            printf("O triângulo é isósceles.");
        }
        else if (ld1!=ld2&&ld2!=ld3){
            printf("O triângulo é escaleno.");
        }
    }
    else{
        printf("As medidas informadas não pertencem a um triangulo");
    }

    return 0;
}