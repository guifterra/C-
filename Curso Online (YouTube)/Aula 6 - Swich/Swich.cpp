/*
	Nome: Guilherme Fabiano Terra da Silva
	Programa - Switch - Calculadora simples
*/

#include <iostream>

using namespace std;

int main()
{
	int num=10;
	char op= 'Q';
	
	// Testa a Expressão
	// Funciona como se fosse um if mais complexo 
	switch(num)
	{
		case 9:
			cout <<"\n Numero 9";
			break;
		case 10:
			cout <<"\n Numero 10";
			break;
		case 11:
			cout <<"\n Numero 11";
			break;
		default:
			cout <<"\n Numero nao encontrado";
			break;		
	}
	
	// default não é Obrigatório
	switch(op)
	{
		case 'Q':
			cout <<"\n\n Saiu do Sistema";
			break;
		case 'q':
			cout <<"\n\n Saiu do Sistema";
			break;
		
		default:
			cout <<"\n\n Comando inexistente";
			break;		
	}
	
	int num1,num2,resultado;
	char ope;
	
	//Calculadora
	cout <<endl<<endl;
	
	cout <<" Digite o primeiro numero: ";
	cin >> num1;
	
	cout <<" Digite o segundo numero.: ";
	cin >> num2;
	
	cout <<" Digite a operação.......: ";
	cin >> ope;
	
	switch(ope)
	{
		case '+':
			resultado= num1 + num2;
			cout <<"\n Soma.........: " << resultado << endl;
			break;
			
		case '-':
			resultado= num1 - num2;
			cout <<"\n Subtração....: " << resultado << endl;
			break;
			
		case '*':
			resultado= num1 * num2;
			cout <<"\n Multiplicação: " << resultado << endl;
			break;
			
		case '/':
			resultado= num1 / num2;
			cout <<"\n Divisao......: " << resultado << endl;
			break;
						
		default:
			cout <<"\n O valor inserido nao e uma operação possível";
			break;	
			
			
	}
	return 0;
}
