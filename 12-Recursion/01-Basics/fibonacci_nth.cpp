//Find the nth term in the fibonacci series..Indexing from 0..
#include<iostream>
using namespace std;

int fibonacci(int n){

	//Base case..
	if(n == 0 || n==1){
		return n;
	}

	int f1 = fibonacci(n-1);
	int f2 = fibonacci(n-2);

	return f1+f2;
}
int main(){
	int n;

	cout<<"Enter the position:";
	cin>>n;

	cout<<"Element present in given position in fibonacci series is:"<<fibonacci(n);
	return 0;
}