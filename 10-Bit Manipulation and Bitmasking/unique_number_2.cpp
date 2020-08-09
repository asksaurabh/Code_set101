// LINK-->> https://hack.codingblocks.com/app/practice/5/213/problem
#include<iostream>
using namespace std;

int main(){

	int n,no;
	int a[100000];

	cin>>n;
	int res = 0;

	for(int i=0; i<n; i++){
		cin>>a[i];
		res = res ^ a[i];
	}

	int temp = res;
	int pos = 0;    // position of first set bit

	while((temp & 1) != 1){
		pos++;
		temp = temp >> 1;
	}

	// the first set bit in result is at position 'pos'...
	//Now create a mask to find the number in array that have the set bit at same position.

	int mask = 1 << pos;
	int first_num = 0;

	for(int i = 0; i<n; i++){
		if((a[i] & mask) > 0){
			first_num = first_num ^ a[i];
		}
	}

	int second_num = res ^ first_num;

	cout<<min(first_num,second_num)<<" "<<max(first_num,second_num);
	return 0;
}