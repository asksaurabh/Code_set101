#include<iostream>
using namespace std;

int main(){

	int x = 10;

	cout<< &x <<endl;

	float y = 10.5;
	cout<< &y <<endl;             //In hexadecimal format.

	char ch = 'A';

	cout<< &ch<<endl;   //Exception it doesn't work as expected.. due to operator overloading .

	// to fix this typecast char * to void * (data type of &ch was char *)

	cout<< (void *)&ch<<endl;
	cout<<typeid(&ch).name()<<endl;         //Tells u the type of variable in c++

	// Pointer
	//Storing the address of variable
	int * xptr = &x;

	cout<<xptr<<endl;
	cout<< &x <<endl;

	//u can re-assign the variable as well.

	int z = 20;

	xptr = &z;

	cout<<xptr<<endl;
	cout<< &z <<endl;

	

	return 0;
}