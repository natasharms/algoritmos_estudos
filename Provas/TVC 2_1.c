/*
Um aluno de algoritmos resolveu combinar os nomes de colegas para dar nomes a personagens de uma história que está escrevendo. Para tal, ele criou algumas regras para usar no processo de geração de nomes a partir de duas strings S1 e S2 em uma string S3:

Regra 1: um caractere c1 é maior que um outro c2 se c1 tem código ASCII maior que código ASCII de c2;
Regra 2: dadas duas strings S1 e S2 como nomes de duas pessoas, o nome S3 resultante da combinação será formado pelos maiores caracteres de cada posição;
Regra 3: se numa dada posição das duas strings houver empate (o mesmo caractere nas duas), na string resultante deve ser inserido um espaço;
Regra 4: se as strings S1 e S2 têm tamanhos diferentes, todos os caracteres da maior string em posições após o último caractere da menor string são copiados para a string resultante S3.
Por exemplo: se S1 = "Josias Augusto" e S2 = "Marilena", a string resultante S3 = "Mos lsnaugusto".

Para ajudar a resolver o problema do aluno, você foi chamado a implementar o que segue:

a) Uma função que recebe duas strings de no máximo 100 caracteres com os nomes e uma terceira string e monta, nesta terceira string, o nome formado considerando a aplicação das regras de 1 a 4 sobre as duas primeiras strings dos parâmetros da função.

b) O programa principal, que lê duas strings e imprime a string montada a partir da chamada da função do item a.

Obs 1: Se a leitura das duas strings for feita usando a função fgets, remova o caractere '\n' armazenado no final de cada string.
Obs 2: a impressão deve ser feita dentro do programa principal, não na função do item a.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define t 100

void novonome (char s1[t], char s2[t], char s3[t]){

    int len =strlen(s1)+strlen(s2);

    for (int i=0; i<len; i++){

        if(strcmp(s1[i], s2[i])>0){ // s1>s2

            s3[i]=s1[i];

        }
        if(strcmp(s1[i], s2[i])<0){ // s2>s1

            s3[i]=s2[i];

        }
        if (strcmp(s1[i], s2[i])==0){ // s1=s2

            s3[i]=' ';

        }
    }

    if (strlen(s1)<strlen(s2)){ //s1 é menor que s2
            for (int j=strlen(s1); s2[j]!='\0'; j++){ 
            s3[j]=s2[j];
        }
    }

    if (strlen(s1)>strlen(s2)){ //s2 é menor que s1
        for (int j=strlen(s2); s1[j]!='\0'; j++){

            s3[j]=s1[j];
        }
    }
}

int main (){

    char s1 [t], s2[t], s3[t];

    fgets(s1, t, stdin);
    fgets(s2, t, stdin);

    novonome (s1[t], s2[t], s3[t]);

    printf("%s", s3);

    return 0;
}