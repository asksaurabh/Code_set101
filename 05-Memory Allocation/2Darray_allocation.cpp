#include<iostream>
using namespace std;

int main(){

	int r,c;

	cout<<"Enter the rows and columns:";
	cin>>r>>c;

	//Make a array of row heads.
	int **arr = new int*[r];

	//Make a 2D array:

	for(int i=0; i<r; i++){

		arr[i] = new int[c]{0};          //Initialized all elements with zeroes.
	}

	//Input and output same.
	cout<<"Enter the elements:";
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin>>arr[i][j];
		}
	}

	cout<<"2D array:"<<endl;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}