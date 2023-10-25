/*
	Nome: Guilherme Fabiano Terra da Silva
	Programa - Escopo
*/

#include <iostream>

using namespace std;

//Variável global - Em todo o programa
int num_global=12;

void foo(){
	//Variável Local - So nessa parte
	int num=10;
	//Variável Estatica - Retem o valor - Quando a função for executada dnv, a variável terá o mesmo valor de antes
	static int num_static = 1;
	
	cout <<"\n Variavel Local...: "<< num << endl;
	cout <<"\n Variavel Global..: "<< num_global << endl;
	cout <<"\n Variavel Estatica: "<< num_static << endl;
	num_static++;
}

int main()
{
	foo();
	foo();
	foo();
	foo();
}
