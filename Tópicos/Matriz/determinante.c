/*
Escreva uma função que receba uma matriz 2x2 de números inteiros e retorne o determinante dessa matriz.
Escreva uma função principal (main) que leia uma matriz 2x2, chame a função anterior passando como parâmetro a matriz informada e imprima o determinante da matriz.
*/

#include <stdio.h>
#define TAM 3

int determinante (int m[2][2] ){

  int det;
  det = (m[0][0]* m[1][1]) - (m[0][1]* m[1][0]);

  return det;
}

int main() {
  
  int i, j, m[2][2];

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        scanf("%d",&m[i][j]);
        }
    }

  printf("%d\n", determinante (m));
  return 0;
}