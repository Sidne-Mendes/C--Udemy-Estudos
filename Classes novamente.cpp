#include <iostream>
using namespace std;

class Conta
{
public:
	int numero;
	double saldo;

	double depositar(double quantidade)
	{
		if (quantidade > 0)
		{
			saldo += quantidade;
		}
	}
	double retirar(double quantidade)
	{
		if(quantidade > 0 && saldo >= quantidade)
		{
			saldo -= quantidade;
		}
		return saldo;
	}

};

int main(int argc, char *argv[])
{

	return 0;
}
