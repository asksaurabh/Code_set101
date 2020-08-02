#include<iostream>
#include "Vector.h"     //When u have to include user defined class/file use " " instead of <>

using namespace std;

int main(){

	Vector<int> v;
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
	cout<<v.size()<<" "<<v.capacity()<<endl;

	Vector<char> c;
	c.push_back('A');
	c.push_back('B');
	c.push_back('C');

	for(int i=0; i<c.size(); i++)
		cout<<c[i]<<" ";

	return 0;
}