/*
4. Escreva um programa que declara um array estático 
de caracteres com 100 posições e lê uma palavra aleatória do usuário. 
Em seguida, crie uma nova estrutura para alocar dinamicamente exatamente 
o espaço necessário para armazenar a palavra digitada pelo usuário e 
copie os dados da variável estática para a variável dinâmica.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100], *b, *b0;
    
    scanf("%s", &a);
    
    b = (char *) malloc((strlen(a)+1)*sizeof(char));
    b0 = b;
    
    for (int i = 0; i < strlen(a); i++){
        *b = a[i];
        b++;
    }
    *b = '\0';
    printf("%s", b0);
    
    free(b0);
    return 0;
}
