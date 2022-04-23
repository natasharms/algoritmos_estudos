/*
Faça um programa com três vetores de números reais v1, v2 e v3 de tamanhos N, N e 2N, respectivamente. Leia o valor de N e preencha v1 e v2 com valores do teclado, assumindo que cada vetor será preenchido por uma sequência crescente. Considere que N poderá ser no máximo 50.

Seu programa deverá copiar os elementos de v1 e v2 para v3, de forma que, ao final do processamento, o vetor v3 contenha todos os elementos de v1 e v2 em ordem crescente. 

Observação importante: após o preenchimento do vetor, cada vetor só poderá ser percorrido apenas uma vez.
*/

#include <stdio.h>
#define N 50

void ordena(float vet[], int tam)
{
    int i, j, aux;
        for(i = 0; i < tam-1; i++)
        {
            for(j = tam-1; j > i; j--)
            {
                if (vet[j] < vet[j-1] )
                {
                aux = vet[j];
                vet[j] = vet[j-1];
                vet[j-1] = aux;
                }
            }
        }
}

void concatena (float v1[], float v2[], float v3[], int tam){

    int i;

    for(i = 0; i < tam; i++){ // COPIA DO V1 PARA O V3
        v3[i]=v1[i];
    }

    for(i = 0; i < tam; i++){ // COPIA DO V2 PARA O V3
        
        v3[i+tam]=v2[i];
    }
}


int main (){

    int n, i;
    scanf ("%d", &n);
    float V1[n], V2 [n], V3[n*2];

    for(i = 0; i < n; i++){  // PRENCHE V1
        scanf("%f", &V1[i]);
    }

    for(i = 0; i < n; i++){  // PREENCHE V2
        scanf("%f", &V2[i]);
    }

    concatena (V1, V2, V3, n); // PREENCHER V3

    ordena (V3, n*2); // ORDENA  V3

// IMPRIMIR 
    
    printf("Vetor v3:\n");
    for(i = 0; i < 2*n; i++)
        {
        printf("v[%d] = %.2f\n", i, V3[i]);
        }

    return 0;
}