#include<iostream>
using namespace std;

int multiplyRec(int a,int b){

	//base case..
	if(b == 0)
		return 0;
	//Rec case..
	int sum = a + multiplyRec(a,b-1);
	return sum;
}
int main(){
	int a, b;

	cout<<"Enter two numbers to multiply:";
	cin>>a>>b;

	cout<<"Multiplication using recursion gives:"<<multiplyRec(a,b);
	return 0;
}