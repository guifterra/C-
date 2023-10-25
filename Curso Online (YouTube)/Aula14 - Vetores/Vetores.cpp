/*
	Nome: Guilherme Fabiano Terra da Silva
	Programa - Vetor
*/

#include <iostream>

using namespace std;

// sizeof ( vetor [] ) - RETORNA O TAMANHO DO VETOR
int main()
{
	int vetor[100],vet[4]= {0,1,2,3};
	
	for(int c=0; c<4; c++)
	{
		cout << "\n Elemento do vet: " << vet[c] << endl;
	}
	
	for(int i=0; i<100; i++)
	{
		vetor[i]=i;
	}
	
	
	for(int i=0; i<100; i++)
	{
		cout << "\n Elemento do vet 2: "<< vetor[i] << endl;
	}
	
	cout<< "\n Tamanho do vetor: "<< sizeof(vetor)/4 << endl;
	
	return 0;
}
