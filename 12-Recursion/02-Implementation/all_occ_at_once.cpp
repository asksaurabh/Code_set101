#include<iostream>
using namespace std;

int storeOcc(int *a, int i, int n, int key, int *output, int j){
	//base case..
	//Sole purpose ids to return count of output..
	if(i == n)
		return j;
	//rec case
	if(a[i] == key){
		output[j] = i;
		return storeOcc(a,i+1,n,key,output,j+1);
	}
	//If element not matched..
	//Do not increment j..
	return storeOcc(a,i+1,n,key,output,j);
}

void allOcc(int *a, int i, int n, int key){
	if(n == 0){
		return;
	}

	if(a[i] == key)
		cout<<i<<" ";

	allOcc(a,i+1,n-1,key);
}

int main(){

	int a[] = {1,3,5,7,2,8,7,9};
	int n = sizeof(a)/sizeof(int);
	int key = 7;

	cout<<"Array is:";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	cout<<"\nKey is:"<<key<<endl;

	cout<<"All occurence of key are:";
	allOcc(a,0,n,key);

	int output[100];
	int count = storeOcc(a,0,n,key,output,0);
	cout<<"\nAll occurence of key are:";
	for(int i=0; i<count; i++)
		cout<<output[i]<<" ";	

	return 0;
}