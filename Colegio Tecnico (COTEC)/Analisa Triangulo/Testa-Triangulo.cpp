#include <stdio.h>
#include <conio.h>

int main(void)

{
	int a,b,c;
	
	printf("\n Inserir o lado a do triangulo: ");
	scanf("%d",&a);
	
	printf("\n Inserir o lado b do triangulo: ");
	scanf("%d",&b);
	
	printf("\n Inserir o lado c do triangulo: ");
	scanf("%d",&c);
	
	if(a==b)
		{
			if(c==b)
				{
					printf("\n\n o triangulo e equilatero");
				}
				else
				{
					printf("\n\n o triangulo e isoceles");
				}
		}
		else
		{
			if((b!=c) && (c!=a))
				{
					printf("\n\n o triangulo e escaleno");
				}
				else
				{
					printf("\n\n nao e um triangulo");
				}
		}
		
		printf("\n\n Tecle Enter para sair . . . ");
		getche();
}

