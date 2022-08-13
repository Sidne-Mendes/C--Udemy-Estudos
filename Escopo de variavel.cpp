#include <iostream>

using namespace std;

int num_global = 12;

void foo();

int main(int argc, char *argv[]){
	
	foo();
	foo();
	foo();
	return 0;
	
}

void foo()
{
	
	int num = 10;
	static int num_static = 1;
	
	cout << num_global<<endl;
	cout<<num<<endl;
	
	num_static++;
	cout << num_static<<endl;
	
	
}