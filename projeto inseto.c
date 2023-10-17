#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int Pergunta(int op1, int op2);

void main(){
    int pergunta[22], i;
    char enunciado[22][178];
}
int Pergunta(int op1, int op2){
    int i;
    int resposta;
    scanf("%d",&resposta);
    switch(resposta){
        case 1:
            i = op1;
            break;
        case 2:
            i = op2;
            break;
        default:
            printf("resposta invalida, tente novamente");
            break;
    }
    return i;
}
