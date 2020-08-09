#include<iostream>
using namespace std;

bool oddEven(int n){
	return (n & 1);
}

int getBit(int n, int i){           //TO get the ith bit from right(indexing from 0)
	int mask = 1 << i;
	return (n & mask)>0 ? 1:0;
}

int setBit(int n, int i){
	int mask = (1 << i);
	int ans = (n | mask);            //set the ith bit...if it was one it will remain same else no is changed
	return ans;
}


int main(){

	int N = 5;
	int i = 2;        //ith bit
	//check if n is odd or even.
	cout<<"(1 for odd, 0 for even):"<<oddEven(N)<<endl;

	//to get the ith bit of N.
	cout<<"Second bit of 5(from right indexing from 0):"<<getBit(N,i)<<endl;

	//to set the ith bit.
	cout<<"Ans:"<<setBit(N,2)<<endl;
	cout<<"Ans:"<<setBit(N,1)<<endl;

	return 0;
}