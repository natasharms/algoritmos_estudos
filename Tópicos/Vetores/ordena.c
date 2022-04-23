/*
Implemente uma função que receba um vetor de inteiros e seu tamanho e ordene-o.
*/

#include <stdio.h>
#define TAM 5

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

int main()
{
    int i, vet [TAM];
    for(i = 0; i < TAM; i++)
        {
        scanf("%d", &vet[i]);
        }
    ordena(vet, TAM);
        for(i = 0; i < TAM; i++)
        {
        printf("%d\n",vet[i]);
        }
return 0;
}