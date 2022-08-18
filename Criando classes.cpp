#include <iostream>
#include <strings.h>

using namespace std;

class Pessoa{
	
	public:
		char nome[100];
		char cpf[20];
		int idade;
		
	   	
};

int main(int argc, char *argv[])
{
	
	Pessoa p1;
	
	strcpy(p1.nome, "joao");
	strcpy(p1.cpf, "11111111111");
	  
	
	return 0;
}