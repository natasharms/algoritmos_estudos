#include <stdio.h>
#define M 100
#define N 100

void espelha (int a[][N], int b[][N], int k){

    for (int l = 0 ; l<k ; l++){

        for(int c = 0 ; c < k ; c++){

            b[l][c] = a[k-l-1][c];

        }
    }
}

int main (){

    int A[M][N], B[M][N];
    int d;
    scanf("%d", &d);
    

    for (int l = 0 ; l < d ; l++){
        for(int c = 0 ; c < d ; c++){
        scanf("%d",&A[l][c]);
        }
    } 

    espelha(A, B, d);

    for (int l = 0; l < d; l++) { //para as linhas
      for (int c = 0; c < d; c++) { //para as colunas
        printf("%d ", B[l][c]);
      }
    printf("\n"); //salta uma linha
    }

    return 0;
}