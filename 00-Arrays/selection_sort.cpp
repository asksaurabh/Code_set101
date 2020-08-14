#include<iostream>
using namespace std;

int main(){

	int a[100],n,min_index;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array:";
	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=0; i<n-1; i++){  //Last element is n-1 which will be left at last and thus no comparison required.

		min_index = i;         //Tells where the sorted array pointer is.

		for(int j=i+1 ; j<= n-1; j++){

			if( a[min_index] > a[j]){          //comparisons to find the minimum index.

				min_index = j;
			}
		}

		swap(a[i] , a[min_index]);
	}

	cout<<"After selection sort:";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	return 0;
}	
