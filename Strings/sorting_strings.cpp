#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool compare(string a, string b){
	return a.length() > b.length();
}

int main(){
	
	string s[100];    //Array of strings.

	int n;

	cout<<"Enter the number of strings:";
	cin>>n;

	cin.get();                    //To consume extra enter so it does't gets included in getline() function.

	for(int i=0; i<n; i++)
		getline(cin,s[i]);        //Follow this to input the strings..

	//sort(s,s+n);         //Will do lexicographic sorting.
	sort(s,s+n,compare);        //Based on length sorting.

	cout<<"All entered strings after sorting:"<<endl;
	for(int i=0; i<n; i++)
		cout<<s[i]<<endl;
	
	return 0;
}