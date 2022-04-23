/* Desenvolva uma função que receba como parâmetro um número inteiro N. A função deve ler N valores do teclado e retornar quantos destes valores são negativos. 
Faça um programa principal que leia o inteiro N, chame a função e imprima, como nos exemplos, a quantidade de números negativos digitados. */


#include <stdio.h>
#include <stdlib.h>

int ContNeg (int N){

    int cont_rep=1, val, qtd=0; 

    while (cont_rep<=N)
    {
        scanf("%d", &val);
            if (val<0)
            {
                qtd++;
            }
    cont_rep++;
    }
return qtd;
}

int main (){

    int N;
    scanf("%d", &N);
    printf ("Total de números negativos:%d", ContNeg (N));

return 0;
}