/*
	Nome: Guilherme Fabiano Terra da Silva
	PAR ou IMPAR, podendo ser executado X vezes
*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int a,ok;
	
	ok=0;
	
	// laço while do programa
	while(ok==0)
	{
		printf("\n Entre com um valor: ");
		scanf("%d",&a);
		
	//if de resultado par ou impar
		if((a%2)==0)
		{
			printf("\n par \n");
			printf("\n deseja exe novamente digite 0 - sim : ");
			scanf("%d",&ok);
			
		}else{
			
			printf("\n impar \n");
			printf("\n deseja exe novamente digite 0 - sim : ");
			scanf("%d",&ok);
		}
	}
	//fim do programa
}
