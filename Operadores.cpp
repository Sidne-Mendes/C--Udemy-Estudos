#include <iostream>>

using namespace std;

int main()
{
	
	int n1, n2;
	float resultado;
	int n;
	
	n = 10;
	n = n++;
	n = n--;
	n+=1;
	n-=1;
	n*=5;
	n/=5;
	
	n1 = 10;
	n2 = 20;
	resultado = n1 + n2;
	resultado = n1 * n2;
	resultado = (float)n1 / n2;
	resultado = n1 % n2;
	resultado = n1 - n2;
	
	cout << resultado;
	cout << n;
	
	return 0;
}