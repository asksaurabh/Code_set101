#include<iostream>
#include "Vector.h"     //When u have to include user defined class/file use " " instead of <>

using namespace std;

int main(){

	Vector v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.pop_back();
	v.push_back(5);
	v.push_back(6);

	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";            //See the operator func in Vector.h file. [] is overloaded.

	cout<<endl;
	cout<<v.size()<<" "<<v.capacity();


	return 0;
}