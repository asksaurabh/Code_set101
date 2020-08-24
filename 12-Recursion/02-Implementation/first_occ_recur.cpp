//Find the first occurence of the searched key using recursion..
#include<iostream>
using namespace std;

int first_occurence(int a[], int n, int key){

	//Base case..
	if(n == 0)
		return -1;

	//Recursive case..
	if(a[0] == key)
		return 0;

	int index = first_occurence(a+1, n-1, key);
	if(index == -1)
		return -1;

	return index+1;    //Just incrementing the value for other arrays...
}

//Conversion of for loop the recursive case...
int linearSearch(int *a, int i, int n, int key){
	//Base case..
	if(i == n)
		return -1;

	//Rec case..
	if(a[i] == key)
		return i;     // i is the actual position..

	return linearSearch(a,i+1,n-1,key);
}

int main(){

	int a[] = {1,3,5,7,2,8,7,9};
	int n = sizeof(a)/sizeof(int);
	int key = 7;

	cout<<"Array is:";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	cout<<"\nKey is:"<<key<<endl;

	cout<<"First occurence of key = 7 in array is:"<<first_occurence(a,n,key)<<endl;
	cout<<"First occurence using linearSearch is:"<<linearSearch(a,0,n,key)<<endl;  //i is the starting index..

	
	return 0;
}