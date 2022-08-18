#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	
	int var = 10;
	
	int * p1, * p2;
	
	p1 = &var;
	p2 = &var;
	
	cout << p1 << endl;
	cout << p2 << endl;
	cout << &var << endl;
	
	if (p1 = p2){
		cout << "Contem o mesmo endereço!"<<endl;
	}
	
 	const double pi = 3.1415;
 	
 	cout <<  pi<< endl;
 	
 	const int * p1;
	int const * p2;
	int * const p3;
 	
	return 0;
}
