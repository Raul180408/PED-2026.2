#include <stdio.h>

int main(){
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if (num==0){
        printf("O número informado é 0");
    }
    else if (num>0){
        printf("O número informado é positivo");
    }
    else {
        printf("O número informado é negativo");
    }
    
    return 0;
}