/* Escreva um programa que leia uma string e faça com que a primeira letra de cada palavra fique em maiúscula. 
Para fazer a transformação basta modificar cada letra através da seguinte dica: string[i] = string[i] - 'a' + 'A' */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 500

int main()
{
    char string[TAM];
    int i;

    fgets(string, TAM, stdin);

    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i-1] == ' ')  // se a letra for antecedida por um espaço
        {
            string[i] = tolower(string[i]); // colocar tudo minuscula
            string[i] = string[i] - 32; // colocar maiuscula
        }
        if (string[0]<123 && string[0]>96){ //se o primeiro caractere for uma letra minuscula (entre 96 e 123)
            string[i] = string[i] - 32;
        }
    }
    
    puts(string);
    return 0;
}
