#include <iostream>

using namespace std;

bool par(int num);

void imprime();

int main(int argc, char** argv)
{

	int n;

	cout << "Digite um numero:" << endl;
	cin >> n;
	
	imprime();
	
	if (par(n))
	{
		cout << "O numero é par" << endl;
	}
	else
	{
		cout << "O numero é impar" << endl;
	}



	return 0;
}

void imprime(){
	cout<< "Estudo C++"<<endl;
}

bool par(int num)
{
	if (num % 2 == 0)
	{
		return true;
	}
	return false;
}
