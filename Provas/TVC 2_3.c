/*
Uma oficina atende veículos de duas marcas 1 e 2. Os problemas dos veículos podem ser agrupados em problemas elétricos (código 10), mecânicos (código 20) e de suspensão (código 30). Para ajudar o gerente da oficina, sua tarefa é registrar o código da marca e o código que indica a natureza do problema de um conjunto de atendimentos que ocorreram em certa data em uma estrutura e responder o que se pede. 

a) Defina uma estrutura para armazenar os dados de 10 atendimentos, registrando código da marca dos veículos e código do problema para cada atendimento. Os atendimentos ocorreram numa mesma data, logo registre na estrutura o dia e mês em que os atendimentos ocorreram. Ou seja, nesta estrutura deve ser possível registrar:

Dia (inteiro),
Mês (inteiro),
Código da marca de cada veículo atendido (vetor de inteiros), e
Código do problemas de cada veículo atendido (vetor de inteiros).
b) Construa uma função que receba a estrutura preenchida e, considerando os atendimentos a todos os veículos, calcule e retorne o percentual de atendimentos relacionados a problemas elétricos na marca 2.

c) Construa um programa que leia do teclado os dados previstos para a estrutura, armazene-os, chame a função desenvolvida no item b) e imprima o valor retornado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define t 10

typedef struct {

    int dia;
    int mes;
    int marca[t];
    int problema[t];

} oficina;

float percentual (oficina atd){ 

    float perc=0, p=0;

    for (int i=0; i<t; i++){

        if (atd.marca[i]==2 && atd.problema[i]==10){

            p++;

        }
    }

    perc=(p/t)*100;

    return perc;
}

int main (){

    oficina a;

    scanf("%d%*c",&a.dia);
    scanf("%d%*c",&a.mes);

    for (int i=0; i<t; i++){

        scanf("%d%*c",&a.marca[i]);
        scanf("%d%*c",&a.problema[i]);

    }

    float p = percentual (a);

    printf("Data: %d/%d - Marca 2, percentual de atendimentos com problema eletrico = %.1f%%", a.dia, a.mes, p);

    return 0;
}