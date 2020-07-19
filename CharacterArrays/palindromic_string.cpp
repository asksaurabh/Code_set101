#include<iostream>
#include<cstring>
using namespace std;

bool isPalindromic(char a[]){

	int i=0;
	int j= strlen(a)-1;   //WHy -1 because last character is null.

	while( i<j ){

		if(a[i] == a[j]){

			i++;
			j--;
		}

		else
			return false;
	}
	return true;
}
int main(){

	char ch[1000];

	cout<<"Enter the string:";
	cin.getline(ch,1000);

	if(isPalindromic(ch))
		cout<<"String is a palindrome";

	else
		cout<<"String is not a palindrome";

	return 0;
}