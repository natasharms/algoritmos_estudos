#include <math.h>
#include <stdio.h>

typedef struct { // Para resolver este exercício, use a estrutura "Ponto" definida no exemplo e siga os passos abaixo:
  int x;
  int y;
} Ponto;

float distancia (Ponto ponto1, Ponto ponto2){ // 1. Escreva uma função que receba como parâmetro dois pontos e retorne a distância entre eles.

    float dist;

    dist = sqrtf ( pow(ponto2.x-ponto1.x, 2) + pow(ponto2.y-ponto1.y, 2));

    return dist;

}

int main() { // 2. Escreva uma função principal (main) para ler do teclado as informações de dois pontos, chamar a função desenvolvida no item anterior e imprimir na tela o resultado obtido.

    Ponto ponto1, ponto2;

    scanf("%d", &ponto1.x);
    scanf("%d", &ponto1.y);
    scanf("%d", &ponto2.x);
    scanf("%d", &ponto2.y);

    float Dist = distancia (ponto1, ponto2);

    printf("Distância: %.2f\n", Dist);
  
  return 0;
}