/*
	Nome: Guilherme Fabiano Terra da Silva
	Programa - Funções - Descobrindo se numero é par
*/

#include <iostream>

using namespace std;

// bool retorna ou 0 ou 1 - Verd e falso
// Void não retorna nada

bool par(int num)
{
	if(num % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void mensagem()
{
	cout << "\n Aprendendo C++ "<< endl;
}

int main()
{
	int n;
	
	mensagem();
	
	cout << "\n Digite um numero: ";
	cin >> n;
	
	if( par(n) == 1)
	{
		cout << "\n O numero eh par" << endl;
	}
	else
	{
		cout <<"\n O numero eh impar" << endl;
	}
	
	return 0;
}
