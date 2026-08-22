#include <stdio.h>

int main() {
    int a, b;
    
    printf("Digite um número: ");
    scanf("%d", &a);
    printf("Digite um número: ");
    scanf("%d", &b);
    printf("%d + %d = %d", a, b, a+b);
    
    return 0;
}