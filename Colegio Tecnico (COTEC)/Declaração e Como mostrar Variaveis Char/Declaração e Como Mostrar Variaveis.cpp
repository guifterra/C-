/*
	Nome: Guilherme Fabiano Terra da Silva
	Ler caracter e mostrar sucessor
*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch;
	printf("\n Digite algum caractere: ");
	ch= getche();
	
	printf("\n\n A tecla que voce pressionou e %c",ch);
	printf("\n\n Sua sucessora ASCII e: %c",ch+1);
	
	printf("\n\n Tecle Enter para sair . . . ");
	getche();
}
