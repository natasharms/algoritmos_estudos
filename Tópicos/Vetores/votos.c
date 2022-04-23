/* Uma empresa quer decidir o planejamento para 2020 por meio de um sistema implementado na linguagem C. Neste sistema, cada usuário entra com a sua opinião: planejamento 1, 2 ou 3; 
e o seu nível de experiência: 1, 2 ou 3. Durante a votação os resultados são armazenados em dois vetores: o vetor P de inteiros que armazena o planejamento escolhido pelo gestor e o vetor N que armazena 
a sua experiência. Por exemplo, considere que o primeiro gestor escolha o planejamento 1 e tem Nível 3; o segundo gestor escolhe o planejamento 2 e possui nível 1; 
e o terceiro gestor escolha o planejamento 3 e tem Nível 2, teríamos os seguintes vetores parcialmente preenchidos:
P  =  1  2  3 · · ·
N  =  3  1  2 · · ·
A regra para computação de cada voto considera o nível de experiência do gestor: um voto de um gestor do Nível 3 equivale a 3 votos, um voto do Nível 2 equivale a 2 votos e um voto do Nível 1 equivale a apenas um voto.
Assim, considerando os vetores acima teríamos uma apuração parcial com 3 votos para o planejamento 1, 1 voto para o planejamento 2 e 2 votos para o planejamento 3. Para esta questão, 
assuma que todos os valores digitados pelos funcionários  são válidos. Ou seja, todos os votos são  inseridos corretamente.
a) Faça uma função que receba por parâmetro os vetores P e N, além disso outro vetor R de tamanho 3 que deverá ser preenchido. No vetor R, a primeira posição será o total de votos no planejamento 1, 
a segunda posição será o total de votos no planejamento 2 e a terceira posição será total de votos no planejamento 3.
b) Faça o programa principal que leia as informações necessárias para os 10 funcionários, utilize a função do item anterior e imprima a quantidade de votos em cada um dos planejamentos.*/

#include <stdio.h>
#define TAM 10

void VetorVotos (int vetP[], int vetN[], int tam, int vetR[3]){
    
    int i, somaP1=0, somaP2=0, somaP3=0; // somaP = número de votos de planejamento
    
    for(i = 0; i < TAM; i++){
         if (vetP[i]==1){
             somaP1+=vetN[i]; // somaP=0+vetN -> aplica o peso de N
         }
         if (vetP[i]==2){
             somaP2+=vetN[i];
         }
          if (vetP[i]==3){
             somaP3+=vetN[i];
         }
    }
    vetR[0]= somaP1;
    vetR[1]= somaP2;
    vetR[2]= somaP3;
}

int main()
{
    int i, vetP [TAM], vetN [TAM], vetR[3];
    for(i = 0; i < TAM; i++) // ler informações necessárias
        {
        scanf("%d", &vetP[i]); // planejamento
        }
        
    for(i = 0; i < TAM; i++) // ler informações necessárias
        {
        scanf("%d", &vetN[i]); // nivel de experiência
        }
    VetorVotos (vetP, vetN, TAM, vetR); // chamada de função
    printf("%d %d %d", vetR[0], vetR[1], vetR[2]); // impressão de quantidade de votos

return 0;
}