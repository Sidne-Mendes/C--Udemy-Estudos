#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int var = 10;
	
	int ano, idade;
	
	cout<< "Digite o ano de nascimento:";
	cin>> ano;
	
	idade = 2022 - ano;
	
	cout<< "Idade"<< idade<<endl;
		
	return 0;
}
