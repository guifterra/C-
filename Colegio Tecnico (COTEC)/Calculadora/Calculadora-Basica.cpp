#include "stdio.h"
#include "conio.h"

int main (){
	
	int a,b,decisao,calc;
	float calc1;
	
	printf("\n - - - Calculadora - - - \n\n\n 1- Soma \n 2- Subtracao \n 3- Multiplicacao \n 4- Divisao\n\n");
	printf(" Inserir decisao: ");
	
	scanf("%d",&decisao);
	
	printf("\n\n Determinar a variável a: ");
	scanf("%d",&a);
	
	printf("\n\n Determinar a variável b: ");
	scanf("%d",&b);
	
	if (decisao == 1){
		
	// Soma
	
	calc = a + b;
	printf("\n\n %d + %d = %d",a,b,calc);
	
	}else{
		if (decisao == 2){
			
		// Subtração
		
		calc = a - b;
		printf("\n\n %d - %d = %d",a,b,calc);
		
		}else{
			if (decisao == 3){
				
			// Multiplicação
			
			calc = a * b;
			printf("\n\n %d x %d = %d",a,b,calc);
			
			}else{
				if (decisao == 4){
				
				// Divisao
				
				calc1 = a / b;
				printf("\n\n %d / %d = %2.f",a,b,calc1);
					
				}else{
					
				// Nenhuma das opções
				
				printf("\n\n Nenhuma das opcoes foi escolhida \n Fechando . . .");
				
				}
				
			}
				
		}
		
	}
	
	
	
}
