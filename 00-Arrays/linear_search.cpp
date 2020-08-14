#include<iostream>
using namespace std;

int main(){
	
	int a[100],n,i;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array:";
	for(int i=0; i<n; i++){

		cin>>a[i];
	}


	int key;

	cout<<"Enter the key to be searched:";
	cin>>key;

	for(i=0; i<n; i++){        //Don't declare int i inside as I have to use "i" outside.

		if(a[i] == key){
			cout<<"Element found at index: "<<i;
			break;                //No need to check further.
		}
	}

	if( i == n){                     //If element is not found in the array then at last value of i will be equal to n.
		cout<<"Element not found!";
	}
	return 0;
}