#include <stdio.h>                        

float Reajuste(float s, float t)  
{
   float result;
   if (s<=0 || t<=0){
      return 0;
   }

   if(t<=1){
      result= s + (s*0.1); //1.1*s
   }
     
   if(t>1){
      result= s+ (s*0.2);
   }
    

   return result;  
}

int main () 
{
   float sal;
   float temp;
   scanf("%f ", &sal);
   scanf("%f", &temp);
   float var_reajuste;
   var_reajuste = Reajuste(sal, temp);
   printf ("%f", var_reajuste);
   return 0;
}