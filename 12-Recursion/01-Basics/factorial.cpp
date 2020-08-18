#include<iostream>
using namespace std;

int factorial(int n){
	//Base case
	if(n == 0 || n == 1){
		return 1;
	}

	//Recursive case.
	int ans = n * factorial(n-1);
	return ans;
}

int main(){
	int n;

	cout<<"Enter the number you want the factorial of:";
	cin>>n;

	cout<<"Factorial of given number is:"<<factorial(n);
	return 0;
}