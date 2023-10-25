/*
	Nome: Guilherme Fabiano Terra da Silva
	Sequencia de Fibonacci
*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b,c,n,x;
	
	a=0;
	b=1;
	c=0;
	x=1;

	printf("\n Deseja realizar a sequencia quantas vezes? Quantidade: ");
	scanf("%d",&n);
	
	while(x<=n)
	{
		c=a+b;
			
		a=b;
			
		b=c;
			
		x++;
			
		printf("\n\t O numero da sequencia = %d \n",c );	
	}
	
	printf("\n Tecle Enter para sair . . . ");
	getche();
}
