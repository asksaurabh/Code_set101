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
int main(){

	int N = 5;
	int i = 2;        //ith bit

	cout<<"After clearing 2nd bit:"<<clearBit(N,i)<<endl;

	//Update bits...
	cout<<"After updating 1st bit of 5 with v = 1: "<<updateBit(N,1,1)<<endl;
	cout<<"After updating 2nd bit of 5 with v = 0: "<<updateBit(N,2,0)<<endl;

	//Careful with the use of brackets in bit wise operations.
	return 0;
}