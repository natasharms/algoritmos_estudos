//Elabore uma função que receba uma string e um caractere e remova toda ocorrência do caractere na string.//

#include <stdio.h>
#include <string.h>
#define TAM 500

 
int main()
{
  	char str[TAM], ch;
  	int i, len, j;
 
  	fgets(str, TAM, stdin); //le string
  	ch = getchar(); // le o caractere
      
	len = strlen(str); //lê o tamanho da strng
	   	
  	for(i = 0; i < len; i++) 
	{
		if(str[i] == ch) 
		{
			for(j = i; j < len; j++)
			{
				str[j] = str[j + 1]; // o caracter é substituído pelo seu sucessor
			}
			len--; // decrementa pra não deixar de ler o número seguinte ao que caracter removido
			i--;	
		} 
	}	
	puts(str);

	
  	return 0;
}
