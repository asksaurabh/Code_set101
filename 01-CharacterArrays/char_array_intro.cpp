#include<iostream>
using namespace std;

int main(){

	int b[] = {1,2,3};

	cout<<b<<endl;

	char a[] = {'a','b','c','\0'};
	cout<<a;                           //No address but the contents of the arrray

	/*
	char c[10];
	cin>>c;             //No need to use for loop for input as in character arrays.
	cout<<c<<endl;
	*/
	
	char s1[] = {'h','e','l','l','o'};
	char s2[] = "hello";

	cout<<sizeof(s1)<<" "<<sizeof(s2);	
	return 0;
}