#include <iostream>
using namespace std;
//Find the number of set bits in the binary representation of a given number.

//Method 1
int countBits(int n){

	int ans = 0;
	while(n>0){

		ans += (n & 1);
		n = (n >> 1);
	}

	return ans;
}

//Method 2
int countBitsFast(int n){
	int ans = 0;
	while(n>0){

		n = n & (n-1);
		ans++;
	}
	return ans;
}

int main(){

	int n;
	cout<<"Enter the number:";
	cin>>n;

	cout<<"Number of set bits using method 1 is:"<<countBits(n)<<endl;
	cout<<"Number of set bits using method 2 is:"<<countBitsFast(n)<<endl;
	//Fastest method...
	//Inbuilt function
	cout<<"Number of set bits using method 3 is:"<< __builtin_popcount(n)<<endl;
	return 0;
}