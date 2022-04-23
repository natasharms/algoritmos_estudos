#include <stdio.h>
#define M 100
#define N 100

void deslocamento (int a[][N], int b[][N], int k, int n){

    for (int l = 0 ; l<k ; l++){

        for(int c = 0 ; c < k ; c++){

            if (l+n<k){

                b[l][c] = a[l+n][c];
            }

            if (l+n>=k){
                //b[l][c] = a[l-n-1][c];
                b[l][c] = a[l-k+n][c];
            }
            if (l+n<0){

                b[l][c] = a[l+k-(n*-1)][c];
                //b[l][c] = a[l+(n*-1)+1][c];

            }
        }
    }
}

int main (){

    int A[M][N], B[M][N];
    int d, n;
    scanf("%d", &d);
   
    

    for (int l = 0 ; l < d ; l++){
        for(int c = 0 ; c < d ; c++){
        scanf("%d",&A[l][c]);
        }
    } 
    
    scanf("%d", &n);

    deslocamento (A, B, d, n);

    for (int l = 0; l < d; l++) { //para as linhas
      for (int c = 0; c < d; c++) { //para as colunas
        printf("%d ", B[l][c]);
      }
    printf("\n"); //salta uma linha
    }

    return 0;
}