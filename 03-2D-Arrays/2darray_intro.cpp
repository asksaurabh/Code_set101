#include<iostream>
using namespace std;

int main(){

	int a[3][3]={0};

	cout<<"Existing 2D array:"<<endl;
	for(int row = 0; row<3; row++){
		for(int col = 0; col<3; col++){
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}

	cout<<"Enter the elements u want(Row wise):"<<endl;
	for(int row = 0; row<3; row++){
		for(int col = 0; col<3; col++){
			cin>>a[row][col];
		}
	}

	cout<<"Final 2D-Array:"<<endl;
	for(int row = 0; row<3; row++){
		for(int col = 0; col<3; col++){
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}

	return 0;
}