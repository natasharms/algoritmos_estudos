/* Em uma república de estudantes, após cada compra de supermercado, os estudantes anotam na nota fiscal seu nome (Arthur, Bruno, Carlos ou Diego) para identificar itens pessoais ou a palavra "Todos" 
para identificar bens comuns cujo custo deve ser dividido. 
Faça um programa que leia do teclado quantas linhas serão digitadas e os seguintes dados de cada item da nota fiscal: quantidade do produto, preço unitário e identificação de quem o adquiriu. 
O programa deverá imprimir o valor total que cada estudante deverá pagar.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

int buscaString(char s1[]) {
    char strA[TAM] = "Arthur";
    char strB[TAM] = "Bruno";
    char strC[TAM] = "Carlos";
    char strD[TAM] = "Diego";
    char strT[TAM] = "Todos";
    if(strcmp(s1, strA) == 0){
        return 0;
    }
    if(strcmp(s1, strB) == 0){
        return 0;
    }
    if(strcmp(s1, strC) == 0){
        return 0;
    }
    if(strcmp(s1, strD) == 0){
        return 0;
    }
    if(strcmp(s1, strT) == 0){
        return 1;
    }
    return -1;
}

int main()
{
    char morador[TAM];
    int i, linhas;
    double qtd_produto, preco;
    double totalA=0, totalB=0, totalC=0, totalD=0;
    int flag = 0; //variável de controle
    scanf("%d", &linhas); //lê quantas linhas vão ser digitadas
        if (linhas<=0)
        {
            flag=1;
        }else{
            for (i=0; i<linhas; i++){
                scanf("%lf", &qtd_produto); // lê a quantidade do produto
                scanf("%lf", &preco); // lê o preço do produto
                scanf("%s", morador); // lê identificação de quem o adquiriu
                if (qtd_produto<=0){
                    flag=2;
                }
                if (preco<=0){
                    flag=3;
                }
                if(buscaString(morador)==-1){ // chama a função para comparar a string lida do teclado com os moradores
                    flag=4;
                }
                if(strcmp(morador,"Arthur")==0){ // compara a string morador com o nome, se retornar 0 (true) faz a conta
                    totalA=totalA+(preco*qtd_produto); 
                }
                if(strcmp(morador,"Bruno")==0){ // compara a string morador com o nome, se retornar 0 (true) faz a conta
                    totalB=totalB+(preco*qtd_produto);
                }
                if(strcmp(morador,"Carlos")==0){ // compara a string morador com o nome, se retornar 0 (true) faz a conta
                    totalC=totalC+(preco*qtd_produto);
                }
                if(strcmp(morador,"Diego")==0){ // compara a string morador com o nome, se retornar 0 (true) faz a conta
                    totalD=totalD+(preco*qtd_produto);
                }
                if(strcmp(morador,"Todos")==0) // compara a string morador com todos, se retornar 0 (true) faz a conta
                {
                    totalA=totalA+((preco*qtd_produto)/4); // atualiza o totalA com o valor da divisão
                    totalB=totalB+((preco*qtd_produto)/4);
                    totalC=totalC+((preco*qtd_produto)/4);
                    totalD=totalD+((preco*qtd_produto)/4);
                }  
            }
        }
        if(flag==0){
            printf("Total do Arthur: %.2lf\n", totalA);
            printf("Total do Bruno: %.2lf\n", totalB);
            printf("Total do Carlos: %.2lf\n", totalC);
            printf("Total do Diego: %.2lf", totalD);
        }else{
            if (flag==1)
            {
                printf("ERRO: Quantidade incorreta");
            }
            if (flag==2)
            {
                printf("ERRO: Quantidade de itens incorreta");
            }
            if (flag==3)
            {
                 printf("ERRO: Valor incorreto");
            }
            if (flag==4)
            {
                printf("ERRO: Nome incorreto");
            }
        }
       
    return 0;
}