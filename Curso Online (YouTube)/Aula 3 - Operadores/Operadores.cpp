/*
	Nome: Guilherme Fabiano Terra da Silva
	Programa - Operadores aritm: + , - , * , / , % , ++ , --
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int var;
	cout << var;

	int n1,n2;
	float resultado;
	
	n1=10;
	n2=20;
	
	printf("\n\n");
	
	resultado = n1 + n2;
	cout << resultado;
	
	printf("\n\n");
	
	resultado = n1 * n2;
	cout << resultado;	
	
	printf("\n\n");
	
	// Float - Transforma o n1 em float permitindo resultado quebrado
	resultado = (float)n1 / n2;
	cout << resultado;
	
	printf("\n\n");
	
	resultado = n2 % n1;
	cout << resultado;
	
	// ++ - Incrementa
	printf("\n\n");
	n1++;
	cout << n1;
	
	// -- - Decrementa
	printf("\n\n");
	n1--;
	cout <<n1;
	
	return 0;
}
