#include<iostream>
using namespace std;

int main(){

	int a[100],n,left=0,right=0,final_left=0;

	cout<<"Enter the size of the array:";
	cin>>n;

	cout<<"Enter the array:";
	for(int i=0; i<n; i++)
		cin>>a[i];

	int cs = 0;
	int ms = 0;

	for(int i=0; i<n; i++){

		cs = cs + a[i];

		if(cs < 0){

			cs = 0;
			left = i+1;
		}

		if(cs > ms){
			ms = cs;

			final_left = left;         //Be careful about indexes..
			right = i;
		}
	}

	cout<<"Maximum subarray sum is:"<<ms<<endl;
	cout<<"Maximum subarray is:";
	for(int i = final_left ; i<= right; i++)
		cout<<a[i]<<" ";

	return 0;
}