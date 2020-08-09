#include<iostream>
using namespace std;

int main(){

	int a[100][100],row,col;

	cout<<"Enter the number of rows and columns u want:";
	cin>>row>>col;

	cout<<"Enter the matrix elements:";
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++)
			cin>>a[i][j];
	}

	cout<<"Entered matrix elements are:"<<endl;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<"Wave print of the above matrix is:";
	for(int i=0; i<col; i++){

		//If the column is even-->> then come down.
		if( i%2 == 0){
			for(int j=0; j<row; j++){
				cout<<a[j][i]<<" ";
			}
		}

		else{
			for(int j=row-1; j>=0; j--){
				cout<<a[j][i]<<" ";
			}
		}
	}

	return 0;

}