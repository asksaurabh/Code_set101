/*
LINK TO THE problem: https://hack.codingblocks.com/app/practice/1/1051/problem

*/
#include<iostream>
using namespace std;

void magical_park(char a[][100], int n, int m,int s,int k){

	bool success = true;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){

			char ch = a[i][j];

			if( s<k){
				success = false;
				break;
			}

			if(ch == '.')
				s -= 2;
			
			else if(ch == '*')
				s += 5;

			else
				break;	

			if(j != m-1)
				s--;	
		}
	}

	if(success)
		cout<<"Yes"<<endl<<s;
	else
		cout<<"No";	

}
int main() {
	char a[100][100];

	int n,m,k,s;

	cin>>n>>m>>k>>s;

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}

	magical_park(a,n,m,s,k);

	return 0;
}