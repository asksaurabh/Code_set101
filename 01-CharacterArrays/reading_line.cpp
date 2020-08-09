#include<iostream>
using namespace std;

void getline(char a[], int maxlen, char delim = '\n'){

	int i=0;

	char ch = cin.get();     //Accepts one character at a time..

	while( ch!= delim){

		a[i] = ch;
		i++;

		if(i == maxlen-1)    //Why maxlen-1? beacuse we have to reserve a space for null character.
			break;

		ch = cin.get();
	}

	a[i] = '\0';   //Last character of the character array should be a null character.
}
int main(){

	char a[1000];

	cout<<"Enter the character array:";

	//getline(a,n,'$');              THis works same as cin.getline().
	cin.getline(a,1000,'$');        //provided by C++.. By default it terminates at '\n'.Her it will terminate as '$'
	
	cout<<"\nEntered sentence is:"<<endl;
	cout<<a;
	
	return 0;
}