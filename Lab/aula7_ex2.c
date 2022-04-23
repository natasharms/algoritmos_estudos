/*
Fazer uma função que leia uma string do teclado (máx. 50 caracteres) e imprima uma “estatística” dos caracteres digitados. O programa deverá imprimir a quantidade total de caracteres digitados, 
a quantidade de vogais, a quantidade de consoantes, e a quantidade de outros caracteres.
Observações:
- Os espaços são contados como caracteres especiais.
- Quando uma vogal é acentuada, o programa considera aquela posição como sendo dois caracteres especiais.
- Além disso, o acento agudo é considerado pelo algoritmo como sendo dois caracteres.
- O cê-cedilha (ç) é considerado dois caracteres especiais.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAM 50

void minusculas (char s1[]){

    int i;
    for (i = 0; s1[i] != '\0'; i++)
    {
        s1[i] = tolower(s1[i]); 
    }
}

int main()
 {
    char s[50];
    char vogais [] = "aeiou";
    char consoantes [] = "bcdfghjklmnpqrstvxywz";
    int i, j, n=0, numVogais=0, numCons=0, numCharEsp=0;
    fgets(s, 50, stdin);

        for(i = 0; i<strlen(s)-1; i++)
        {
            minusculas(s);
            if( s[i] >= 'a' && s[i] <= 'z'){
                for (j = 0; vogais[j] != '\0'; j++) // quantidade de vogais
                {   
                    if (vogais[j] == s[i]) 
                    {
                        numVogais++; 
                    }
                }
                for (j = 0; consoantes[j] != '\0'; j++) // quantidade de consoantes
                {
                    if (consoantes[j] == s[i])
                    {
                        numCons++; 
                    }
                }
            }
            else numCharEsp++; // outros caracteres 
            n++;
        }

    printf("Total de caracteres digitados: %d", n); 
    printf("\n--> Vogais: %d.", numVogais);
    printf("\n--> Consoantes: %d.", numCons);
    printf("\n--> Outros: %d.", numCharEsp);

 return 0;
 }
