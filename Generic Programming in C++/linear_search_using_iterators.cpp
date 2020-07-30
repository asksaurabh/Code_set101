#include<iostream>
#include<list>
using namespace std;

template<class ForwardIterator, class T>       //ForwardIterator denotes the type of conatiner we r using.

ForwardIterator search(ForwardIterator start, ForwardIterator end, T key){

	while(start!= end){

		if(*start == key)
			return start;

		start++;
	}
	return end;
}

int main(){

	list<int> l;

	l.push_back(1);
	l.push_back(5);
	l.push_back(3);
	l.push_back(4);
	l.push_back(6);

	auto it = search(l.begin(),l.end(), 1);
	if(it == l.end())
		cout<<"Element not present"<<endl;
	else
		cout<<*it<<endl;

	cout<<typeid(it).name();
	return 0;
}