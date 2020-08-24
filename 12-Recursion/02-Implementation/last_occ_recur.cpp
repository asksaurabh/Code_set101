#include <iostream>
using namespace std;

int last_occurence(int *a, int n, int key){
	//Base case..
	if(n == 0)
		return -1;

	//Rec case..
	int last_index = last_occurence(a+1,n-1,key);
	
	if(last_index == -1){                  //Remember we are coming from back and checking.
		if(a[0] == key)
			return 0;
		else
			return -1;
	}

	//Otherwise if index returned by subproblem is not -1.
	return last_index + 1;
}

int linearSearch(int *a, int i, int n,int key){
	//Base case..
	if(i < 0)
		return -1;

	//Rec case.
	if(a[i] == key)
		return i;     //All we r doing is iterating from back in normal for loop

	return linearSearch(a,i-1,n,key);
}
int main(){

	int a[] = {1,3,5,7,2,8,7,9};
	int n = sizeof(a)/sizeof(int);
	int key = 7;

	cout<<"Array is:";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	cout<<"\nKey is:"<<key<<endl;
	cout<<"Last occurence of key = 7 in array is:"<<last_occurence(a,n,key)<<endl;
	cout<<"Last occurence using linearSearch is:"<<linearSearch(a,n-1,n,key)<<endl; 

}