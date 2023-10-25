/*
	Nome: Guiherme Fabiano Terra da Silva
	Fatorial + Primo
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
	int a,b,i,fat,d;
	fat=1;
	d=0;
	
	printf("\n inserir um numero: ");
	scanf("%d",&a);
	
	for(i=a;i>=1;i--)
	{
		fat=fat*i;
	}
	
	printf("\n\n Valor do fatorial: %d",fat);
	
	for(b=fat;b>=1;b--)
	{
		if((a%b)==0)
		{
			d = d +1;
		}		
	}
	
	if(d==2)
	{
		printf("\n\n EH primo\n\n");
		
	}else{
		
		printf("\n\n Nao EH primo\n\n");
	}
	
	printf(" Tecle Enter para sair . . . ");
	getche();
	
		
		
	
	
	
	
	
	
	
}
