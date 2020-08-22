#include<iostream>
using namespace std;

// Using recursion check if the array is sorted or not.

bool array_check(int arr[], int n){

	//Base case:
	if(n == 0 or n == 1)
		return true;              //Array of size one and 0 are always sorted..

	if(arr[0] < arr[1] and array_check(arr+1,n-1))     //If a[0]<a[1] assuming the other part is also sorted
		return true;

	return false;
}

int main(){

	int arr[10000];
	int n;

	cout<<"Enter the size:";
	cin>>n;

	cout<<"Enter the array:";
	for(int i=0; i<n; i++)
		cin>>arr[i];

	if(array_check(arr,n))
		cout<<"Array is sorted!";
	else
		cout<<"Array not sorted!";

	return 0;
}