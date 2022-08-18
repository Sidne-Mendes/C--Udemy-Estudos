#include <iostream>
#include <string.h>

using namespace std;

void inverteComPonteiro();

int main(int argc, char** argv)
{
	
	int array[] = {1,2,3,4,5};
	
	int* parray = &array[0];
	
	int i = 0;
	
	while(i<5){
		cout<< *parray<< endl;
		parray+=2;
		i++;
	}
	
	inverteComPonteiro();
	
	return 0;
}

void inverteComPonteiro(){
	
	char nome[100];
	
	int tam;
	char* p;
	char* pini;
	
	cout << "Digite seu nome: ";
	cin >> nome; 
	
	tam = strlen(nome);	
	p = &nome[tam - 1];
	pini = &nome[0];
	
	while(true){
		cout<< *p;
		if (p == pini){
			break;
		}
		p--;
	}
	cout<<endl;
	
}