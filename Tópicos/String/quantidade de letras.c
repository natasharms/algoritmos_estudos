/*
Um professor de Português lançou um desafio para os alunos no qual eles deveriam elaborar uma frase contendo exatamente a mesma quantidade de letras ‘d’ (ou ‘D’) e ‘l’ (ou ‘L’). Assim, a frase “Gosto de ler” seria aceita pelo professor, pois possui exatamente a mesma quantidade de letras ‘d’ (ou ‘D’) e ‘l’ (ou ‘L’). Por outro lado, a frase “Gosto de estudar” não seria aceita, pois possui 2 ocorrências da letra ‘d’ (ou ‘D’) e nenhuma ocorrência da letra ‘l’ (ou ‘L’). 

Para resolver esta questão, deve-se fazer:

a) Uma função que recebe uma string e retorna o valor 1 se a quantidade de letras ‘d’ (ou ‘D’) é igual a quantidade de letras ‘l’ (ou ‘L’) ou retorna o valor 0, caso contrário.

b) Um programa que leia uma string, chame a função do item a) e imprima se a string será aceita pelo professor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define tam 100

int ld (char s[tam]){

    int contD=0, contL=0;

    for(int i=0; s[i]!='\0'; i++){

        if (s[i]=='d' || s[i]=='D'){
            contD++;
        }
        if (s[i]=='l' || s[i]=='L'){
            contL++;
        }
    }

    if (contD!=contL){
        return 0;
    }
    else
        return 1;

}

int main(){

    char string[tam];

    fgets(string, tam, stdin);

    int LD = ld(string);

    if (LD==0){

        printf("Nao sera aceita pelo professor.");
    }
    if (LD==1){

        printf("Sera aceita pelo professor.");

    }

    return 0;
}