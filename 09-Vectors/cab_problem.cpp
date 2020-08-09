//Sort cabs according to their locations.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> p1, pair<int,int> p2){
	int d1 = p1.first * p1.first + p1.second * p1.second;          // x1^2 + y1^2
	int d2 = p2.first * p2.first + p2.second * p2.second;

	if(d1 == d2)
		return p1.first<p2.first;   //Sort acc to x coordinate if  distances are equal;

	return d1<d2;           //else return whoever has less distance.
}

int main(){

	vector<pair<int,int>> v;
	int n;

	cout<<"Enter the number of cars:";
	cin>>n;

	cout<<"Enter car coordinates:"<<endl;
	for(int i=0; i<n; i++){
		int x,y;
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}

	sort(v.begin(), v.end(), compare);

	cout<<"Cars in sorted order:"<<endl;
	for(auto i:v)
		cout<<"Car:"<<i.first<<" and "<<i.second<<endl;

	return 0;
}