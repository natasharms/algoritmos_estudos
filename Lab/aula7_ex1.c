/* Escreva uma função que receba uma cadeia de caracteres de tamanho máximo 100, e informe se esta cadeia é palíndrome ou não. Uma palavra é dita ser palíndrome se a sequência de seus caracteres da esquerda 
para a direita é igual a sequência de seus caracteres da direita para a esquerda. Ex.: arara, asa, ovo... 
*/

#include <stdio.h>
#include <string.h>
#define TAM 100


int main(){
    char string1[TAM];
    int i, tam;
    int flag = 0;
    
  	scanf("%s", string1); //le string
    
    tam = strlen(string1); // tamanho é igual ao tamanho da própria string
    
    for(i=0;i < tam;i++){
        if(string1[i] != string1[tam-i-1]){ // se a letra for diferente da anterior -> flag 1
            flag = 1;
            break;
   }
}
    
    if (flag==1) {
        printf("A cadeia '%s' nao eh um palindrome.", string1);
    }    
    else {
        printf("A cadeia '%s' eh um palindrome.", string1);
    }
    return 0;
}
