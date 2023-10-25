#include "stdio.h"
#include "conio.h"

main(void)

{
	int a,b,c;
	
		printf(" \n Inserir valor a: ");
		scanf("%d", &a);
		
		printf(" \n Inserir valor b: ");
		scanf("%d", &b);
		
		c = a + b;
		
		printf("\n Valor da soma e: %d", c);
		
		printf(" \n\n Tecle Enter para sair . . . ");
		getche();
}
