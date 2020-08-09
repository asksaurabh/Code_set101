#include<iostream>
using namespace std;

bool compare(int a, int b){
	return a<b ;
}

void bubble_sort(int *a, int n, bool (&cmp) (int a,int b)){

	for(int itr=1; itr<= n-1; itr++){

		for(int j=0; j <= n-itr-1 ; j++){

			if(cmp(a[j],a[j+1]))
				swap(a[j],a[j+1]);
		}
	}
}

int main(){

	int a[100],n;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	bubble_sort(a,n,compare);

	cout<<"Array after bubble sort:";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	return 0;
}