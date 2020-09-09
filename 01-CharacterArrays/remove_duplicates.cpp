/*Remove consecutive duplicates... ccoooding -> coding
*/

#include<iostream>
#include<cstring>

using namespace std;

void remove_duplicates(char a[]){

	int prev = 0;
	int l = strlen(a);

	if( l == 1 or l==0)
		return;

	for(int curr = 1; curr < l; curr++){

		if(a[prev] != a[curr]){
			prev++;
			a[prev] = a[curr];
		}
	}

	a[prev+1] = '\0';
}

int main(){

	char ch[1000];

	cout<<"Enter the string:";
	cin.getline(ch,1000);

	remove_duplicates(ch);

	cout<<"String after removing consecutive duplicates:"<<ch;

	return 0;
}