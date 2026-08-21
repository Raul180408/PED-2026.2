/*
3.5. Verificação de número primo
Leia um número inteiro e determine se ele é primo ou não, usando um laço para testar os divisores.
*/
#include <stdio.h>

int main(){
    int n, c=0;
    printf("Digite um número: ");
    scanf("%d", &n);
    for (int i=1; i<n; i++){
        if (n%i==0){
            c++;
        }
    }
    if (c>2){
        printf("%d Não é primo.",n);
    }
    else{
        printf("%d é primo", n);
    }

    return 0;
}