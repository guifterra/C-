/*
	Nome: Guilherme Fabiano Terra da Silva
	Programa - Vetores de caracter
*/

#include <iostream>
#include <string.h>

using namespace std;

void inverte(char nome[])
{
	//obtendo tamamho da string
	int tam;
	for(tam=0; nome[tam]; tam++)
	{
	}
		for(int i=tam-1;i>=0;i--)
		{
			cout << nome[i];	
		}	
		
}

int main()
{
	char nome[] = { 'M','a','r','c','o','s','\0'};
	char nome1[] = "marcos";
	int i=0;
	
	while(nome1[i] != 0)
	{
		cout << nome1[i++];
	}
	
	i=0;
	while(nome[i] != 0)
	{
		cout << nome[i];
		i++;
	}
	
	i=0;
	// Executa e testa no final
	do
	{
		cout << nome[i];
	}
	while(nome[i++]);
	
	cout << endl << "\n Inversao\n " << endl;
	
	inverte(nome);
	
	// strlen ( vetor ) - Retorna o tamanho da String ou vetor
	cout << endl << "\n Tamanho: "<< strlen(nome) << endl;
	
	// isalpha ( posicao do vet ) - Testa se eh numerico ou alfabético 
	if(isalpha(nome[0]))
	{
		cout << "\n Caracter alfabetico" << endl;
	}
	else
	{
		cout << "\n Caracter numerico" << endl;
	}
	
	// isdigit ( posicao do vetor ) - Testa se e digito
	if(isdigit(nome[0]))
	{
		cout << "\n Caracter numero" << endl;
	}
	else
	{
		cout << "\n Caracter letra" << endl;
	}
	
	//isupper ( posicao do vetor ) - Testa se e Maiusculo
	if(isupper(nome[0]))
	{
		cout << "\n Maiuscula" << endl;
	}
	else
	{
		cout << "\n Minuscula" << endl;
	}
	
	//islower ( posicao do vetor ) - Testa se e Minisculo
	if(islower(nome[0]))
	{
		cout << "\n Minuscula" << endl;
	}
	else
	{
		cout << "\n Maiuscula" << endl;
	}
	
	//isspace ( posicao do vetor ) - Testa se e espaço em branco
	if(isspace(nome[0]))
	{
		cout << "\n Espaco em branco" << endl;
	}
	else
	{
		cout << "\n Nao eh espaco em branco" << endl;
	}
	
	// strcmp ( vet1 , vet2 ) - Compara se as duas sao identicas
	if(strcmp (nome, nome1)==0)
	{
		cout << "\n Strings iguais" << endl;
	}
	else
	{
		cout << "\n Strings diferentes" << endl;
	}
	
	char x='M';
	
	// tolower - converte Maisculo em Minusculo
	x= tolower(x);
	
	cout << "\n Letra: " << x << endl;
	
	// toupper - converte Minusculo em Maiusculo
	x= toupper(x);
	
	cout << "\n Letra: " << x << endl;
	
	// strcat - concatenar strings
	char nome3[100],nome4[100];
	
	cout << "\n Digite o seu nome: ";
	cin >> nome3;
	
	cout << "\n Digite o seu sobrenome: ";
	cin >> nome4;
	
	strcat(nome3,nome4);
	cout <<"\n Seu nome: " << nome3;
	
	// strstr - Testa se uma string ocorre em outra
	char string1[100],string2[100];
	
	cout << "\n\n Digite o texto1: ";
	cin >> string1;
	
	cout << "\n Digite o texto2: ";
	cin >> string2;
	
	if(strstr(string1, string2))
	{
		cout <<"\n Eh substring";
	}
	else
	{
		cout <<"\n Nao Eh substring";
	}
	return 0;
}
