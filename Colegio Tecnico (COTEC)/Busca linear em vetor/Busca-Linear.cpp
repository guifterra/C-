#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

//Busca Linear - Guilherme Fabiano Terra
int main()
{
	int x[200],i,o,p,ok,vet;
	p=0;
	ok=0;
	
	while(ok==0)
	{
		printf("\n Inserir um limite para o vetor: ");
		scanf("%d",&vet);
		
		if((vet>=1)&&(vet<=200))
		{
			ok=1;
		}
		else
		{
			ok=0;
		}
	}
	
	for(i=1;i<=vet;i++)
	{
		x[i]=rand()%300;
	}
	for(i=1;i<=vet;i++)
	{
		printf("\n\n\t O valor do vetor na posição %d e = %d ",i,x[i]);
	}
	
	printf("\n\n Quem numero deseja procurar: ");
	scanf("%d",&o);
	
	for(i=1;i<=vet;i++)
	{
		if(x[i]==o)
		{
			printf("\n\n Numero %d encontado em vet %d",o,i);
			p++;
		}
	}
	
	if(p==0)
	{
		printf("\n O valor %d nao foi encontado no vet\n ",o);
	}
	else
	{
		printf("\n\n O valor %d foi encontrado %d vezes no vet \n",o,p);
	}
}
