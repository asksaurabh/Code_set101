#include<iostream>
using namespace std;

//Design a generic function to search the element in the array of different data types.

template<typename T>                      // OR template<class T> where T is the data type of different array
int search(T arr[], int n, T key){

	for(int i=0; i<n; i++){

		if(arr[i] == key)
			return i;
	}

	return n;
}

int main(){

	int a[] = {10,20,30,40,50,60};
	int n = sizeof(a)/sizeof(a[0]);

	int key = 50;

	cout<<"Position of key is :"<<search(a,n,key)<<endl;

	float b[] = {1.1,1.2,1.3,1.4};
	int n1 = sizeof(b)/sizeof(a[0]);

	float k = 1.2;
	cout<<"Position of key is :"<<search(b,n1,k)<<endl;
	return 0;
} 