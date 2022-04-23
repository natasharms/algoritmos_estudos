#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 500

typedef struct {

    char nome [TAM];
    char avenida [TAM];
    char numero [TAM];
    char bairro [TAM];
    char complemento [TAM];
    char cep [TAM];
    char cidade [TAM];
    char uf [TAM];
    char tel_1 [TAM];
    char tel_2 [TAM];

} endereco;

int main()
{
    
    endereco end;

    for (int i=0; i<3; i++){

        fgets (end.nome, 100, stdin);
        fgets (end.avenida, 100, stdin);
        fgets (end.numero, 100, stdin);
        fgets (end.bairro, 100, stdin);
        fgets (end.complemento, 100, stdin);
        fgets (end.cep, 100, stdin);
        fgets (end.cidade, 100, stdin);
        fgets (end.uf, 100, stdin);
        fgets (end.tel_1, 100, stdin);
        fgets (end.tel_2, 100, stdin);
        
        printf ("%s", end.nome);
        printf ("%s", end.avenida);
        printf ("%s", end.numero);
        printf ("%s", end.bairro);
        printf ("%s", end.complemento);
        printf ("%s", end.cep);
        printf ("%s", end.cidade);
        printf ("%s", end.uf);
        printf ("%s", end.tel_1);
        printf ("%s", end.tel_2);

    }

    return 0;
}