/*
	Nome: Guilherme Fabiano Terra da Silva
	Média de 3 notas
*/

#include <stdio.h>
#include <conio.h>

main(void)
{
	float a,b,c,m;
	float me;
		
	printf("\n Inserir nota a: ");
	scanf("%f", &a);
	
	printf("\n Inserir nota b: ");
	scanf("%f", &b);

	printf("\n Inserir nota c: ");
	scanf("%f", &c);
	
	m = a + b + c;
	me = m/3;
	
	printf("\n Valor da media = %f",me);
	
	if(me>=6){
	
		printf("\n Passou de ano!!!");
		
	}else{
	
		printf("\n Não passou de ano!!!");
	}
	
	printf("\n\n Tecle enter para sair . . . ");
	getche();
}
