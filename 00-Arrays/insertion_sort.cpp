#include<iostream>
using namespace std;

void insertion_sort(int *a, int n){
	//My first element is always sorted, So I have to traverse from 1 to n-1 in the array...
	for(int i=1; i<n; i++){

		int key = a[i];
		int prev = i - 1;

		while(prev >= 0 and a[prev] > key){

			a[prev+1] = a[prev];   //Move(copy) the previous element to next index
			prev--;                //Continue comparison for all previous elements 
		}

		a[prev + 1] = key;         //Copy this key element to the (prev+1)th index where condition of while fails.
	}
}
int main(){

	int a[100],n,min_index;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array:";
	for(int i=0; i<n; i++){

		cin>>a[i];
	}

	insertion_sort(a,n);
	cout<<"After insertion sort:";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	return 0;

}	