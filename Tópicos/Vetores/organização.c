#include <stdio.h>
#define N 100

void Preenche_Repetidos (int V[], int n){

    int i, j;

    for(i = 0; i < n; i++){  // PRENCHE O VETOR
        scanf("%d", &V[i]);

        for (j = 0; j < i; j++){ // CHECA SE É REPETIDO
            if (V[j]==V[i]){
              scanf("%d", &V[i]);  
            }
        }
    }
}

void ParesImpares (int V[], int n){

    int i, par=0, imp=0;
    int VP[par], VI[imp];

    for(i = 0; i < n; i++){
        if (V[i]%2==0){
            VP[par] = V[i]; // vetor de pares
            par++;
        }
        else {
            VI[imp] = V[i]; // vetor de ímpares
            imp++;
        }
    }

    for(i = 0; i < par; i++){ // COPIA DO VP PARA O V
        V[i]=VP[i];
    }

    for(i = 0; i < imp; i++){ // COPIA DO VI PARA O V
        V[i+par]=VI[i];
    }

}

int main (){

    int n;
    scanf ("%d", &n);
    int  V1[n];

    Preenche_Repetidos (V1, n);
    printf ("Impressao do vetor apos a leitura\n");
    
        for(int i = 0; i < n; i++)
            {
            printf("vet[%d] = %d\n", i, V1[i]);
            }
        
    ParesImpares (V1, n);
    printf ("Vetor apos a reorganizacao\n");

        for(int i = 0; i < n; i++)
            {
            printf("vet[%d] = %d\n", i, V1[i]);
            }

    return 0;
}
    