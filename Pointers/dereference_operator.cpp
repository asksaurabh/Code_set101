#include<iostream>
using namespace std;

int main(){
                                             //*( ) means value at * -->> ( ) whatever inside this bracket
	int x = 10;
											// whatever inside of this bracket.
	int * xptr = &x;

	cout<< "&x: "<< &x<< endl;
	cout<<"xptr: " << xptr<< endl;

	cout<< "x:" << x<<endl;
	cout<< "*(&x) : "<< *(&x)<<endl;
	cout<< "*xptr : " << *xptr<< endl;

	cout<< "*(&xptr):" << *(&xptr)<< endl;

	cout<< "&(*xptr):" << &(*xptr)<< endl;

	cout<<"&xptr: "<< &xptr<<endl;

	//Double pointer -->> Pointer to a pointer
	int **xxptr = &xptr;

	cout<< "xxptr: "<<xxptr<<endl;

	return 0;
}