
/*
Para contabilizar os empréstimos de livros da biblioteca da escola, a bibliotecária Joana, que já passou em Algoritmos, utiliza uma matriz NxM para armazenar, em cada posição (i,j), a quantidade de empréstimos realizados por alunos da turma i na semana j. Agora, Joana quer saber quantos empréstimos foram realizados em cada semana.

Faça uma função que receba a matriz (de valores inteiros), o número de semanas e o números de turmas. A função deve imprimir a quantidade de empréstimos realizados a cada semana. Além disso, a função precisa retornar a quantidade de semanas em que o número de empréstimos foi inferior a 50.
Faça uma função principal (função main) para declarar a matriz (dimensão máxima 100x100), ler o numero de turmas e semanas, ler os dados dos empréstimos e chamar a função desenvolvida na letra a.
*/
#include <stdio.h>
#include <math.h>
#define tam 100



int main (){

    int matriz [tam][tam];
    int i, j, N, M;
    int somacoluna = 0;

    scanf ("%d", &N);
    scanf ("%d", &M);

    for (i= 0 ; i< N ; i++){
        for(j= 0 ; j< M ; j++){
        scanf("%d",&matriz[i][j]);
        }
    }

    for(j= 0 ; j< M ; j++){
        for (i= 0 ; i< N ; i++){
            somacoluna = somacoluna + matriz[i][j];
        }
    }

    printf("%d\n", somacoluna);
    

    return 0;
}

