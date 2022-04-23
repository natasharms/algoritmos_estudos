/*
Dois amigos combinaram uma maneira diferente para se comunicarem. As mensagens são enviadas de trás para frente e caracteres 'a' são substituídos por caracteres ‘@’. Por exemplo, a mensagem “@cisif ed @vorp” deve ser traduzida para “prova de fisica”. 

a) Uma função que recebe duas strings, uma modificada pelos amigos e outra para guardar a string corrigida. A função deve realizar a correção da string.

 

b) Um programa que leia uma string modificada, chame a função do item a) e imprima a string original.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define t 150

void correcao (char s1[], char s2[]){ 

    int tam = strlen(s1);
    int c, i, j;

    for (i = 0, j = tam - 1; i < j; i++, j--)
    {
        c = s1[i];
        s1[i] = s1[j];
        s1[j] = c;
    }
    for(int i=0; s1[i]!='\0'; i++){

        s2[i] = s1[i];

        if (s1[i]=='@'){

            s2[i]='a';

        }
    }

}

void fgets_newline_kill(char a[])
{
    size_t sl = strlen(a);

    if(sl > 0 && a[sl - 1] == '\n')
    {
       a[sl - 1] = '\0';
    }
}

int main (){

    char sT[t], sC[t];

    fgets(sT, t, stdin);
    fgets_newline_kill (sT);

    correcao(sT, sC);

    printf("%s", sC);

    return 0;
}