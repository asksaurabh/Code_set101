#include<iostream>
using namespace std;

int main(){

	pair<int,char> p;
	p.first = 10;
	p.second = 'B';

	cout<<p.first<<endl;
	cout<<p.second<<endl;

	pair<int,char> p2(p);
	cout<<p2.first<<endl;
	cout<<p2.second<<endl;

	//make_pair function
	pair<int,string> p3 = make_pair(100,"Baby");
	cout<<p3.first<<" "<<p3.second<<endl;

	//take input
	int a, b;
	cin>>a>>b;

	pair<int,int> p4 = make_pair(a,b);
	cout<<p4.first<<" "<<p4.second<<endl;

	//Pair of pair
	pair<pair<int,int>,string> car;
	car.second = "BMW";
	car.first.first = 10;
	car.first.second = 20;

	cout<<car.second<<" "<<car.first.first<<" "<<car.first.second<<endl;

	return 0;
}