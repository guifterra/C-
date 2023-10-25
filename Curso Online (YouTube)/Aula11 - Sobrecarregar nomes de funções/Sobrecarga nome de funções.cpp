/*
	Nome: Guilherme Fabiano Terra da Silva
	Programa - Sobrecarga de funções
*/

#include <iostream>

using namespace std;

void mensagem (int n){
	cout <<"\n Numero: " << n << endl;
}

void mensagem (){
	cout <<"\n Hello word"<< endl;
}

void mensagem (char c){
	cout <<"\n Caracter: "<< c << endl;
}

int soma(int n1, int n2)
{
	return n1 + n2;
}

int soma(int n1, int n2, int n3)
{
	return n1 + n2 + n3;
}

int main()
{
	mensagem(10);
	mensagem();
	mensagem('A');
	
	cout << "\n " << soma(1,2) << endl;
	cout << "\n " << soma(1,2,3) << endl;
	
	return 0;
}
