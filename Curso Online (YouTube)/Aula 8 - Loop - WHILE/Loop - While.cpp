/*
	Nome: Guilherme Fabiano Terra da Silva
	Programa - While
*/

#include <iostream>

using namespace std;

// Break - Sai do laço na hora
// Continue - Retorna ao início do While

int main()
{
	int num=1;
	
	while(num<=100)
	{
		cout << "\n Numero: "<< num << endl;
		
		if(num>=50)
		{
			break;
		}
		
		num++;
	}
	
	cout << endl << "\n - - -> Pares (0 - 100):" << endl;
	
	num=1;
	while( num <=100)
	{
		if((num%2) != 0)
		{
			num++;
			continue;
		}
		cout << "\n " << num << endl;
		num++;
	}
	
	return 0;
}
