#include<iostream>
using namespace std;

int main(){
	
	int a[100], n,left,right;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	int csum;
	int maxsum = 0;

	for(int i=0; i<n; i++){

		for(int j=i; j<n; j++){

			csum = 0;

			for(int k=i; k<=j; k++){

				csum += a[k];
			}
			
			if(maxsum <= csum){
				maxsum = csum;
				left = i;
				right = j;
			}
		}
		
	}

	cout<<"Maximum subarray sum is:"<<maxsum<<" and max subarray is::  ";
	for(int i=left; i<=right; i++){
		cout<<a[i]<<",";
	}

	return 0;
}