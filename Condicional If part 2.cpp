#include <iostream>>

using namespace std;

int main()
{

	int num = 10;

	if(num > 5)
	{

		if(num <= 10)
		{
			cout << "numero maior do que 5 e menor ou igual a 10";
		}
		else
		{
			cout << "não exceção";
		}
	}
	else
	{
		cout << "não execeção";
	}

	if((num % 2 == 0) && num < 20)
	{
		cout << "Verdadeiro";
	}

	if((num % 2 == 0) || num < 20)
	{
		cout << "verdadeiro";
	}

	return 0;

	if (!(num % 2 == 0))
	{
		cout << "verdadeiro!";
	}

	bool var = 10 < 20;

	cout << var;

	if (var != 0)
	{
		cout << "Verdadeiro";
	}
	
	if (!var){
		cout << "Falso";
	}
	
}
