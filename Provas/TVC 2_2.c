#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define l 14
#define c 20

void somatorio (int matriz[l][c], int lin, int col){ // Faça uma função que recebe uma matriz de números inteiros preenchida, um número inteiro representando o número de linhas e outro representando o número de colunas

    int maximo, soma=0;
    scanf("%d%*c", &maximo); // A função deve fazer a leitura de um número para representar a quantidade máxima de minutos a serem considerados.

    // PERCORRER A MATRIZ
    for (int i = 0; i <lin; i++){
        for (int j = 0; j<col; j++){

            if (j%2!=0){ // colunas ímpares

                soma=soma+matriz[i][j]; // cálculo somatório das colunas ímpares

                if (soma > maximo){ // se a ultima soma for maior que o máximo:

                    soma=soma-matriz[i][j]; // subtrair o ultimo elemento pra não ultrapassar
                    break; // sair do laço
                }                
            }
        }
    }


    printf("Somatorio dos valores: %d", soma); // impressão do somatório
}

int main (){

    int matriz[l][c];
    int linhas, colunas;
    scanf("%d%*c", &linhas); // número de linhas (horas do dia consideradas)
    scanf("%d%*c", &colunas); // colunas (dias considerados)

    for (int i = 0 ; i < linhas ; i++){
        for(int j = 0 ; j < colunas ; j++){
            scanf("%d",&matriz[i][j]);
        }
    } 

    somatorio (matriz, linhas, colunas);

    return 0;
}

