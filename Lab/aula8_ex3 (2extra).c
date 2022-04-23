/*
Um quadrado mágico é uma matriz quadrada, de valores inteiros, na qual a soma dos elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos da diagonal primária e da diagonal secundária são iguais.

A matriz quadrada de ordem 4 abaixo é um exemplo de quadrado mágico, no qual todas as somas são iguais a 34:

4	14	15	1
9	7	6	12
5	11	10	8
16	2	3	13
 

Desenvolva um programa que leia a ordem da matriz (n), em seguida leia todos os seus elementos e imprima se a matriz é um quadrado mágico ou não, conforme o exemplo abaixo.
*/

#include <stdio.h>
#include <math.h>
#define tam 50


int main (){

    int N, l, c;
    int somalinha = 0, somacoluna = 0, somadgprima = 0, somadgsec = 0;

    scanf("%d",&N);

    int matriz[N][N];

    // leitura e soma das diagonais
    for (l = 0 ; l < N ; l++){
        for(c = 0 ; c < N ; c++){
        scanf("%d",&matriz[l][c]);
        }
    }

    for (l = 0 ; l < N ; l++){
        for(c = 0 ; c < N ; c++){
        if (l+c==(N-1)){ // diagonal secundaria
                somadgsec = somadgsec + matriz[l][c];
            }
            if (l==c){ // diagonal primária
                somadgprima = somadgprima + matriz[l][c];
            }
        }
    }



    // soma das linhas
    for (l = 0 ; l < N ; l++){
        for(c = 0 ; c < N ; c++){
            somalinha = somalinha + matriz[l][c];
        }
    }

    // soma das colunas
    for(c = 0 ; c < N ; c++){
        for (l = 0 ; l < N ; l++){
            somacoluna = somacoluna + matriz[l][c];
        }
    }

    if ((somacoluna == somalinha) && (somalinha == somadgprima) && (somalinha == somadgsec)){
        if ((somacoluna == somadgprima) && (somacoluna == somadgsec)){
            if ((somadgprima == somadgsec)){
                printf("A matriz é um quadrado mágico");
            }
        }
    }
    else printf("A matriz não é um quadrado mágico");
    
    return 0;
}