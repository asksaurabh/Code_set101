#include<iostream>
using namespace std;

int binary_search(int a[],int key,int start,int end){

	int mid = start + (end - start)/2;

	if(start > end)
		return -1;
	if(a[mid] == key)
		return mid;
	if(a[mid] > key)
		return binary_search(a,key,start,mid-1);
	if(a[mid] < key)
		return binary_search(a,key,mid+1,end);

	return -1;
}
int main(){

	int arr[10000],n;

	cout<<"Enter the size of array:";
	cin>>n;

	cout<<"Enter the sorted array:";
	for(int i=0; i<n; i++)
		cin>>arr[i];

	cout<<"Enter the key to be searched:";
	int key;
	cin>>key;

	int ans = binary_search(arr,key,0,n-1);
	ans  == -1? cout<<"Element not found!":cout<<"Element found at index:"<<ans;

	return 0;
}