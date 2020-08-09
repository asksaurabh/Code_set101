#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int a[] = {10,20,30,40,40,40,50,60,70};
	int n = sizeof(a)/sizeof(int);
	int key;

	cout<<"Current array:";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	cout<<"\nEnter the key:";
	cin>>key;

	bool present = binary_search(a,a+n,key);

	if(present){
		cout<<"Element found"<<endl;

		//lower_bound returns address of first element >= key
		//upper_bound returns address of first element > key

		auto it = lower_bound(a,a+n,key);     //returns the address of searched key (first occurence)
		//to get index
		cout<<"First occurrence of "<<key<<" is:"<< (it - a)<<endl;

		auto it2 = upper_bound(a,a+n,key);
		cout<<"First element greater than key is present at:"<< (it2 - a)<<endl;

		cout<<"Frequency of searched element is:"<< (it2 - it);
	}
	
	else
		cout<<"Element not found";

	return 0;
}
