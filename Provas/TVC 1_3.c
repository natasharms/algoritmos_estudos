/* O pai de um garotinho decidiu fazer um dispositivo para ajudá-lo a contar conchas que pega na praia. Cada vez que ele encontra uma concha em formato de cone (univalve) ele aperta um botão que envia um código “1” para o dispositivo. 
Quando encontra uma conha em formato de ostra/marisco (bivalve) ele aperta um botão que envia um código “2”. Quando ele acha uma pedra bonita ou qualquer outro objeto que acha interessante, ele aperta um botão que envia o código “3”. 
O menino encerra o passeio ao apertar o botão desligar, que envia o código “0” para o dispositivo.
Faça uma função que lê os códigos até que seja digitado o código "0" e imprima quantas conchas de cada tipo foram colhidas quando o passeio terminar.
Faça um programa que chame a função criada no item 1.
*/

#include <stdio.h>

void ContaConcha (){

    int univalve=0, bivalve=0, outros=0, cod;
    scanf ("%d", &cod);

    while (cod!=0){

        switch (cod){
            case 1:
            univalve++;
            break;
            case 2:
            bivalve++;
            break;
            case 3:
            outros++;
            break;
        }
        scanf ("%d", &cod);
    }

    printf ("univalves: %d\n", univalve);
    printf ("bivalves: %d\n", bivalve);
    printf ("outros: %d\n", outros);

}

int main()
{
    ContaConcha ();

    return 0;
}


