#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){     //This function decides how to compare two integers.	

	//remember here a is (i+1)th element and b is (i)th index.
	cout<<"Comparing "<<a<<" and "<<b<<endl;
	return a > b;
}

int main(){

	int a[100], n;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	//Inbuilt sort function..

	sort(a,a+n,compare);              //Alter the compare function to see ascending and descending order

	cout<<"Array after inbuilt sort:";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	return 0;
}