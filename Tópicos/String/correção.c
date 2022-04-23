/*
Uma falha em um sistema de comunicação fez com que alguns caracteres das mensagens enviadas fossem substituídos por ‘-’. Assim, nesse sistema, a mensagem  "Algoritmos eh facil” poderia ser transformada em  “A-gor-tm-s eh fa-il”. 
Para resolver esta questão, deve-se desenvolver:

a) Uma função que receba duas strings, uma representando uma mensagem transmitida nesse sistema e outra representando a string original. A função deve realizar a correção da string e devolver quantos caracteres foram corrigidos.

b) Um programa que leia uma string transmitida nesse sistema e a string original, chame a função do item a), imprima a string corrigida e o número de caracteres modificados
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define t 100

int correcao (char s1[], char s2[]){ 

    int cont=0;

    for(int i=0; s1[i]!='\0'; i++){

        if (s1[i]!=s2[i]){

            s1[i]=s2[i];
            cont++;

        }
    }

    return cont;

}

int main (){

    char sT[t], sO[t]; // sT= string transmitida, sO= string original

    fgets(sT, t, stdin);
    fgets(sO, t, stdin);

    int n = correcao(sT, sO);

    printf("String corrigida: %s", sT);
    printf("Numero de caracteres corrigidos: %d", n);

    return 0;
}