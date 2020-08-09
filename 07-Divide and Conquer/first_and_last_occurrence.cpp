#include<iostream>
using namespace std;

int first_occurence(int *a, int n,int key){

	int s = 0;
	int e = n-1;

	int ans = -1;          //Maintaining the index of the lowest occurence.

	while( s<=e ){
		int mid = s + (e-s)/2;

		if(a[mid] == key){
			ans = mid;
			e = mid-1;
		}

		else if(a[mid]<key)
			s = mid+1;
		else
			e = mid -1;
	}
	return ans;
}

int last_occurence(int *a, int n, int key){

	int s = 0;
	int e = n-1;

	int ans = -1;          //Maintaining the index of the largest occurence.

	while( s<=e ){
		int mid = s + (e-s)/2;

		if(a[mid] == key){
			ans = mid;
			s = mid+1;        //Because largest will occur in the right of sorted array.
		}

		else if(a[mid]<key)
			s = mid+1;
		else
			e = mid -1;
	}
	return ans;	
}

int main(){

	//Find the first and last occurence of searched key in given sorted array.
	int a[] = {1,2,5,8,8,8,8,8,10,12,15,20};

	int n = sizeof(a)/sizeof(int);

	cout<<"Array present:";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	int key;
	cout<<"\nEnter the key:";
	cin>>key;

	int lb = first_occurence(a,n,key);
	lb == -1? cout<<"Element not found." : cout<<"First occurence is at:"<<lb;

	int ub = last_occurence(a,n,key);
	ub == -1? cout<<"\nElement not found." : cout<<"\nLast occurence is at:"<<ub;
	return 0;

}