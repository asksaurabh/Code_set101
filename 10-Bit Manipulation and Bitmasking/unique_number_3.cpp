// LINK-->> https://hack.codingblocks.com/app/practice/5/433/problem

#include<iostream>
using namespace std;

int main(){

	int sum_arr[64] = {0};     //Because max bit can be a 64 bit integer
	int n, no;

	cin>>n;
	for(int i=0; i<n; i++){
		cin>>no;
		//store the 0th bit at 0th position and so on.
		int j = 0;
		while(no > 0){
			int last_bit = no & 1;
			sum_arr[j] += last_bit;
			j++;
			no = no>>1;
		}
	}

	//iterate over the array and reduce everything by % 3.(because sum is either 3N or 3N+1)
	int power = 1;
	int ans = 0;
	for(int i=0; i<64; i++){
		sum_arr[i] = sum_arr[i] % 3;
		ans += sum_arr[i] * power;
		power *= 2;                    //OR power<<1.  same thing...
	}

	cout<<ans;
	return 0;
}