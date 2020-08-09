#include<iostream>
using namespace std;

int main(){

	int a[10] = {1,2,3};
	int n;

	for(int i=0; i<10; i++){
		cout<<a[i]<<" ";
	}
	cout<<"\nEnter the number of terms:";
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	cout<<"Size of the array:"<<sizeof(a)<<endl;
	cout<<"Number of elements:"<< sizeof(a)/sizeof(int);
	cout<<endl;

	for(int i=0; i<10; i++){
		cout<<a[i]<<" ";
	}

	return 0;
}