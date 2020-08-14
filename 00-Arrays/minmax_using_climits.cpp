#include<iostream>
#include<climits>
using namespace std;

int main(){

	int a[100],n;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array:";
	for(int i=0; i<n; i++){

		cin>>a[i];
	}

	int maxi = INT_MIN;
	int mini = INT_MAX;

	/*
	for(int i=0; i<n; i++){

		if( a[i] >= maxi)
			maxi = a[i];

		if( a[i] <= mini)
			mini = a[i];
	}

	*/

	/*
		U can also use the inbuilt max and min funtions...
	*/

	
	for(int i=0; i<n; i++){

		maxi = max(a[i],maxi);

		mini = min(mini,a[i]);          //Inbuilt functions.
	}
	

	cout<<"Maximum and Minimum values in array are "<< maxi <<" and "<<mini;
	return 0;
}