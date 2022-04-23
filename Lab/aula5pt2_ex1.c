/* A bilheteria de uma casa de shows sempre tem um preço fixo por ingresso e 50% de desconto para meia entrada. Além disso, oferece 5% de desconto sobre o total para clientes que pagam em dinheiro.
a) Faça uma função que receba como parâmetro o preço do ingresso. Para cada cliente, a função deverá ler o numero de ingressos inteiros, 
o número de meia entradas e a forma de pagamento (inteiro 0 para pagamento em dinheiro e 1 para pagamento no cartão), imprimindo o valor a ser pago pelo cliente (já incluindo os descontos). 
A função deverá ser encerrada quando o número de ingressos digitado for zero.
b) Faça um programa (função main) que leia o preco do ingresso e chame a função da letra a. */

#include <stdio.h>

void Ingresso (float preco_ing){

    int num_int, num_meias, pag, total_int, total_meias;
    float precoTotal;
    scanf("%d",&num_int);
    scanf("%d", &num_meias); // as variáveis da condição precisam ser inicializadas antes do laço//
    
    while (num_int>0 || num_meias>0){
        total_int=num_int*preco_ing;
        total_meias=num_meias*(preco_ing/2);
        precoTotal=total_int+total_meias;
        
        scanf("%d", &pag);
            if (pag==0){
                    
            printf ("%.02f\n", precoTotal-(precoTotal*0.05));
            }    
            else {
                printf ("%.02f\n", precoTotal);
            } 
        scanf("%d",&num_int); // ao menos uma variável da condição precisa ser atualizada no interior do laço//
        scanf("%d", &num_meias);
    }   
}

int main() {
    
    float preco;
    scanf("%f", &preco);
    Ingresso (preco);

    return 0;
}