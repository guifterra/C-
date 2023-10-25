/*
	Nome: Guilherme Fabiano Terra da Silva
	Programa - if else
*/

#include <iostream>

using namespace std;

int main()
{
	int dinheiro=9;
	int num=10;
	if(dinheiro>10)
	{
		cout << "\n Eu vou ao cinema!";
	}
	else
	{
		cout << "\n Eu NAO vou ao cinema!";
	}
	
	if(num == 10)
	{
		cout << "\n\n Num e igual a 10";
	}
	
	// > - Maior que
	// < - Menor que 
	// == - Igual
	// >= - Maior igual
	// <= - Menor igual
	// != - Diferente 
	
	if(num > 5)
	{
		if(num <=10)
		{
			cout << "\n\n numero maior do que 5 e menor ou igual a 10" << endl;
		}
	}
	
	if((num % 2) && (num < 20))
	{
		cout <<"\n numero par e menor do que 20";
	}
	
	num++;
	
	if((num % 2) && (num < 20))
	{
		cout <<"\n numero par e menor do que 20";
	}
	
	if((num % 2) || (num < 20))
	{
		cout <<"\n\n numero par e menor do que 20";
	}
	
	// Se for vdd 1 se for falso 0
	// bool vai ser 1 ou 0 SEMPRE
	bool var= 10 < 20;
	
	if(var)
	{
		cout <<"\n\n Verdadeiro \n";
	}
	
	
	return 0;
}
