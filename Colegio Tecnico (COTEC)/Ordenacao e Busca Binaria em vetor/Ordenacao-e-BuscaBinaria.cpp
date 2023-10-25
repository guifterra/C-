#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int vet[50],tam;

// Declaracao de funções
void func1();
void func2();
void func3();

int main()
{
	int ko,ok,i,dim,j,escolha,cescolha,ini,fim,found,E;
	ok=0;
	srand(time(NULL));
	
	// Loop para executar quantas vezes o usuario quiser
	while(ok==0)
	{
		ko=0;
		cescolha=0;
		
		// Loop para leitura e validação da dimensão do vetor
		while(ko==0)
		{
			printf("\n Inserir um valor de 1 a 20 p/ o vetor: ");
			scanf("%d",&dim);
			
			if((dim>=1)&&(dim<=20))
			{
				ko=1;
			}
		}
		
		tam=dim;
		// Gera valores do vetor
		for(i=1;i<=dim;i++)
		{
			vet[i]=rand()%30;
			
			// Impede valores repetidos
			for(j=i-1;j>=1;j--)
			{
				if(vet[i]==vet[j])
				{
					i--;
					j=0;
				}
			}
		}
		
		// Impressao do vet
		for(i=1;i<=dim;i++)
		{
			printf("\n\t Vetor na posicao %d = %d \n",i,vet[i]);
		}
		
		// Decisao do usuario
		while(cescolha==0)
		{
			printf("\n\n - - -> ESCOLHA: \n\n 1 - Ordenar vetor \n 2 - insercao binaria \n 3 - selecao direta \n\n Entre com sua escolha: ");
			scanf("%d",&escolha);
			
			if((escolha>=1)&&(escolha<=3))
			{
				cescolha=1;
			}
			else
			{
				
			}
			
		}
		
		if(escolha==1)
		{
			func1();
		}
		else
		{
			if(escolha==2)
			{
				func2();
			}
			else
			{
				func3();
			}
		}
		//impressao do vet
		for(i=1;i<=dim;i++)
		{
			printf("\n\t Vetor na posicao %d = %d \n",i,vet[i]);
		}
		
		printf("\n\n Inserir valor que deseja encontrar no vetor: ");
		scanf("%d",&E);
		
		ini=1;
		fim=dim;
		found=1;
		
		while(ini!=fim)
		{
			found=ini+fim;
			found=found/2;
			if(vet[found]<E)
			{
				ini=found;
				ini++;
			}
			else
			{
				fim=found;
			}
		}
		
		if(E == vet[ini])
			printf("\n Valor %d encontrado em %d",E,ini);
		else
			printf("\n Valornao encontrado");
		
		printf("\n\n Deseja exe novamente 0 - sim : ");
		scanf("%d",&ok);
	}
}

// Funcao de ordenacao
void func1()
{
		int perm,j,i;
	
	for(i=1;i<=tam;i++)
	{
		for(j=tam;j>i;j--)
		{
			if(vet[i]<=vet[j])
			{
						
			}
			else
			{
				perm=vet[i];
				vet[i]=vet[j];
				vet[j]=perm;
			}
		}
	}
}

// Encontrando valor por Busca binária
void func2()
{
	int i,x,l,m,r,j;
			
	for(i=2;i<=tam;i++)
	{
		x=vet[i];
		l=1;
		r=i;
				
		while(l<r)
		{
			m=(l+r)/2;
					
			if(vet[m]<=x)
			{
				l=m+1;
			}
			else
			{
				r=m;
			}
		}
				
		for(j=i;j>r;j--)
		{
			vet[j]=vet[j-1];
		}
		vet[r]=x;
	}
}

// Ordenacao realizando comparações
void func3()
{
	int i,p,x,k,j;
			
	for(i=1;i<=tam;i++)
	{
		k=i;
		p=vet[i]; 
				
		for(j=i+1;j<=tam;j++)
		{
			if(vet[j]<p)
			{
				k=j;
				p=vet[k];
			}
		}
		vet[k]=vet[i];
		vet[i]=p;
	}
}
