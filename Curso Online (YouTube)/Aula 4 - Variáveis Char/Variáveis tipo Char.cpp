/*
	Nome: Guilherme Fabiano Terra da Silva
	Programa - Variáveis tipo char e aplicações de incremento
*/

#include <iostream>

using namespace std;

int main()
{
	int num = 10;
	int num2;
	
	num2 = num++;	//10
	num2 = ++num;   //11
	
	char c = 'a';
	cout << (int)c; // O int converte o c que é "a" para 97 (a da tabela ASCHII )
	
	// para Imprimir  aspas simples
	char d= '\'';
	cout << d;
	// O \ informa q a aspa não é de encerramento ai funciona
	
	return 0;
}
