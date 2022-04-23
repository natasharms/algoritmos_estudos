/*
Para resolver esta questão, deve-se fazer:

a) Uma função que recebe uma string e retorna o valor 1 se a quantidade de letras ‘a’ (ou ‘A’) é menor que a quantidade de letras ‘e’ (ou ‘E’) ou retorna o valor 0, caso contrário.

b) Um programa que leia uma string, chame a função do item a) e imprima se a string pode ou não ser postada na rede social.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define t 1000

int redesocial (char s1[]){ 

    int a=0, e=0;

    for(int i=0; s1[i]!='\0'; i++){

        if(s1[i]=='a' || s1[i]=='A'){
            a++;
        }

        if(s1[i]=='e' || s1[i]=='E'){
            e++;
        }

    }

    if (a<e){
        return 1;
    }
    else return 0;

}

int main (){

    char s1[t]; 
    int q;

    fgets(s1, t, stdin);

    q = redesocial(s1);

    if (q==0){
        printf("Nao pode ser postada.");
    }
    else printf("Pode ser postada.");

    return 0;
}