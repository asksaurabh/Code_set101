//Search in a row and column wise sorted 2D array.
#include<iostream>
using namespace std;

bool staircase_search(int a[][100], int n,int key){

	if(n == 0)
		return false;

	int smallest_no = a[0][0];
	int largest_no = a[n-1][n-1];

	if(key < smallest_no or key > largest_no)
		return false;

	//Top right corner markers..
	int i=0; int j= n-1;

	while(i<n and j>=0){

		if(a[i][j] == key){
			cout<<"Element found at a["<<i<<"]"<<"["<<j<<"]";
			return true;
		}

		else if(a[i][j] < key)
			i++;
		else
			j--;
	}
	return false;
}

int main(){

	int a[100][100];
	int n,key;
	cout<<"Enter the value of n:";
	cin>>n;

	cout<<"Enter the matrix elements(row and column wise sorted):";
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cin>>a[i][j];
	}

	cout<<"Entered matrix elements are:"<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<"Enter the element to searched:";
	cin>>key;

	if(!staircase_search(a,n,key))
		cout<<"Element not found";

	return 0;
}