/*
Para resolver este exercício, siga os passos abaixo:
Escreva uma função que receba por parâmetro e imprima uma matriz de três linhas e quatro colunas de números inteiros .
Escreva uma função para calcular a multiplicação de uma matriz  de números inteiros com três linhas e quatro colunas por um escalar inteiro, recebidos por parâmetro.
Escreva uma função principal (main) que leia do teclado uma matriz de dimensão 3x4 e um escalar e chame as funções desenvolvidas nos itens anteriores.
*/

#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 4

void imprime(int m[M][N]){
  
  int l, c;

  for (l = 0; l < M; l++) { //para as linhas
      for (c = 0; c < N; c++) { //para as colunas
        printf("%d ", m[l][c]);
      }
    printf("\n"); //salta uma linha
    }
}

void multiplica (int m[M][N], int esc){

    int l, c;

    for (l = 0 ; l < M ; l++){
      for(c = 0 ; c < N ; c++) {
        m [l][c] = m [l][c]*esc; 
      }
    }
}

int main (){

    int l, c, m[3][4], escalar;

        for (l = 0 ; l < M ; l++){
            for(c = 0 ; c < N ; c++){
            scanf("%d",&m[l][c]);
            }
        }

    scanf("%d", &escalar);
        printf("Escalar: %d\n", escalar);

    multiplica (m, escalar);
    printf("Matriz Final:\n");
    imprime (m);

}