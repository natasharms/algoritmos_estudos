/*Escreva uma função que receba dois inteiros n1 e n2 como parâmetro e retorna a quantidade de números inteiros ímpares que existem no intervalo fechado entre n1 e n2. 
A função deve funcionar inclusive se o valor de n2 for menor que n1.

Escreva uma função principal (main) que ​leia​ os valores inteiros n1 e n2 e chame​ a função desenvolvida no item anterior e imprima o resultado. */

#include <stdio.h>
#include <stdlib.h>

int achaQtdImpar (int n1, int n2){
    int aux, cont=0, qtd=0;

    //Garantir que o menor valor esteja em n1
    if(n2<n1){
        aux=n1;
        n1=n2;
        n2=aux;
    }
    // Atribuir a cont n1
    cont = n1;

    //Fazendo laço para identificar qual numero de n1 até n2 é impar, se for impar incrementa qtd
    do{
        if (cont%2!=0) {
            qtd++;
        }
        cont++;
    }while(cont<=n2);  
    return qtd;
}

int main(){

    //declarando variaveis
    int n1, n2;

    // lendo valores n1 e n2
    scanf("%d %d", &n1, &n2);
    // imprimindo retorno da função achaQtdImpar
    printf ("%d", achaQtdImpar(n1, n2));
    
    return 0;
}