#include<iostream>
using namespace std;

int find_power(int a,int b){
	//Base case..
	if(b == 0)
		return 1;
	//rec case..
	int ans = a * find_power(a,b-1);
	return ans;
}
int main(){

	int a,b;
	cout<<"Enter the base and exponent:";
	cin>>a>>b;

	cout<<"(a^b) using recursion is:"<<find_power(a,b);
	return 0;
}