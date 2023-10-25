/*
	Nome: Guilherme Fabiano Terra da Silva
	Programa - Depuração
*/

#include <iostream>

using namespace std;

int main()
{
	/*
	
	Erros:
	
	Não declaração da variável
	Não utilização de variável
	
	*/
	
	int ano,idade;
	
	cout << "\n Digite o seu ano de nascimento: ";
	cin >> ano;
	
	idade= 2023 - ano;
	cout << "\n Sua idade e: "<< idade << endl;
}
