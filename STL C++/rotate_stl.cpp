#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

	int a[] = {10,20,30,40,50};
	int n = sizeof(a)/sizeof(int);

	//rotate about 30.
	rotate(a, a+2, a+n);

	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";

	cout<<endl;
	//U can also apply these functions on vectors.
	vector<int> v{1,2,3,4,5};

	rotate(v.begin(), v.begin()+2, v.end());

	for(int i=0; i<v.size(); i++)
		cout<<v[i]<<" ";

	cout<<endl;
	vector<int> b = {1,2,3};

	//Tells all possible combinations of the vector or array.
	next_permutation(b.begin(), b.end());
	next_permutation(b.begin(), b.end());
	next_permutation(b.begin(), b.end());


	for(int x:b){
		cout<<x<<" ";
	}
	return 0;
}