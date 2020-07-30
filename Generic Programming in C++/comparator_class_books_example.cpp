#include<iostream>
#include<list>
#include<string>
#include<vector>
using namespace std;

//Templates + Iterators + Comparators..

template<class ForwardIterator, class T, class Compare>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key, Compare cmp){

	while(start!= end){        //Remember end is excluded ... [s,e)

		if(cmp(*start,key))      //BookCompare function executes...
			return start;

		start++;
	}
	return end;
}

class book{
	public:
		string name;
		int price;

	book(){

	}	

	book(string name, int price){

		this->name = name;
		this->price = price;
	}
};

class BookCompare{               // Comparator function.

	public:
		bool operator()(book A, book B){                          //Here we have overloaded to ()brackets.
			
			if(A.name == B.name){
				return true;
			}
			return false;
		}
};

int main(){

	book b1("C++",100);  //old edition
	book b2("Java",120);
	book b3("Python",140);
	//book b4(b1);

	vector<book> l;             //list<book> l ...... Try any sequential comparator
	l.push_back(b1);
	l.push_back(b2);
	l.push_back(b3);

	book key("C++", 110); //new edition of book...Also the book to search in the list.

	//Now how to find the book..... Here we need comparators for making our search fun. more efficient
	BookCompare cmp;         //Object of BookCompare

	/*
	if(cmp(b1,key)){
		cout<<"Match found";
	}
	*/

	auto it = search(l.begin(), l.end(), key, cmp);
	if(it == l.end())
		cout<<"Book not found";
	else
		cout<<"Book found";

	return 0;
}