#include <stdio.h>
#include <string.h>
#include <math.h>
#define meses 6
#define regioes 10

typedef struct {

    char mes[100];
    float perc[regioes];

} relatorio;

void desmatamento (relatorio vet[], int ind){

    float media=0, total=0;

    for(int i=0; i<regioes; i++){

        total = total + vet[ind].perc[i];

    }

    media = total / regioes;

    printf("Média de desmatamento de %.1f%% em %s", media, vet[ind].mes);

    for(int i=0; i<regioes; i++){

        if (vet[ind].perc[i]>media){

            printf("Região %d: %.1f%% de área desmatada em %s", i, vet[ind].perc[i], vet[ind].mes);

        }

    }    

}

int main (){

    relatorio vet[meses];
    int ind;

    for(int i=0; i<meses; i++){

        fgets(vet[i].mes, sizeof(vet[i].mes), stdin);
        for (int j=0; j<regioes; j++){

            scanf("%f%*c", &vet[i].perc[j]);

        }
    }

    scanf("%d%*c", &ind);

    desmatamento(vet, ind);


    return 0;
}
