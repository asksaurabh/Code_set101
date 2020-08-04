#include<iostream>
using namespace std;

int clearBit(int n, int i){
	int mask = ~(1 << i);
	int ans = (n & mask);
	return ans;
}

int updateBit(int n, int i, int v){

	int num = clearBit(n,i);
	int mask = (v << i);
	int ans = (num | mask);

	return ans;
}

int clearLastiBits(int n, int i){
	int mask = (-1 << i);
	return n & mask;

}

int clearRange(int n, int i,int j){

	int ones = (~0);
	int a = ones << (j+1);
	int b = (1<<i) - 1;

	int mask = a|b;

	return n & mask;
}

int main(){

	int N = 15;
	int i = 2;        //ith bit

	//Clearing last i bits.
	cout<<"After clearing last 2 bits of 15: "<<clearLastiBits(N,i)<<endl;

	//Clearing range of bits.
	cout<<"After clearing from i to j th bit:"<<clearRange(N,1,3)<<endl;

	return 0;
}