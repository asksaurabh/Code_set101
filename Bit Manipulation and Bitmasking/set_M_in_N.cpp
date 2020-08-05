#include<iostream>
using namespace std;
/*
	Given two 32-bit integer N and M. and two bit positions i and j. U have to set M in N between i and j.
	N = 10000000000, i = 2, j = 6, M = 10101
	Output = 100001010100
	Remember M and N are integers and not strings. Rule out the concept of arrays replacement
*/
int setMinN(int n,int m,int i, int j){
	int ones = (~0);
	int a = ones << (j+1);
	int b = (1<<i) - 1;

	int mask = a|b;
	int cleared_n = n & mask;

	return cleared_n | (m << i);
}

int main(){

	int n=15, m=2, i=1, j=3;

	cout<<"New number after setting M in N is: "<<setMinN(n,m,i,j);
	return 0;
}