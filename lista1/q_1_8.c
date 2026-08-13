#include <stdio.h>

int main() {

    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    a += b;
    b = a-b;
    a -= b;
    printf("a: %d, b: %d", a,b);
    
    return 0;
}