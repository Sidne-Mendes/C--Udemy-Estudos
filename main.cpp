#include <iostream>
#include "my_math.h"


using namespace std;

int main(int argc, char** argv)
{
	int n = 5;
	
	cout<< "Fatorial: "<< fatorial(n)<< endl;
	cout <<"Area quadrado: "<< area_quadrado(n)<< endl;
	cout <<"Area Retangulo: "<< area_retangulo(4,2);
	
	return 0;
}