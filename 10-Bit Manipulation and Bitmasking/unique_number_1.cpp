#include<iostream>
using namespace std;

//given a array where every number exists twice except one. Find that unique number.
//Don't use extra space.
int main(){

	int a[100],n;
	cout<<"Enter the size:";
	cin>>n;

	int ans=0;

	cout<<"Enter the array:";
	for(int i=0; i<n; i++){
		cin>>a[i];
		ans = ans^a[i];
	}

	cout<<"Unique number is:"<<ans;
	return 0;
}