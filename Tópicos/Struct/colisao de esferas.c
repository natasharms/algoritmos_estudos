#include <stdio.h>
#include <math.h>
#define N 5

typedef struct {  //1.  Crie uma estrutura Ponto contendo as coordenadas reais x, y e z;

    float x;
    float y;
    float z;

} Ponto;

typedef struct { //2. Crie uma estrutura Esfera que contém uma estrutura Ponto que define o centro e um número real para representar o raio;

    Ponto centro;
    float raio;

} Esfera;

float distancia (Ponto ponto1, Ponto ponto2){ //3. Crie uma função que receba duas estruturas representando pontos e retorne a distância entre eles

    float dist;

    dist = sqrtf ( pow(ponto2.x-ponto1.x, 2) + pow(ponto2.y-ponto1.y, 2) + pow(ponto2.z-ponto1.z, 2));

    return dist;

}

int colisoes (Esfera a, Esfera b){ //4. Crie uma função que receba duas estruturas representando esferas, chame a função definida no item  3, passando os pontos centrais de cada uma dessas esferas, 
//e retorne 1 se tal distância for menor ou igual que o somatório dos raios das esferas ou retorne 0, caso contrário;

    float dist, somaraios;

    somaraios = a.raio + b.raio;

    dist = distancia (a.centro, b.centro);

    if (dist<=somaraios){
        return 1;
    }
    else return 0;
}

int main (){ //5. Crie uma função principal que crie um vetor contendo 5 esferas e leia as coordenadas do centro e o raio de cada uma delas e imprima o número de colisões detectadas utilizando a função definida no item 4.

    Esfera vetEsf [5];
    int col, c=0;

    for (int i=0; i<5; i++){
        scanf("%f", &vetEsf[i].centro.x);
        scanf("%f", &vetEsf[i].centro.y);
        scanf("%f", &vetEsf[i].centro.z);
        scanf("%f", &vetEsf[i].raio);
    }

    for (int i = 0; i < 5; i++){
        for (int j=i+1; j < 5; j++){

            col = colisoes (vetEsf[i], vetEsf[j]);
                if (col == 1){
                    c++;
                }
        }
    }

    printf ("%d", c);


    return 0;
}