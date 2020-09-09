#include<iostream>
#include<cstring>
using namespace std;

int main(){

	char ch[1000];
	char largest[1000];

	int n,k;
	int len=0;
	int largest_len = 0;

	cout<<"Enter the testcases:";
	cin>>n;

	cin.get();    //To consume 'ENTER' otherwise cin.getline() will consume it.

	for(int i=0; i<n; i++){
		cin.getline(ch,1000);

		len = strlen(ch);

		if(len > largest_len){
			largest_len = len;

			//IMPLEMENTING strcpy() function
			
			for(k=0; ch[k]!= '\0'; k++){        //Don't declare int i inside.(USE k).Two interconnected loops no same variable.

				largest[k] = ch[k];				//Otherwise when u use it outside it will be out of local scope.
			}
			largest[k] = '\0';                

			//strcpy(largest,ch);
		}
	}

	cout<<"Largest string is: ";
	cout<<largest;
	cout<<" and it's length is :"<<largest_len;
	return 0;

}