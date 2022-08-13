#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

	int num = 10;

	switch(num)
	{
	case 9:
		cout << "numero 9" << endl;
		break;
	case 10:
		cout << "numero 10" << endl;
		break;
	default 
		cout<<"Valor não mapeado pelo switch"<< endl;
	}
	return 0;
}
