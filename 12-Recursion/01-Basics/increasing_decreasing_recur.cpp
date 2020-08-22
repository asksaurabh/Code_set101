#include<iostream>
using namespace std;

void decreasing_order(int n){

	//Base case..
	if (n == 0)
		return;

	cout<<n<<" ";
	decreasing_order(n-1);
}

void increasing_order(int n){
	
	//Base Case..
	if(n == 0)
		return;
	
	increasing_order(n-1);
	cout<<n<<" ";
	
}
int main(){

	int n;
	cout<<"Enter the number:";
	cin>>n;

	cout<<"First N numbers in decreasing order are:";
	decreasing_order(n);
	cout<<"\nFirst N numbers in increasing order are:";
	increasing_order(n);

	return 0;
}