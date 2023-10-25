/*
	Nome: Guilherme Fabiano Terra da Silva
	PAR ou IMPAR
*/

#include <stdio.h>
#include <conio.h>

main()

{
	int a;
	
	
	printf("\n Entre com um valor: ");
	scanf("%d",&a);
	
	if((a%2)==0){
			
		printf("\n par \n");
			
	}else{
			
		printf("\n impar \n");
	}
		
	printf("\n Tecle enter para finalizar . . .");
	getche();
	
}
