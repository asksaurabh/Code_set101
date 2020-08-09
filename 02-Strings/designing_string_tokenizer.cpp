#include<iostream>
#include<cstring>
using namespace std;

char *mystrtok(char *str, char delim){

	//string and a single char acts as a delimiter.
	static char* input = NULL;                        //TO retain the state even after function call is over.

	if( str!= NULL){
		//For the first call
		input = str;
	}

	//Base case after the final token has been extracted.
	if(input == NULL){
		return NULL;
	}
	//start extracting tokens and store them in an array.
	//Dynamically allocate the space for string.

	char *output = new char[strlen(input) + 1];
	int i=0;

	for(;input[i]!= '\0';i++){

		if(input[i]!= delim){
			output[i] = input[i];
		}

		else{

			output[i] = '\0';
			input = input + i + 1;
			return output;
		}
	
	}

	//Corner case -> if at end , space is not found.
	output[i] = '\0';
	input = NULL;
	return output;

}

int main(){

	char s[100] = "Today,is a rainy,day ";

	char *ptr = mystrtok(s,',');       //Don't use double quotes it is taking a character.
	cout<<ptr<<endl;

	while(ptr!=NULL){
		ptr = mystrtok(NULL,',');
		cout<<ptr<<endl;
	}

	return 0;
}