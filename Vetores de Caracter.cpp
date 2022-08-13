#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	
	char nome[] = {'s', 'i','d','n','e', '\0'};
	char nome_aspas_duplas[] = "sidne";
	
	int i = 0;
	
	while(nome[i] != '\0'){
		cout<<nome[i]<<endl;
		cout<<nome_aspas_duplas[i++]<<endl;
	}

	cout << nome<<endl;
	
	return 0;
}