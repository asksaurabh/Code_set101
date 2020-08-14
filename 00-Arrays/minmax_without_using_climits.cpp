#include<iostream>
using namespace std;

int main(){

	int a[100],n;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array:";
	for(int i=0; i<n; i++){

		cin>>a[i];
	}

	int maxi = a[0];
	int mini = a[0];

	
	for(int i=0; i<n; i++){

		if( a[i] >= maxi)         // Don't forget = comparison.
			maxi = a[i];        //Normal Comparisons.

		if( a[i] <= mini)
			mini = a[i];
	}


	/*
		U can also use the inbuilt max and min funtions...
	*/

	/*
	for(int i=0; i<n; i++){

		maxi = max(a[i],maxi);

		mini = min(mini,a[i]);
	}
	*/

	cout<<"Maximum and Minimum values in array are "<< maxi <<" and "<<mini;
	return 0;
}