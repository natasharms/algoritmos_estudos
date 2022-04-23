// Elabore um algoritmo para calcular a maior distância entre dois pontos dentro de um conjunto de N pontos tal que N=10

#include <stdio.h>
#include <math.h>
#define N 10

typedef struct { //  1. Crie a estrutura Ponto para armazenar as duas coordenadas reais x e y;
  float x;
  float y;
} Ponto;

float distancia (Ponto ponto1, Ponto ponto2){ //   2. Crie uma função que receba duas estruturas representando dois pontos e retorne a distância entre eles

    float dist;

    dist = sqrtf ( pow(ponto2.x-ponto1.x, 2) + pow(ponto2.y-ponto1.y, 2));

    return dist;

}

int main() { //  3. Crie uma função principal que crie um vetor de 10 pontos, leia os dados de cada ponto e imprima a maior distância entre os pontos desse conjunto com duas casas decimais.

    Ponto vetPt[N];
    float dist, maior = 0;

    for (int i = 0; i < N; i++){

        scanf("%f", &vetPt[i].x);
        scanf("%f", &vetPt[i].y);

    }

    for (int i = 0; i < N; i++){
        for (int j = 1; j < N; j++){
            
            dist = distancia (vetPt[i], vetPt[j]);
            if (dist > maior){
                maior = dist;
            }

        }
    }  

    printf("%.2f", maior);


    return 0;
}