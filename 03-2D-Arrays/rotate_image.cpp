//LINK-->> https://hack.codingblocks.com/app/practice/2/1012/problem
#include<iostream>
using namespace std;

void rotate_image(int a[][1000], int n){

	//Reverse the rows of the array.
	for(int i=0; i<n; i++){
		int startcol = 0;
		int endcol = n-1;

		while(startcol<endcol){
			swap(a[i][startcol],a[i][endcol]);
			startcol++;
			endcol--;
		}
	}

	/*
	STL to reverse.
	for(int i=0; i<n; i++)
		reverse(a[i],a[i]+n);       INCLUDE algorithm header file for it to work.
	*/
	
	//Take transpose..
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			
			if(i<j)
				swap(a[i][j], a[j][i]);
		}
	}
}

int main(){

	int a[1000][1000],n;

	cin>>n;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){

			cin>>a[i][j];
		}
	}

	rotate_image(a,n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){

			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}