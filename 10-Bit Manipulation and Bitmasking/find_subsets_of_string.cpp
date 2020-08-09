#include<iostream>
#include<cstring>
using namespace std;

void filterchars(int n, char a[]){
	int index = 0;

	while(n>0){
		int last_bit = n & 1;
		if(last_bit){              //If last_bit is set(means 1)
			cout<<a[index];
		}
		index++;
		n = n>>1;
	}
}

void printsubsets(char a[]){

	int n = strlen(a);
	for(int i=0; i< (1<<n); i++){         //Loop runs till 2^n - 1 times(maximum subsets).
		filterchars(i,a);
		cout<<endl;
	}
}

int main(){

	char a[100];

	cout<<"Enter the string:";
	cin>>a;

	printsubsets(a);
	return 0;
}