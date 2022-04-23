/* 
Faça um programa que preencha um vetor de dez posições com valores lidos do teclado e, ao final, imprima os valores ímpares armazenados nos índices pares.
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void VetorImpares (int vetor[], int tam){
  int cont;
    for (cont=0; cont<tam; cont++){
      scanf("%d", &vetor[cont]);
      if (cont%2==0 && vetor[cont]%2!=0) {
      printf("%d ", vetor[cont]);
      }
    }
}
int main() {
  int vetor[TAM];
  VetorImpares (vetor, TAM);
  return 0;
}