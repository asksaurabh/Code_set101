#include<iostream>
using namespace std;

int binary_search(int a[],int low, int high, int key){

	while( low<= high){

		int mid = low + (high - low)/2;  //To avoid integer overflow use this mid calculation method instead of (low + high)/2

		if( a[mid] == key){
			return mid;
		}

		else if( a[mid] > key){
			high = mid -1;
		}

		else
			low = mid + 1;
	}

	return -1;  //If element is not found.
}
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

	int val = binary_search(a,0,n-1,key);

	val == -1? cout<<"Element not found!" : cout<<"Element found at index "<<val;

	return 0;

}	