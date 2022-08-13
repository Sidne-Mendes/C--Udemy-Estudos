#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int valor, fat;

	for(int i = 0, j = 0 ; i <= 100 ; i++, j++)
	{
		cout << "i:" << i << " J:" << j << endl;
		//cout << j << endl;
	}

	cout << "Digite um numero para calculo fatorial:" << endl;
	cin >> valor;

	fat = 1;

	for(int i = 1 ; i < valor; i++)
	{
		fat = fat * (i + 1);
	}
	cout << "Faotrial: " << fat << endl;

	return 0;
}
