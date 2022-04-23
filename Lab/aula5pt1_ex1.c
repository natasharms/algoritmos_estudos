/*Escreva uma função que receba os valores inteiros n1, n2 e x como parâmetro, e imprima os múltiplos de x que pertencem ao intervalo fechado entre n1 e n2, em ordem crescente.
Escreva uma função principal (main) que ​leia​ os valores inteiros n1,n2 e x. Por fim, chame a função desenvolvida no item anterior.
Dica: intervalo fechado inclui-se os extremos.*/

#include <stdio.h>
#include <stdlib.h>

void MultiplosX (int n1, int n2, int x) {

    int cont=n1;

    do
    {
        if (cont%x==0) {
            printf("%d ",cont);
        }
        cont++;
    } while(cont>=n1 && cont<=n2);  
    
}

int main(){
    int N1, N2, X;
    scanf("%d", &N1);
    scanf("%d", &N2);
    scanf("%d", &X);
    MultiplosX (N1, N2, X);

    return 0;
}
