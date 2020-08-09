#include<iostream>
using namespace std;

void bubble_sort(int *a, int n){

	//We need to move n-1 Large elements to the end.

	for(int itr=1; itr <= n-1; itr++){

		//We have to do pariwise swapping in each iteration..
		//First make a run in copy and then code..

		for(int j = 0; j <= n-itr-1 ; j++){

			if( a[j] > a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
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

	bubble_sort(a,n);
	cout<<"After bubble sort:";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	return 0;

}
