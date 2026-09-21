/*
6. Escreva o programa vetores.c com as seguintes funcionalidades:
No cabeçalho do módulo defina FALSE 0 e TRUE 1
É boa prática de programação que os nomes das constantes definidas sejam maiúsculas (FALSE, TRUE, PI, TAMANHO, etc...)
Função aloca: recebe um inteiro n e um inteiro preenche. 
Se o valor de preenche for TRUE, aloca um vetor de inteiros com n elementos preenchido com zeros (dica: calloc). 
Caso contrário, se preenche valer FALSE, aloca um vetor não preenchido de inteiros com n elementos (dica: malloc).
Retorna o ponteiro para o espaço alocado.

Função imprime: recebe um ponteiro inteiro v e o seu tamanho n e imprime os valores do vetor v usando apenas aritmética de ponteiros. (não é permitido usar a sintaxe de colchetes)

Função preenche: recebe um ponteiro inteiro v, o seu tamanho n, um inteiro valor e um inteiro is_aleatorio.
Se is_aleatorio valer TRUE, preenche o vetor com valores aleatórios [0...100]
Veja na documentação como gerar valores aleatórios em C
Caso contrário, preenche o vetor com valor.  
Use apenas aritmética de ponteiros

Escreva o programa principal da seguinte forma:
Declare dois ponteiros inteiros v1 e v2
Chame a função aloca para v1, com preenche = FALSE e o parâmetro n a sua escolha.
Chame a função aloca para v2, com preenche = TRUE e o parâmetro n a sua escolha.
Imprima ambos os vetores
Chame a função preenche para v1 com valor = 0 e is_aleatorio = TRUE
Chame a função preenche para v2 com valor = 100 e is_aleatorio = FALSE
Imprima v1 e v2 novamente.
*/

#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int *aloca(int n, int pr){
    int *vetor;
    if (pr == TRUE){
        return vetor = (int *) calloc(n, sizeof(int));
        
    }
    return vetor = (int *) malloc(n*sizeof(int));
}

void imprime(int *v, int n){
    for (int i=0; i<n; i++){
        printf("[%d, ", *v);
        v++;
    }
    printf("]");
}



int main() {
    
    return 0;
}