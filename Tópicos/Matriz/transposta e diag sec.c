/*
Faça um programa que leia uma matriz NxN de números reais, sendo N=5 definido com a diretiva define. O programa deve modificar a matriz de forma que a diagonal secundária seja substituída 
pela diagonal secundária da matriz transposta, com os valores arredondados para cima. Ao final, o programa deve imprimir a nova matriz APENAS se TODOS os elementos da diagonal secundária forem positivos. 

Dica: a função ceil(float x) da biblioteca retorna o valor do parâmetro x arredondado para cima. 
*/

#include <stdio.h>
#include <math.h>
#define N 5

int main() {

  float m1[N][N], m2[N][N];
  int l, c;
  int flag = 0;


    // loop de leitura da matriz
  for (l = 0 ; l < N ; l++){ 
    for(c = 0 ; c < N ; c++){
      scanf("%f",&m1[l][c]); 
      }
  } 

    // loop de criação da transposta
  for (l = 0 ; l < N ; l++){ 
      for(c = 0 ; c < N ; c++) {
        m2 [l][c] = m1 [c][l]; 
      }
    }

    //substituição da diagonal
    for (l = 0 ; l < N ; l++){ 
      for(c = 0 ; c < N ; c++) {
          if (l+c==(N-1)){
                m1[l][c] = m2[l][c]; // substituindo a diagonal secundapria da m1 pela transposta (m2)
                    if(m1[l][c]<0){  // se algum termo da secundaria for negativo não imprime
                        flag = 1;
                    }
            }
      }
    }

    // loop de impressão
    if (flag==0){

        for (int l = 0; l < N; l++) { //para as linhas
            for (int c = 0; c < N; c++) { //para as colunas
                printf("%.f ", ceil(m1[l][c]));
            }
            printf("\n"); //salta uma linha
            }
    }
    
  return 0;
}