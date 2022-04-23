/* Uma empresa produz caixas de papelão para outras empresas. Dependendo das dimensões da caixa, a quantidade mínima necessária por pedido varia:
se o perímetro da base da caixa (considerando largura e comprimento)  tiver até 140 cm e a altura for inferior ou igual a 25 cm, o pedido  mínimo deve ser de 400 unidades;
se o perímetro tiver até 140 cm e a altura for no máximo 100 cm, o pedido mínimo é de 200 unidades; para quaisquer dimensões acima dos limites especificados, o pedido mínimo é de 100 unidades.
a) Faça uma função que receba como parâmetro largura, comprimento e altura da caixa e retorne a quantidade mínima de unidades que o pedido deve ter.
b) Elabore um programa que leia do teclado os valores indicados pelo cliente (largura, comprimento e altura da caixa) e chame a função da letra (a) para obter a quantidade mínima necessária para o pedido. 
O programa deve imprimir uma mensagem indicando este valor.
Observação: 
Utilize variáveis do tipo "float" para os números reais. 
O texto impresso na saída não possui acentuação ou cedilha. */


#include <stdio.h>

int QuantidadeMinima (float largura, float comprimento, float altura){

    int qtd, perimetro;
    perimetro = (largura*2) + (comprimento*2);

    if (perimetro<=140){

        if (altura<=25){
            qtd=400;
        }

        if (altura>25 && altura <= 100){
            qtd=200;
        }
        else{   // ERREI - ERA PRA SER if (altura>100) **********************************
            qtd=100;
        }
    }
    else {
        qtd=100;
    }
    return qtd;
}


int main()
{
    float larg, comp, alt;
    scanf ("%f", & larg );
    scanf ("%f", & comp );
    scanf ("%f", & alt );
    printf("Caixas %.1fcm x %.1fcm x %.1fcm: minimo de %d unidades.", larg, comp, alt, QuantidadeMinima (larg, comp, alt));

    return 0;
}