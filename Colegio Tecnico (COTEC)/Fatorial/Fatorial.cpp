/*
	Nome: Guilherme Fabiano Terra da Silva
	Fatorial
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int a,i,fat;
	fat=1;
	
	printf("\n inserir um numero: ");
	scanf("%d",&a);
	
	for(i=a;i>=1;i--)
	{
		fat=fat*i;
	}
	
	printf("\n Valor do fatorial: %d",fat);
	
	printf("\n\n Tecle enter para sair . . . ");
	getche();
	
}
