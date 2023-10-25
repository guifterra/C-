#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i,asc,tam,j;
	char alfa[100],afla[100],vet[100];
	
	// Gerando alfabeto MAIUSCULO
	asc=65;
	for(i=1;i<=26;i++)
	{
		alfa[i]=asc;
		asc++;
	}
	
	// Gerando alfabeto minusculo
	asc=97;
	for(i=27;i<=26+26;i++)
	{
		alfa[i]=asc;
		asc++;
	}
	
	// Imprime alfabto
	printf("\n - - -> ALFABETO: \n\n");	
	for(i=1;i<=26+26;i++)
	{
		printf(" %c",alfa[i]);	
	}
	
	// Gerando alfabeto invertido MAISCULO
	asc=65+25;
	for(i=1;i<=26;i++)
	{
		afla[i]=asc;
		asc--;
	}
	
	// Gerando alfabeto invertido minusculo
	asc=97+25;
	for(i=27;i<=26+26;i++)
	{
		afla[i]=asc;
		asc--;
	}
	
	// Imprime alfabto
	printf("\n\n - - -> ALFABETO INVERTIDO: \n\n");	
	for(i=1;i<=26+26;i++)
	{
		printf(" %c",afla[i]);	
	}
	
	// Leitura de frase, carcter por caracter
	printf("\n\n Entre com um texto (Enter para finalizar): ");	
	i=1;
	while((vet[i]=getche())!=13)
	{
		i++;
		tam=i-1;
	}
	
	// Criptografia por substituição simples
	for(i=1;i<=tam;i++)
	{
		for(j=1;j<=26+26;j++)
		{
			if(vet[i]==alfa[j])
			{
				vet[i]=afla[j];
				j=90;
			}
		}
	}
	
	// Imprime frase criptografada
	printf("\n\n - - -> Frase criptografada: ");	
	for(i=1;i<=tam;i++)
	{
		printf("%c",vet[i]);	
	}
	printf("\n");	
}
