
/*Solicitaram para que você construísse um programa simples de criptografia. Este programa deve possibilitar enviar mensagens codificadas sem que alguém consiga lê-las. O processo é muito simples. São feitas três passadas em todo o texto.
Na primeira passada, somente caracteres que sejam letras minúsculas e maiúsculas devem ser deslocadas 3 posições para a direita, segundo a tabela ASCII: letra 'a' deve virar letra 'd', letra 'y' deve virar caractere '|' e assim sucessivamente. Na segunda passada, a linha deverá ser invertida. Na terceira e última passada, todo e qualquer caractere, exceto espaço, a partir da metade em diante (truncada) devem ser deslocados uma posição para a esquerda na tabela ASCII. Neste caso, 'b' vira 'a' e 'a' vira '`'.
Por exemplo, se a entrada for “Texto #3”, o primeiro processamento sobre esta entrada deverá produzir “Wh{wr #3”. O resultado do segundo processamento inverte os caracteres e produz “3# rw{hW”. Por último, com o deslocamento dos caracteres da metade em diante, o resultado final deve ser “3# rvzgV”.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define TAM 50

void loop_1 (char msg[]){ // Na primeira passada, somente caracteres que sejam letras minúsculas e maiúsculas devem ser deslocadas 3 posições para a direita

    int i;
    

    for (i = 0; msg[i] != '\0'; i++){
        if (isalpha(msg[i])!=0){
            msg[i] =msg[i] + 3;
        }
    }
}

void loop_2 (char msg[])  // Na segunda passada, a linha deverá ser invertida.
{  
    int i, len, temp;  
    len = strlen(msg);  
      
    for (i = 0; i < len/2; i++)  
    {  
        temp = msg[i];  
        msg[i] = msg[len - i - 1];  
        msg[len - i - 1] = temp;  
    }  
}

void loop_3 (char msg[]){ // Na terceira e última passada, todo e qualquer caractere, exceto espaço, a partir da metade em diante (truncada) devem ser deslocados uma posição para a esquerda na tabela ASCII.

    int i;

    for (i = 0; msg[i] != '\0'; i++){

            if (msg[i] != ' ' && i>((strlen(msg)-1)/2)){
                
                msg[i] = msg[i] -1;

            }
    }
}

int main (){

    char cripto[TAM];
    int n, i;

    scanf("%d%*c", &n);

    for (i = 0;i < n; i++){

        fgets (cripto, TAM, stdin);
        loop_1 (cripto);
        loop_2 (cripto);
        loop_3 (cripto);
        printf ("%s", cripto); 
    }


    return 0;
}