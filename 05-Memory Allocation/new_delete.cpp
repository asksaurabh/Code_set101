#include<iostream>
using namespace std;

int main(){

	//Static memory allocation
	int arr[10] = {0};

	cout<<"Size of arr(Static):"<<sizeof(arr)<<endl;

	int n;
	cout<<"Enter n:";
	cin>>n;

	//Dynamic memory allocation
	int *a = new int[n]{0};
	cout<<"Size of array(dynamic):"<<sizeof(a)<<endl;   //Actually returns size of the pointer variable

	//Input output will remain same.
	cout<<"Enter the elements:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	//now idealy delete the array a to avoid memory leak.

	delete [] a;

	//We do not need to delete the static array as once the function call is over it is automatically deleted.
	return 0;

}