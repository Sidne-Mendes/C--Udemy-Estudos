#include <iostream>
using namespace std;

class Carro
{
public:
	int ano;
	double preco;
	
	//Construtor 1
	Carro(){
		ano = 0;
		preco = 0.0;
	}
	//Construtor 2
	Carro(int ano){
		this -> ano = ano;
		this -> preco = 0.0;
	}
	//Construtor 3
	Carro(int ano, double preco){
		this -> ano = ano;
		this -> preco = preco;
	}

};

int main(int argc, char *argv[])
{
	Carro carro;
	Carro carro2(2015);
	Carro carro3(2014, 200000);
	
	cout << "Carro 1 "<< carro.preco<< endl;
	cout << "carro 2 "<< carro2.preco<< endl;
	cout << "Carro 3 "<< carro3.preco<< endl;
	
	return 0;
}
