/*
	Nome: Guilherme Fabiano Terra da Silva
	Programa - Depura��o
*/

#include <iostream>

using namespace std;

int main()
{
	/*
	
	Erros:
	
	N�o declara��o da vari�vel
	N�o utiliza��o de vari�vel
	
	*/
	
	int ano,idade;
	
	cout << "\n Digite o seu ano de nascimento: ";
	cin >> ano;
	
	idade= 2023 - ano;
	cout << "\n Sua idade e: "<< idade << endl;
}
