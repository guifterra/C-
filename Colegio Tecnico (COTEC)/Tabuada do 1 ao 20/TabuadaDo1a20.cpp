/*
	Nome: Guilherme Fabiano Terra da Silva
	Tabuadas do 1 ao 20
*/

#include <stdio.h>
#include <conio.h>

int main()

{
	int x,y,z;
	
	for(x=1;x<=20;x++)
		{
			printf("\n - - -> Tabuada: \n");
			
			for(y=1;y<=10;y++)
			{
				z = x*y;
				printf("\n\t %d * %d = %d",x,y,z);
			}
			
			printf("\n");
		}
		
		printf("\n Tecle Enter para sair . . . ");
		getche();
}
