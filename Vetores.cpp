#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	
	int vetor_inicializado[3] = {1,2,3};
	
	int vetor[100];
	
	for(int i = 0 ; i < 100 ; i++){
		
		vetor[i]=i;
	}
	
	for(int i = 0 ; i < 100 ; i++){
		
		cout<< vetor[i]<<endl;
	}
	
	for(int i = 0 ; i < 3 ; i++){
		
		cout<< vetor_inicializado[i]<<endl;
	}
	
	//Tamanho em bites do vetor(cada inteiro valem 4 bites)
	cout << sizeof(vetor_inicializado) << endl;
	return 0;
}
