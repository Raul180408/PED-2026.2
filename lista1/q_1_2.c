#include <stdio.h>

float fah(float c){
    return c * 9/5 + 32;
}

int main() {
    float c;
    
    printf("Digite uma temperatura em ºC: ");
    scanf("%f", &c);
    printf("%fºC são %f fahrenheit.", c, fah(c));

    return 0;
}