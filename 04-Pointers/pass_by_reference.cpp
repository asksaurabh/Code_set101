#include<iostream>
using namespace std;

void increment(int *aptr /*   ,int a    */){

	*aptr = *aptr + 1;
	cout<<"Inside increment:"<<*aptr<<endl;
}
int main(){

	int a  =10;

	increment(&a);
	cout<<"Inside Main:"<< a <<endl;
	return 0;
}