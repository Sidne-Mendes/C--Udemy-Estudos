#include <iostream>

using namespace std;

char * my_strcat(char * dest, char* orig);
int my_strlen(char * str);

int main(int argc, char** argv)
{

	char * nome1 = new char[100];
	char * nome2 = new char[100];
	char* resultado;

	cout << "Digite o primeir nome1: ";
	cin >> nome1;
	cout << "Digite o primeir nome2: ";
	cin >> nome2;

	cout << my_strlen(nome1) << endl;
	cout << "Reusltado :" << my_strcat(nome1, nome2) << "\n";
	return 0;
}

char * my_strcat(char * dest, char* orig)
{
	char * resultado;
	
 	int tam_dest = my_strlen(dest);
 	int tam_orig = my_strlen(orig);
 	
 	resultado = new char[tam_dest + tam_orig];
 	char *p_str = resultado;
 	
 	while(*dest != '\0')
	 {
 		*p_str = *dest;
 		p_str++;
		 dest++;
	 }
 	
 		while(*orig != '\0')
	 {
 		*p_str = *orig;
 		p_str++;
		 orig++;
	 }
 	
	return resultado;
}

int my_strlen(char * str)
{
	int tam = 0;

	while(*str != '\0')
	{
		str++;
		tam++;
	}
	return tam;
}
