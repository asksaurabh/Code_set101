#include<iostream>
#include<string>

using namespace std;

int main(){

	string s;

	string s1("Hello");

	string s2 = "Hello World";

	string s3(s2);

	string s4 = s3;

	char a[] = {'a','b','c','\0'};

	string s5(a);

	cout<<"s1 :: "<<s1<<endl;
	cout<<"s2 :: "<<s2<<endl;
	cout<<"s3 :: "<<s3<<endl;
	cout<<"s4 :: "<<s4<<endl;
	cout<<"s5 :: "<<s5<<endl;

	//TO check if string is empty or not use .empty()

	if(s.empty())
		cout<<"String s is Empty"<<endl;
	else
		cout<<"Not empty s"<<endl;;

	if(s1.empty())
		cout<<"String s1 is Empty"<<endl;
	else
		cout<<"Not empty s1"<<endl;	

	//To append a string.
	s.append("Saurabh Kumar");
	cout<<"string s:"<<s;

	s1.append("World");                //Append is done without adding spaces.
	cout<<"\nstring s1:"<<s1;

	//Another way to append..
	s2 += " India";
	cout<<"\nstring s2:"<<s2;

	//Length and clear function().
	cout<<"\nLength of s2 before deletion:"<<s2.length();
	s2.clear();
	cout<<"\nLength of s2 after deletion:"<<s2.length()<<endl;

	string s6 = "Apple";
	string s7 = "Mango";

	cout<<s6.compare(s7)<<endl;             //Lexicographic comparison
	cout<<s7.compare(s6)<<endl;

	//Can directly access index.
	cout<<s6[0]<<endl;

	//Finding substring..
	string s8 = "I love apple juice";
	int ind = s8.find("apple");
	cout<<ind<<endl;                 //-1 if substring is not found otherwise the index of the substring.

	//Erase function
	string word = "apple";
	int len = word.length();
	cout<<s8<<endl;
	s8.erase(ind,len);
	cout<<s8<<endl;

	//Iterate over all the characters
	for(int i=0; i<s6.length() ; i++)
		cout<<s6[i]<<";";

	cout<<endl;
	//Iterators
	for(auto it = s6.begin(); it<s6.end(); it++)
		cout<<(*it)<<",";

	cout<<endl;
	//for each loop
	for(auto c:s6)
		cout<<c<<".";

	return 0;
}