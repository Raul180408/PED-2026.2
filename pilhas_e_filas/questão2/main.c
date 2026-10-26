#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include <string.h>
/*Questão 2
Quando o gcc reclama de uma chave } que ficou sem par, ele está fazendo exatamente 
o que você vai implementar agora. Escreva um programa que receba uma expressão (uma string) 
e informe se os parênteses ( ), colchetes [ ] e chaves { } estão balanceados, isto é, 
se cada abertura tem um fechamento correspondente, na ordem certa.
Como usar a pilha: percorra a expressão caractere por caractere. 
Ao encontrar uma abertura, empilhe-a. Ao encontrar um fechamento, desempilhe e 
confira se o tipo combina. Ao final, a pilha deve estar vazia. Sua pilha deve guardar 
char em vez de int (adapte o tipo dos dados), e você deve usar pilha_vazia antes de cada pop, 
já que o nosso pop encerra o programa quando a pilha está vazia.
 */
#define TRUE 1
#define FALSE 0
int main()
{
    int balanceada = TRUE;
    char exp[100];
    scanf("%s", exp);
    Pilha *p = criar(100);
    for (int i=0; i<strlen(exp); i++){
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{'){
            push(p, exp[i]);
        } 
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}'){
            if(p->topo == 0){
                balanceada = FALSE;
            }
            //p->dados[(p->topo-1)] 
            if(
                (p->dados[(p->topo-1)]) == '(' &&
                exp[i] == ')'
            ){
                pop(p);
            }
            else if(
                (p->dados[(p->topo-1)]) == '[' &&
                exp[i] == ']'
            ){
                pop(p);
            }
            else if(
                (p->dados[(p->topo-1)]) == '{' &&
                exp[i] == '}'
            ){
                pop(p);
            }
        }
    }

    if (balanceada){
        printf("está balanceada");
    }
    else{
        printf("não está balanceada");
    }

    return 0;
}
