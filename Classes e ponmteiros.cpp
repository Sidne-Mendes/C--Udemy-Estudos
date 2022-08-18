#include <iostream>
using namespace std;

class Conta
{
public:
	int numero;
	double saldo;

	double depositar(double quantidade);

	double retirar(double quantidade)
	{
		if (quantidade > 0 && saldo >= quantidade)
		{
			saldo -= quantidade;
		}
		return saldo;
	}

	double getSaldo()
	{
		return saldo;
	}
	int getNumero()
	{
		return numero;
	}
};

double Conta :: depositar(double quantidade)
{
	if (quantidade > 0 )
	{
		saldo += quantidade;
	}
	return saldo;
}

void foo(Conta* pc)
{
	(*pc).depositar(50);
}

Conta* novaConta(int numero){
	Conta* c = new Conta;
	c->numero = numero;
	c->saldo = 0.0;
	return c;
}

int main(int argc, char *argv[])
{
	//Conta c;
	//Conta* pc = &c;

	//(*pc).numero = 1;
	//(*pc).saldo = 200;

	//foo(&c);
	
	Conta * pc = novaConta(1111);
	
	cout << "Numero: "<< pc->getNumero()<< endl;
	
	cout << "Saldo: " << (*pc).getSaldo() << endl;

	return 0;
}
