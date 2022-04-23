/*
Para resolver este exercício, siga os passos abaixo:
Escreva uma função que receba como parâmetro uma matriz de valores reais quadrada de dimensão três e faça a leitura desta.
Escreva uma função que receba como parâmetro duas matrizes de valores reais quadradas de dimensão três e inicialize a segunda como a transposta da primeira.
Escreva uma função principal (main) para chamar as funções desenvolvidas nos itens anteriores e imprimir na tela o estado final da segunda matriz. As impressões devem ser feitas utilizando 1 casa decimal.
*/


#include <stdio.h>
#define M 3
#define N 3

void lematriz(float m[M][N]){
  
  int l, c;

  for (l = 0 ; l < M ; l++){
    for(c = 0 ; c < N ; c++){
      scanf("%f",&m[l][c]);
      }
  } 
}

void transposta(float m1[M][N], float m2[N][M]){

    int l, c;

    for (l = 0 ; l < M ; l++){
      for(c = 0 ; c < N ; c++) {
        m2 [l][c] = m1 [c][l];
      }
    }  
}

int main() {

  float a[M][N], b[N][M];
  lematriz (a);
  transposta (a, b);
    for (int l = 0; l < M; l++) { //para as linhas
      for (int c = 0; c < N; c++) { //para as colunas
        printf("%.1f ", b[l][c]);
      }
    printf("\n"); //salta uma linha
    }
  return 0;
}