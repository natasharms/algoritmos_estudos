#include <stdio.h>
#define P 6

typedef struct {
  float peso;
  float altura;
} Medidas;

float media_peso (Medidas med[P]){

    float media, soma=0;

    for(int i=0; i<P; i++){

        soma+=med[i].peso;
    }

    media=soma/P;

    return media;
}

float media_altura (Medidas med[P]){

    float media, soma=0;

    for(int i=0; i<P; i++){

        soma+=med[i].altura;
    }

    media=soma/P;

    return media;
}

int main() {
  
    Medidas m[P];
    float media_p, media_a;

    for(int i=0; i<P; i++){

        scanf("%f", &m[i].peso);
        scanf("%f", &m[i].altura);
    }

    media_p = media_peso(m);
    media_a = media_altura(m);

    printf("Média Pesos: %.2f kg\n", media_p);
    printf("Média Alturas: %.2f m", media_a);



  return 0;
}