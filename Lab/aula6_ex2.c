/*
Escreva uma função que receba um vetor de valores reais e a quantidade de valores positivos. Além disso, faça um programa que leia valores do teclado para preencher todo o vetor.
Observe que 0 e valores negativos devem ser ignorados e a leitura deve ignorar valores a mais. Imprima o vetor resultante.
Dica: leia primeiro a quantidade de + e depois os valores candidatos do vetor. Imprima até 2 casas decimais
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 100
 
void VetorPos (float vetor[], int tam){
  int posicao=0;
  float valor;
  scanf("%f",&valor);
  while (posicao<tam){
    if (valor>0){
      vetor[posicao]=valor;
      printf("%.2f ", vetor[posicao]);
      posicao++;
    }
  scanf("%f",&valor);
  }
}

int main() {
  int positivos;
  float Vetor [TAM];
  scanf("%d", &positivos);
  VetorPos (Vetor, positivos);
  return 0;
}