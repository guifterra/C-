/*
	Nome: Guilherme Fabiano Terra da Silva
	Distribuição de soldados em filas (Cada fila é a anterior + 1)
*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int f,n,sol;
	
	printf("\n Inserir o numero de soldados: ");
	scanf("%d",&n);
	
	sol=n;
	f=1;
	
	while(sol>f)
	{
		sol=sol-f;
		f=f+1;
	}
	printf("\n\t o numero de soldados total= %d \n",n);
	
	printf("\n\t o numero de filas = %d\n",f);
	
	printf("\n Tecle Enter para sair . . . ");
	getche();
}
