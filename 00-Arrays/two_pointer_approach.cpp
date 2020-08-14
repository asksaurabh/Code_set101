//Given a sorted array, find pair of elements that sums to K(given)
#include<iostream>
using namespace std;

// Pair sum problem.
int main(){

	int a[100], n,k;
	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	cout<<"Enter the sum:";
	cin>>k;

	int i = 0;
	int j = n-1;
	
	cout<<"All possible pairs are: ";
	while(i<j){

		if(a[i] + a[j] == k){
			
			cout<<"("<<a[i]<<","<<a[j]<<")"<<" ";
			i++;
			j--;
		}

		else if((a[i] + a[j]) < k)
			i++;

		else
			j--;

	}
	return 0;
}