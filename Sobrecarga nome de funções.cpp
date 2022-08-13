#include <iostream>

using namespace std;

void mensagem(int n);

void mensagem();

int main(int argc, char** argv)
{
	
	mensagem(10);
	
	mensagem();
	
	return 0;
}

void mensagem(int n){
	cout<< "Com argumento"<< endl;
}

void mensagem(){
	cout<< "sem argumentos"<< endl;
}
