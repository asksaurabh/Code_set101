#include<iostream>
using namespace std;

int main(){
	
	int a[100], n;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	cout<<"Subarrays are:"<<endl;

	for(int i=0; i<n; i++){

		for(int j=i; j<n; j++){

			for(int k=i; k<=j; k++){

				cout<<a[k]<<" ";
			}
			cout<<endl;
		}
		//cout<<endl;
	}
	return 0;
}