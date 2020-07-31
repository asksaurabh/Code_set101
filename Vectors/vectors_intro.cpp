#include<iostream>
#include<vector>

using namespace std;

int main(){

	vector<int> a;
	vector<int> b(5,10);       //5 elements with value 10.
	vector<int> c(b.begin(),b.end());        //Copying elements of b to c.
	vector<int> d{1,2,3,4,5};

	//Iterate over the vector

	for(int i=0; i<b.size(); i++)
		cout<<b[i]<<" ";
	cout<<endl;

	for(auto it = c.begin(); it!= c.end(); it++)
		cout<<*it<<" ";

	cout<<endl;

	for(int x:d)     //for every integer x in d cout<<x.
		cout<<x<<" ";

	//pushback method.

	vector<int> v;
	int n;
	cout<<"\nEnter the size:";
	cin>>n;

	cout<<"Enter the elements:";
	for(int i=0; i<n; i++){
		int no;
		cin>>no;
		v.push_back(no);
	}

	cout<<"elements are:";
	for(int x:v)
		cout<<x<<" ";

	//More function to understand the difference between v and d both of which contain 5 elements.

	cout<<"\n"<<v.size()<<endl;    //current no of elements.
	cout<<v.capacity()<<endl;     //size of the underlying array
	cout<<v.max_size()<<endl;	  //maxximum no of elements a vector can hold in the worst case acc to memory available.

	cout<<"\n"<<d.size()<<endl;    //current no of elements.
	cout<<d.capacity()<<endl;     //size of the underlying array
	cout<<d.max_size()<<endl;

	//Difference is because when u use push_back func it doubles the size by current no of elements
	return 0;
}