#include <stdio.h>
/*
3.9. Adivinhe o número
Implemente a lógica de um jogo de dedução onde o usuário precisa adivinhar um número de 3 dígitos.
O usuário tem até 10 chances, após cada palpite, você deve responder com uma sequência de 3 caracteres que indicam, para cada posição:
'+' (sinal de mais): o dígito está certo e na posição correta;
'!' (exclamação): o dígito está certo, mas na posição errada
'_' (underline): o dígito não está presente no número secreto.

Número secreto (exemplo): 7 3 1
==== Chance 1 ====
Palpite: 2 5 9
Saída: ___
==== Chance 2 ====
Palpite: 7 1 3
Saída: +!!
==== Chance 3 ====
Palpite: 7 3 1
Saída: +++
Parabéns! Você acertou!

*/
int algarismo1(int num){
    return num/100;
}
int algarismo2(int num){
    return (num/10)%10;
}
int algarismo3(int num){
    return num%10;
}

int main() {
    int secreto, palpite, tentativa=0;
    char res[4];

    printf("Digite o número secreto (3 algarismos): ");
    scanf("%d", &secreto);
    
    while (1){
        printf("\n\n\n\n\n\n\n\n\nDigite o primeiro palpite (3 algarismos): ");
        scanf("%d", &palpite);
        tentativa += 1;
        if (algarismo1(palpite) == algarismo1(secreto)){
            res[0] = '+';
        }
        else if ( 
            (algarismo1(palpite) == algarismo2(secreto)) ||
            (algarismo1(palpite) == algarismo3(secreto))
        )
        {
            res[0] = '!';
        }
        else{
            res[0] = "_";
        }

        //----------------------------------------------------------------

        if (algarismo2(palpite) == algarismo2(secreto)){
            res[1] = '+';
        }
        else if ( 
            (algarismo2(palpite) == algarismo1(secreto)) ||
            (algarismo2(palpite) == algarismo3(secreto))
        )
        {
            res[1] = '!';
        }
        else{
            res[1] = "_";
        }

        //----------------------------------------------------------------

        if (algarismo3(palpite) == algarismo3(secreto)){
            res[2] = '+';
        }
        else if ( 
            (algarismo3(palpite) == algarismo2(secreto)) ||
            (algarismo3(palpite) == algarismo1(secreto))
        )
        {
            res[2] = '!';
        }
        else{
            res[2] = '_';
        }
        
        //----------------------------------------------------------------
        printf("\n\n%c %c %c\n", res[0], res[1], res[2]);
        if (res[0]=='+'&&
            res[1]=='+'&&
            res[2]=='+'
        ){
            printf("\n\nAcertou!\n\n");
            break;
        }
        else if (tentativa == 10){
            printf("\n\nacabaram suas chances!\n\n");
            break;
        }
        
    }
    
    return 0;
}