#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int mat[10][10],vet[100],lim1,lim2,lvet;

int main()
{
	int ok,ko,a,b,c,d,i,dec;
	
	srand(time(NULL));
	ok=0;
	while(ok==0)
	{
		ko=0;
		while(ko==0)
		{
			printf("\n Inserir quantidade de linhas da matriz (1 a 20).: ");
			scanf("%d",&lim1);
			printf("\n Inserir quantidade de colunas da matriz (1 a 20): ");
			scanf("%d",&lim2);
			
			if((lim1>=1)&&(lim1<=20)&&(lim2>=1)&&(lim2<=20))
			{
				ko=1;
			}
		}
		
		printf("\n\n - - -> Matriz: \n\n");
		
		for(a=1;a<=lim1;a++)
		{
			for(b=1;b<=lim2;b++)
			{
				
				mat[a][b]=rand()%100;
				
				for(c=lim1;c>=1;c--)
				{
					for(d=lim2;d>=1;d--)
					{
						if((a==c)&&(b==d))
						{
							d--;
						}
						
						if(mat[a][b]==mat[c][d])
						{
							b--;
						}
					}
				}
				
			}
		}
		
		for(a=1;a<=lim1;a++)
		{
			for(b=1;b<=lim2;b++)
			{
				printf(" [ %03d ]", mat[a][b]);
			}
			printf("\n\n");
		}
		
		i=1;
		lvet=lim1*lim2;
		for(a=1;a<=lim1;a++)
		{
			for(b=1;b<=lim2;b++)
			{
				vet[i]=mat[a][b];
				i++;	
			}
		}
		
		printf("\n Entre com 0 para continuar: ");
		scanf("%d",&ok);
	}
}
