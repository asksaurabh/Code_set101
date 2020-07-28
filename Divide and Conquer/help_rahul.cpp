/* LINK --> https://hack.codingblocks.com/app/practice/6/1044/problem
Problem is to return the index from a sorted rotated array
*/
#include<iostream>
using namespace std;

int find(int *a, int n, int key){

	int s = 0;
	int e = n-1;

	while(s<=e){
		int mid = s + (e-s)/2;

		if(a[mid] == key)
			return mid;

		//First part
		else if(a[s] <= a[mid]){
			// 2 cases --> element lies on left or on the right of mid.
			if(key>=a[s] and key<= a[mid])
				e = mid -1;
			else
				s = mid + 1;
		}

		else{

			if(key>= a[mid] and key<= a[e])
				s = mid +1;
			else
				e = mid -1;
		}
	}

	return -1;
}

int main(){

	int n,key;
	int a[1000000];

	cin>>n;
	for(int i=0; i<n; i++)
		cin>>a[i];
	cin>>key;

	cout<<find(a,n,key);
	return 0;
}