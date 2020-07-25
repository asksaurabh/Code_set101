#include<iostream>
using namespace std;

int * func(){

	//int a[] = {1,2,3,4,5};

	int *a = new int[5]{1,2,3,4,5};
	cout<<a<<endl;
	cout<<a[0]<<endl;

	return a;

}


int main(){

	int *b = func();

	cout<< b<<endl;

	cout<<b[0]<<endl;

	delete [] b;
	return 0;
}