/*
	Nome: Guilherme Fabiano Terra da Silva
	Media
*/

#include "stdio.h"
#include "conio.h"

int main(void)
{
	int a,b,c,d,e,M;
	
	printf("\n Inserir valor da P1: ");
	scanf("%d",&a);
	
	printf("\n inserir valor da P2: ");
	scanf("%d",&b);

	printf("\n inserir valor da P3: ");
	scanf("%d",&c);

	printf("\n inserir valor da P4: ");
	scanf("%d",&d);

	printf("\n inserir valor da P5: ");
	scanf("%d",&e);
	
	M=(a+b+c+d+e)/5;
	
	printf("\n\n A media do aluno foi: %d \n", M);
	if(M>6)
	printf("\n O aluno esta aprovado!!");
	else
	printf("\n O alunofoi reprovado!!");
	
	printf("\n\n Tecle Enter para sair . . . ");
	getche();


}
