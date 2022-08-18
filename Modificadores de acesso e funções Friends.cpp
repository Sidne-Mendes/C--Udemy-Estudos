#include <iostream>
#include <string.h>

using namespace std;

class Linguagem
{

	friend void classeAmiga(Linguagem*);

protected:
	char nome[100];

public:
	char* getNome()
	{
		return nome;
	}
	void setNome(const char* nome){
		strcpy(this->nome, nome);
	}
	void mostrarNome(){
		cout << "Nome: "<< nome << endl;
	}
};

void classeAmiga(Linguagem* l){
	   
	   cout<< "Trás nome: "<< (*l).nome << endl;
	   	
};

int main(int argc, char *argv[])
{

	Linguagem l;
	
	l.setNome("C++");
	
	classeAmiga(&l);
	
	return 0;
}
