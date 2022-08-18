#include <iostream>


using namespace std;

int main(int argc, char** argv)
{

	int aux[4];
	
	aux[0] = 10;
	aux[1] = 20;
	aux[2] = 30;
	aux[3] = 40;
	
	for(int i = 0 ; i <= sizeof(aux)/sizeof(int) ; i++){
		cout << aux[i]<< endl;
	}
		
	delete[] aux;
	
	aux = NULL;
	
	return 0;
}