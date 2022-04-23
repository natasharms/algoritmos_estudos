#include <stdio.h>
#define N 50

void ordena(int vet[], int tam)
{
    int i, j, aux;
        for(i = 0; i < tam-1; i++)
        {
            for(j = tam-1; j > i; j--)
            {
                if (vet[j] < vet[j-1] )
                {
                aux = vet[j];
                vet[j] = vet[j-1];
                vet[j-1] = aux;
                }
            }
        }
}

void uniao (int vetA[], int vetB[], int vetC[], int tamAB){

    int i;

    for(i = 0; i < tamAB; i++){ // COPIA DO vetA PARA O vetC
        vetC[i]=vetA[i];
    }

    for(i = 0; i < tamAB; i++){ // COPIA DO vetB PARA O vetC
        vetC[i+tamAB]=vetB[i];        
    }
}

void Intersecao (int vetA[], int vetB[], int vetC[], int tamAB){

    int i, aux=0;

    for(i = 0; i < tamAB; i++){  
        for(int j = 0; j < tamAB; j++){ 
            if (vetA[i]==vetB[j]){

            vetC[aux]=vetA[i];
            aux++;
            }
        }
    }
}

int main (){

    int v1[10], v2[10], vInter[10], vUniao[20];
    int i;

    for(i = 0; i < 10; i++){  // PRENCHE V1
        scanf("%d", &v1[i]);
    }

    for(i = 0; i < 10; i++){  // PREENCHE V2
        scanf("%d", &v2[i]);
    }

    Intersecao (v1, v2, vInter, 10);
    ordena (vInter, 10);

    uniao (v1, v2, vUniao, 10);
    ordena (vUniao, 20);

    printf ("A intersecao dos dois conjuntos eh:\n");
    for(i = 0; i < 10; i++){  // PREENCHE V2
        printf("%d ", vInter[i]);
    }

    printf ("\nA uniao dos dois conjuntos eh:\n");
    for(i = 0; i < 20; i++){  // PREENCHE V2
        printf("%d ", vUniao[i]);
    }

    return 0;
}

