/* 
Ao fazer download da letra da sua música preferida, você percebeu que o texto veio com todos os caracteres maiúsculos. Contudo, você gostaria de deixar apenas os caracteres do início das frases como maiúsculas para facilitar a leitura.

Para resolver, faça uma função que receba o texto da música como parâmetro (string) e altere a própria string mantendo apenas as letras que iniciam uma frase como maiúsculas, e passando todos os outros caracteres (que forem letras) para minúsculas.  Para saber quantos caracteres foram modificados, a função deve retornar esse valor para o programa principal.

Faça o programa principal que leia a letra da música, chame a função e imprima a música completa modificada seguida da seguinte frase “Foram trocados XX caracteres“. 

Obs: Considere que a música terá no máximo 1000 caracteres e que as frases serão encerradas apenas com o caractere ponto-final ‘.’
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 1000

int main()
{
    char string[TAM];
    int i, trocas=0;

    fgets(string, TAM, stdin);

    

    for (i = 1; string[i] != '\0'; i++)
    {
        

        if (string[i-2] != '.' && string[i]>='A' && string[i]<='Z')  // se a letra for antecedida por um ponto final
        {
            string[i] = tolower(string[i]); // colocar minuscula
            trocas++;
        }
       

        
    }
    
    puts(string);
    printf("Foram trocados %d caracteres.", trocas);
    

    return 0;
}