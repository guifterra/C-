/*
	Nome: Guilherme Fabiano Terra da Silva
	Programa - For e Fatorial
*/

#include <iostream>

using namespace std;

int main()
{
	
	//parte 1 - Executada 1 vez
	//parte 2 - Condição
	//parte 3 - Incremento ou uma operação
	
	/*for(parte1;parte2;parte3)
	{
		//Faça algo aqui
	}
	*/
	
	int i,j,n,fat;
	
	for(i=1 , j=1 ;i<=100;i++ ,j++)
	{
		cout << "\n Numero i: "<< i << endl; 
		cout << " Numero j: "<< j << endl; 
	}
	
	/*
		Fatorial
		5! = 5 * 4 * 3 * 2 * 1 = 120
	*/
	
	cout << endl << endl << "\n Digite um numero para fatorial :";
	cin >> n;
	
	fat=1;
	for(i=n; i>=1; i--)
	{
		fat = fat* i;
	}
	
	cout << endl << "\n - - -> Fatorial:  " << fat << endl;
	return 0;
}
