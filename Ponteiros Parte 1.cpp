#include <iostream>


using namespace std;

void pont(int * n)
{
	*n = 30;
}

void foo(int aux[])
{
	aux[0] = 100 ;
}


int main(int argc, char** argv)
{

	int var = 10;

	cout << var << endl;

	int* pvar;
	pvar = &var;

	*pvar = 20;

	cout << *pvar << endl;
	cout << var << endl;

	pont(&var);

	cout << var << endl;


	int * vet = new int [10];

	int aux[10];

	*(vet + 0) = 10;
	*(vet + 1) = 20;
	*(vet + 2) = 30;

	aux[0] = 11;
	aux[1] = 22;
	aux[2] = 33;

	cout << *(vet + 0) << endl;
	cout << *(vet + 1) << endl;
	cout << *(vet + 2) << endl;

	cout << *(aux + 0) << endl;
	cout << *(aux + 1) << endl;
	cout << *(aux + 2) << endl;

	foo(aux);

	cout << aux[0] << endl;

	return 0;
}
