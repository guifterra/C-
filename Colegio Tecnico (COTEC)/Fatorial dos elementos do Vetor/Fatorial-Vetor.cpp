#include <stdio.h>
#include <conio.h>

int main()
{
	int vetor[10],a,fat,i;
	fat=1;
	
	printf("\n - - -> VETOR: \n");
	for(a=0;a<=9;a++)
	{
		printf("\n\t Inserir valor: ");
		scanf("%d",&vetor[a]);
	}
	
	printf("\n\n - - -> Fatorial de cada numero inserido: \n");
	a=0;
	for(a=0;a<=9;a++)
	{
		fat=1;
		for(i=vetor[a];i>=1;i--)
			{
				fat=fat*i;
			}
			printf("\n\t Valor do fatorial do elemento %d : %d \n",(a + 1),fat);
	}
	
	printf("\n\n Tecle Enter para sair . . . ");
	getche();
}
