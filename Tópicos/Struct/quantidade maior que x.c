/*
Uma hospital está coletando informações dos seus pacientes para uma pesquisa sobre hábitos alimentares. Para tal, um formulário é preenchido com as seguintes informações do paciente: nome (até 50 caracteres), idade (inteiro que expresse o número de anos de vida) e um vetor de tamanho 7 de inteiro, onde o paciente deve indicar, para cada dia da semana (segunda a domingo), quantas vezes toma refrigerante.

 

a) Crie uma estrutura chamada Paciente com os seguintes campos: 

char nome[51];

int idade;

int refrigerante[7];

b) Faça uma função que receba como parâmetros uma estrutura com os dados de um paciente e um inteiro k e imprima quantos dias da semana o paciente toma refrigerante mais de k vezes.

c) Faça um programa que leia os dados de um paciente em uma estrutura, um inteiro X e, a partir de uma chamada da função do item anterior, imprima o número de dias em que o paciente toma refrigerante mais do que X vezes.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {

    char nome[51];
    int idade;
    int refrigerante[7];

} Paciente;

void ref (Paciente p, int k){

    int cont=0;

    for (int i = 0; i < 7; i++) {

        if (p.refrigerante[i]>k){

            cont++;
        }
    }

    printf("%s toma mais que %d refrigerantes %d vezes por semana", p.nome, k, cont);

}

int main (){

    Paciente p;
    int x;

    fgets (p.nome, 51, stdin);
        p.nome[strcspn(p.nome, "\n")] = 0;
    scanf ("%d%*c", &p.idade);
    for (int i = 0; i < 7; i++) {
        scanf("%d%*c", &p.refrigerante[i]);
    }
    scanf ("%d%*c", &x);
    ref (p, x);

    return 0;
}