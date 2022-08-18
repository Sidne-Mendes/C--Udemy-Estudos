#include <iostream>
using namespace std;

class Conta{
	public:
		int numero;
		double saldo;
		
		double depositar(double quantidade);
		
		double retirar(double quantidade){
			if (quantidade > 0 && saldo >= quantidade){
				saldo -= quantidade;
			}
			return saldo;
		}
};

double Conta :: depositar(double quantidade){
	 if (quantidade >0 ){
		 saldo += quantidade;
	 }
	 return saldo;
}

int main(int argc, char *argv[])
{
	Conta c = {1, 100.75};
	
	cout << "saldo: "<< c.saldo << endl;
	cout << "saldo depois do deposito: "<< c.depositar(100)<< endl;
	cout<< "saldo depois do saque: "<< c.retirar(50)<< endl; 
	
	return 0;
}