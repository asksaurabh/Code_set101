#include<iostream>
using namespace std;

void spiral_print(int a[][100], int r, int c){

	int startrow = 0;
	int startcol = 0;
	int endrow = r-1;
	int endcol = c-1;

	while(startrow <= endrow and startcol <= endcol){

		//First row.
		for(int i = startcol ; i<=endcol; i++){
			cout<<a[startrow][i]<<" ";
		}
		startrow++;

		//End column.
		for(int i = startrow; i<= endrow; i++){
			cout<<a[i][endcol]<<" ";
		}
		endcol--;

		//End row.
		if(endrow > startrow){                          //To avoid repition of end row.
			for(int i= endcol; i>= startcol; i--){
				cout<<a[endrow][i]<<" ";
			}
			endrow--;
		}

		//start col.
		if(endcol > startcol){                          //To avoid repition why only to them because they are printed last
			for(int i= endrow; i>= startrow; i--){
				cout<<a[i][startcol]<<" ";
			}
			startcol++;
		}

	}

}

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

	cout<<"Spiral print of the matrix is:";
	spiral_print(a,row,col);

	return 0;
}