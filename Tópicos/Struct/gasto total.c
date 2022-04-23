#include <stdio.h>
#include <math.h>

typedef struct {

    char tipo_lavoura[51];
    int codigo;
    float dados_sensor[24];

} Est_Lavoura;

int acionamentos (Est_Lavoura irg){

    int sens=0;

    for (int i=0; i<24; i++){
        
        if (irg.dados_sensor[i]<= 0.5){
        sens++;
        }
    }

    return sens;
}

int main (){

    Est_Lavoura lav;

    fgets (lav.tipo_lavoura, 51, stdin);
    scanf ("%d",&lav.codigo);

    for (int i=0; i<24; i++){

        scanf ("%f", &lav.dados_sensor[i]);

    }

    int irrig;
    float gasto;

    irrig = acionamentos (lav);
    gasto = irrig * 1800.00;

    printf("O gasto total com irrigacao foi de R$%.2f", gasto);


    return 0;
}