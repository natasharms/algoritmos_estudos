#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct {

    int cod_municipio;
    char especie[51];
    float altura[11];

} Est_Eucalipto;

int crescimento (Est_Eucalipto cresc){

    int ind=0;
    float dif;

    for (int i=1; i<11; i++){
        if(i==1){
            dif = cresc.altura[i] - cresc.altura[i-1];
            ind = i;
        }
        else {
            if((cresc.altura[i] - cresc.altura[i-1])<dif){
                dif = cresc.altura[i] - cresc.altura[i-1];
                ind = i;
            }
        }
    }

    return ind;
}

int main(){

    Est_Eucalipto euc;

    scanf("%d%*c", &euc.cod_municipio);
    fgets(euc.especie, 51, stdin);
    for (int i=0; i<11; i++){

        scanf ("%f%*c", &euc.altura[i]);

    }

    int indice = crescimento (euc);

    printf("O indice do ano que houve o menor crescimento foi %d", indice-1);

    return 0;
}