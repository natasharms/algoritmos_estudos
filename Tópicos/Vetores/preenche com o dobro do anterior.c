/*
Escreva uma função que crie um vetor de números inteiros de 10 posições, preencha a primeira posição com um valor informado pelo usuário e preencha as posições subsequentes com o dobro da posição anterior. A função deverá imprimir o vetor criado
Escreva uma função principal (main) que chame a função anterior.
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void VetorDobro (int vetor[], int tam){
  int cont;
  scanf("%d", &vetor[0]);
  printf("%d\n", vetor[0]);

    for (cont=1; cont<tam; cont++){
        vetor[cont]=vetor[cont-1]*2;
        printf("%d\n", vetor[cont]);
    }
}

int main() {
  int vetor[TAM];
  VetorDobro (vetor, TAM);
  return 0;
}