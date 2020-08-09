#include<iostream>
using namespace std;

int main(){

	char a[1000][1000];

	int n;

	cout<<"Enter number of strings:";
	cin>>n;

	cin.get();                           //Consume the extra enter to prevent being read in getline function.

	cout<<"Enter the strings:"<<endl;
	for(int i=0; i<n; i++)
		cin.getline(a[i],1000);

	cout<<"Entered 2D array is:"<<endl;
	for(int i=0; i<n; i++)
		cout<<a[i]<<endl;

	return 0;

}