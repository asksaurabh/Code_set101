#include<iostream>
#include<cstring>
using namespace std;

int main(){

	char s[100] = "Today is a rainy day ";

	char *ptr = strtok(s," ");
	cout<<ptr<<endl;

	ptr = strtok(NULL," ");
	cout<<ptr<<endl;

	while(ptr!=NULL){
		ptr = strtok(NULL," ");
		cout<<ptr<<endl;
	}

	/*
	char a[100] = "Lakhan, is , doing a pretty, good job";

	char *temp = strtok(a,",");
	cout<<temp<<endl;

	while( temp!= NULL){

		temp = strtok(NULL,",");
		cout<<temp<<endl;

	}
	*/

	return 0;
}