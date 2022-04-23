#include <stdio.h>
#include <stdlib.h>

void FaseInd (int anoatual, int anonascimento) 
{
   int idade;
   idade = anoatual-anonascimento;
   printf("%d \n", idade);

      if (idade <=3){
         printf ("Bebê");
      }
   
      if (idade >=4 && idade <=10){
         printf ("Criança");
      }

      if (idade >=11 && idade <=18){
         printf ("Adolescente");
      } 
   
      if (idade >=19 && idade <=50){
         printf ("Adulta");
      }

      if (idade >=51){
         printf ("Idosa");
      } 

}

int main() 
{

  int anoat;
  int anonas;
   scanf ("%d", &anoat);
   scanf ("%d", &anonas);
   FaseInd (anoat, anonas);
  return 0;
}