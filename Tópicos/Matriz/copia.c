/*
Implemente as funções indicadas abaixo para que o programa funcione corretamente.
*/

#include <stdio.h>
#define M 4
#define N 3

void lematriz(int m[M][N]){ // leitura da matriz
  
  int l, c;

  for (l = 0 ; l < M ; l++){ // l = linha
    for(c = 0 ; c < N ; c++){ // c = coluna
      scanf("%d",&m[l][c]);
      }
  } 
}

void copiazera(int copiado[M][N], int original[M][N]) // cria uma cópia e zera a original
{
    int l, c;

    for (l = 0 ; l < M ; l++){
      for(c = 0 ; c < N ; c++) {
        copiado [l][c] = original [l][c];
        original [l][c] = 0;
      }
    }  
}

void imprimematriz (int m[M][N]){ // impressão da matriz

    for (int l = 0; l < M; l++) { //para as linhas
      for (int c = 0; c < N; c++) { //para as colunas
        printf("%d ", m[l][c]);
      }
    printf("\n"); //salta uma linha
    }
    printf("\n");

}

int main() {
  int A[M][N], B[M][N];
  
  //Leitura: Matrizes A & B
  lematriz(A);
  lematriz(B);
  
  //Matriz A "recebe" B e B é zerada
  copiazera(A, B);
  
  //Impressão: Matriz A
  printf("Matriz A:\n");
  imprimematriz(A);
  
  //Impressão: Matriz B
  printf("Matriz B:\n");
  imprimematriz(B);
  
  return 0;
}
