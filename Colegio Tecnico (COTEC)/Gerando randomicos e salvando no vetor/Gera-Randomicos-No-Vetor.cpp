#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int ok,ko,i,vet[50],dim,x,l,r,m,j;
	ok=0;
	srand(time(NULL));
	
	// Loop para executar até o Usuário querer sair
	while(ok==0)
	{
		ko=0;
		
		// Leitura de quantidade de elementos
		while(ko==0)
		{
			printf("\n Inserir quantidade de elementos de 1 a 20 para o vetor: ");
			scanf("%d",&dim);
			
			// Limita entrada de 1 a 20
			if((dim>=1)&&(dim<=20))
			{
				ko=1;
			}
			else
			{
				
			}
		}
		
		// Atribui valores randômicos
		for(i=1;i<=dim;i++)
		{
			vet[i]=rand()%25;
		}
		
		// Imprime
		for(i=1;i<=dim;i++)
		{
			printf("\n\n O valor do vet em [ %d ] e = %d",i,vet[i]);
		}
		
		printf("\n\n Deseja exe novamente? 0-sim: ");
		scanf("%d",&ok);
		
		
	}
}
