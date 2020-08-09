#include<iostream>
#include<vector>

using namespace std;

int main(){

	vector<int> d = {1,3,4,6,8};
	//push_back func.     O(1) most of the times.(expect expanding)
	d.push_back(16);
	for(int i:d)
		cout<<i<<" ";
	cout<<endl;

	//pop_back -->>POP out the last value       ... O(1) most of the times
	d.pop_back();
	for(int i:d)
		cout<<i<<" ";
	cout<<endl;

	//insert where ever u want -->> JUST specify the position.....O(N) where N denotes total elements u have added.
	d.insert(d.begin()+3, 100);
	for(int i:d)
		cout<<i<<" ";
	cout<<endl;

	d.insert(d.begin()+3, 3, 120);
	for(int i:d)
		cout<<i<<" ";
	cout<<endl;

	//erase elements
	d.erase(d.begin()+3);
	for(int i:d)
		cout<<i<<" ";
	cout<<endl;

	d.erase(d.begin()+2,d.begin()+5);      //one extra than to be deleted.
	for(int i:d)
		cout<<i<<" ";
	cout<<endl;

	//size
	cout<<d.size()<<endl;
	cout<<d.capacity()<<endl;

	//Resize function
	d.resize(8);
	for(int i:d)
		cout<<i<<" ";
	cout<<endl;

	cout<<d.size()<<endl;
	cout<<d.capacity()<<endl;    //if resize < capacity then capacity will not change.

	//to clear all the elements
	d.clear();

	cout<<d.size()<<endl;
	cout<<d.capacity()<<endl;

	//to check if vector is empty
	if(d.empty())
		cout<<"This is an empty vector"<<endl;

	//To get the front most element
	d.push_back(16);
	d.push_back(18);
	d.push_back(26);

	cout<<d.front()<<endl;
	//To get the back/last element.
	cout<<d.back()<<endl;

	//DOubling process and RESERVE method() to avoid capacity changing

	int n;
	vector<int> v;

	v.reserve(1000);     //Reserve capacity till 1000 elements are reached. After tht same process as earlier.
	cout<<"Enter n:";
	cin>>n;

	cout<<"Enter elements:";
	for(int i=0; i<n; i++){
		int no;
		cin>>no;
		v.push_back(no);
		cout<<"Capacity now:"<<v.capacity()<<endl;
	}

	cout<<"Capacity:"<<v.capacity()<<endl;
	for(int i:v)
		cout<<i<<" ";
	cout<<endl;

	return 0;
}