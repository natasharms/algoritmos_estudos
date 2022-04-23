/*
Vamos ajudar um professor de educação física a identificar os alunos que alcançaram a meta em um teste de corrida? Para isso, faça o que se pede:
Crie uma função que receba como parâmetro o comprimento de uma pista de corrida (em metros) e o número de voltas que um aluno completou na pista. 
A função deverá retornar a distância total percorrida pelo aluno (em quilômetros).
Faça um programa principal (main) que leia a quantidade de alunos em uma turma. Depois, leia o número de voltas que cada aluno da turma completou na pista de corrida e, 
usando a função desenvolvida anteriormente, imprima a mensagem “Meta alcancada” para os alunos que correram 2 quilômetros ou mais e a mensagem "Meta nao alcancada" para os demais alunos. 
Considere que o comprimento da pista de corrida é de 400 metros.
Observações importantes: É obrigatório o uso do comando “for” na resolução desta questão. Atenção com as conversões entre as unidades de medida. 
Utilize variáveis do tipo "float" para os números reais. O texto impresso na saída não possui acentuação.*/

#include <stdio.h>

float DistanciaTotal (int comp_pista, int num_voltas){

    int dist_metros;
    float dist_km;
    dist_metros=comp_pista*num_voltas; 
    dist_km=dist_metros/1000; //conversão de metro pra km

    return dist_km;
}

int main()
{
    int qtd_alunos, voltas, pista=400;
    float dist_km;
    scanf("%d", &qtd_alunos);

    for (int i =0; i<qtd_alunos; i++){
        scanf ("%d", &voltas);
        dist_km = DistanciaTotal(pista, voltas); 
        if (dist_km>= 2){
            printf ("Meta alcancada");
        }
        else {
            printf ("Meta nao alcancada");
        }
    }
    
    return 0;
}