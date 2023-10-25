#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	int ok,decisao1,escolha1,fat,i,fatr,fat1,num,d,a,b,c,x,sol,fila,resto,vet1[100],vet2[100],vet3[100]; 
	char vet[100];
	
	ok=1;
	while(ok==1)
	{
		decisao1=1;
		while(decisao1==1)
		{
			printf("\n\n Inserir : \n\n\t 1- Fatorial \n\n\t 2- Numero primo? \n\n\t 3- Sequencia fibonaci \n\n\t 4- Distribuição de Soldados \n\n\t 5- Gerar e Ler Vetor \n\n\t 6- Produto Vetorial \n\n Escolha: ");
			scanf("%d",&escolha1);
			
			if(escolha1>0)
			{
				decisao1=0;
			}
			else
			{
				
			}
		}
		
		//Fatorial
		if(escolha1==1)
		{
			fatr=0;
			printf("\n\n Inserir O valor do Fatorial: ");
			scanf("%d",&fat);
			
			fat1=fat;
			for(i=fat-1;i>=1;i--)
			{
				fatr=fat*i;
				fat=fatr;
			}
			
			printf("\n Fatorial de %d e = %d", fat1,fatr);
		}
		else
		{
			//Testar se valor E PRIMO
			if(escolha1==2)
			{
				d=0;
				printf("\n Inserir o numero: ");
				scanf("%d",&num);
				
				for(i=num-1;i>=1;i--)
				{
					if((num%i)==0)
					{
						d++;
					}
					else
					{
						
					}
				}
				
				if(d==1)
				{
					printf("\n VALOR E PRIMO !!!");
				}
				else
				{
					printf("\n VALOR NAO E PRIMO");
				}
			}
			else
			{
				//Fibonaci
				if(escolha1==3)
				{
					printf("\n\n Inserir O valor parar a Sequencia Fibonaci: ");
					scanf("%d",&num);
					
					a=1;
					b=0;
					c=0;
					
					printf("\n\n\n Sequencia: \n\n\t %d ",b);
					x=num;
					while(x>=1)
					{
						c=a+b;
						
						b=a;
						a=c;
						
						printf("\n\t %d",c);
						
						x--;
						
					}
					
					printf("\n\n Fim da Sequencia Fibonaci executada %d vezes",num);
					
					
				}
				else
				{
					if(escolha1==4)
					{
						//Distribuição de Soldados
						printf("\n\n Numeros de Soldados: ");
						scanf("%d",&num);
						
						fila=0;
						x=num;
						sol=1;
						
						while(x>=1)
						{
							x=x-sol;
							sol++;
							fila++;	
						}
						
						if(x<0)
							{
								
							}
							else
							{
								sol--;
							}
						
						printf("\n\n Numero de filas= %d \n\n Numero de Soldados distribuidos: %d ",fila,num);
						
					}
					else
					{
						if(escolha1==5)
						{
							//Gerar e Ler vetor
							for(i=1;i<=15;i++)
							{
								printf("\n Inserir Valor: ");
								scanf("%d",&vet1[i]);
							}
							
							printf("\n\n Vetor GERADO: ");
							
							for(i=1;i<=15;i++)
							{
								printf(" %d ",vet1[i]);
							}
							
							printf("\n\n Vetor INVERTIDO: ");
							
							for(i=15;i>=1;i--)
							{
								printf(" %d ",vet1[i]);
							}
							
							
						}
						else
						{
							if(escolha1==6)
							{
								//Produto vetorial
								
								printf("\n\n Lendo Vetor 1: \n");
								
								for(i=1;i<=5;i++)
								{
									printf("\n Inserir Valor: ");
									scanf("%d",&vet1[i]);
								}
								
								printf("\n\n Lendo Vetor 2: \n");
								
								for(i=1;i<=5;i++)
								{
									printf("\n Inserir Valor: ");
									scanf("%d",&vet2[i]);
								}
								
								for(i=1;i<=5;i++)
								{
									vet3[i]=vet1[i]*vet2[i];
								}
								
								printf("\n\n Vetor Gerado: ");
								
								for(i=1;i<=5;i++)
								{
									printf(" %d ",vet3[i]);
								}
							}
						}
					}
				}
			}
		}
		
		//Fim do programa
		printf("\n\n\n Deseja Sair do Programa? (1- continuar) (outro numero - sair) : ");
		scanf("%d",&ok);
	}
	
}
