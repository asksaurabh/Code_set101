#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int a[100], n;

	cout<<"Enter the number of elements:";
	cin>>n;

	cout<<"Enter the array:";
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	int key;
	cout<<"Enter the key:";
	cin>>key;

	auto it = find(a,a+n,key);
	int index = it - a;                //Found address - Base address.

	if(index == n)
		cout<<key<<" not found in the array.";

	else
		cout<<"Found at index:"<<index;

	return 0;

}