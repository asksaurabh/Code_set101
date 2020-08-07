#include<iostream>
using namespace std;

int dectobin(int n){

	int ans = 0;
	int power = 1;

	while(n > 0){
		int last_bit = (n & 1);
		ans += power * last_bit;
		power = power*10;
		n = n>>1;
	}

	return ans;
}
int main(){

	int n;

	cout<<"Enter the number:";
	cin>>n;

	cout<<"Binary representation of decimal number is : "<<dectobin(n);
	return 0;
}