#include<iostream>
using namespace std;

int main(){

	//char a[][10] = {{'a','b','\0'}, {'d','e','f','\0'} };

	char a[][10] = {"abc", "def", "ghi", "jkl"};
	cout<<a[0]<<endl;
	cout<<a[1]<<endl;
	cout<<a[2]<<endl;
	cout<<a[3]<<endl;

	a[0][0] = 'A';      //Update a character in a string in 2D array.
	cout<<a[0]<<endl;

	return 0;
}