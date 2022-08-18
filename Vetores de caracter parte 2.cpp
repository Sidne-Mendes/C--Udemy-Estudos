#include <iostream>
#include <string.h>


using namespace std;


void inverte(char nome[])
{

	int tam = strlen(nome);

	cout << tam << endl;

	for (int i = tam - 1 ; i >= 0 ; i--)
	{
		cout << nome[i];
	}

	if (isalpha(nome[0]))
	{
		cout << "Alfabetico" << endl;
	}
	else
	{
		cout << "numero" << endl;
	}

	if (isdigit(nome[0]))
	{
		cout << "numero" << endl;
	}
	else
	{
		cout << "letra" << endl;
	}

	if (isupper(nome[0]))
	{
		cout << "maiusculo" << endl;
	}
	else
	{
		cout << "minusculo" << endl;
	}

	if (islower(nome[0]))
	{
		cout << "minusculo" << endl;
	}
	else
	{
		cout << "maiusculo" << endl;
	}
	
	if (strcmp(nome[0], nome2) ==0)
	{
		cout << "Cadeia de caracteres iguais" << endl;
	}
	else
	{
		cout << "Diferente" << endl;
	}
	
	
	// concatena strings
	strcat(nome, sobrenome);
	
	//verifica se string2 contem na string1
	strstr(string1, string2);
}

int main(int argc, char *argv[])
{
	char nome [] = "sidne";

	inverte(nome);

	return 0;
}
