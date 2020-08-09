#include<iostream>
using namespace std;

int powerOptimised(int a, int n){

	int ans = 1;
	while(n > 0){
		int last_bit = n&1;
		if(last_bit == 1){
			ans = ans * a;
			a = a*a;
		}
		else
			a = a*a;
		n = n>>1;
	}
	return ans;
}

int main(){

	int a,n;
	cout<<"Enter a and n:";
	cin>>a>>n;

	cout<<"a ^ n(a to the power n) is:"<<powerOptimised(a,n);
	return 0;
}