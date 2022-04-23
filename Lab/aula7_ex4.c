/* Na eleição para o representante dos alunos da sala, apareceram quatro candidatos: Ana, Ari, Eva e Ivan. Faça uma função que receba o número de alunos presentes no dia da eleição e leia o nome do 
candidato em que cada aluno votou. Ao final, exiba (como nos exemplos), o número de votos que cada candidato obteve. Observe que eventuais erros de grafia no nome digitado por um eleitor indicam voto nulo. 
Implemente também a função principal para ler o número de alunos presentes no dia da eleição e para chamar a função criada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAM 50

void minusculas (char s1[]){

    int i;

    for (i = 0; s1[i] != '\0'; i++)
    {
        s1[i] = tolower(s1[i]); 
    }
    
}

int main()
{
    int numAlunos, i;
    char candidato[TAM];
    int totalA=0, totalB=0, totalC=0, totalD=0, totalNulo=0;
    
    scanf("%d", &numAlunos);

    for (i=0; i<numAlunos; i++){
        scanf("%s", candidato);
        minusculas (candidato); // colocar tudo minuscula
        if(strcmp(candidato,"ana")==0){
            totalA++;
        
        }
        else if(strcmp(candidato,"ari")==0){
            totalB++;
        
        }
        else if(strcmp(candidato,"eva")==0){
            totalC++;
            
        }
        else if(strcmp(candidato,"ivan")==0){
            totalD++;
            
        }
        else totalNulo++;
    }

    printf("Ana: %d voto(s)\n", totalA);
    printf("Ari: %d voto(s)\n", totalB);
    printf("Eva: %d voto(s)\n", totalC);
    printf("Ivan: %d voto(s)\n", totalD);
    printf("Nulos: %d voto(s)", totalNulo);

    return 0;
}