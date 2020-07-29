#include<iostream>
using namespace std;

float square_root(int n,int p){

	//square root of n will lie between 0 to ..... n
	int s = 0;
	int e = n;
	float ans = -1;
	while(s<=e){

		int mid = (s + e)/2;
		
		//for perfect square
		if(mid*mid == n){
			return mid;
		}

		if(mid*mid < n){
			ans = mid;
			s = mid + 1;         //Beacuse the closest answer will be in the right.
		}
		else
			e = mid -1;
	}

	//for floating part, use bruteforce approach..
	//for the precision of 'p' times repeat the process p times.
	float inc = 0.1;
	for(int i=1; i<=p; i++){

		while(ans*ans <= n){
			ans = ans+inc;
		}
		ans = ans - inc;          //Because loop will run on equality thus overshooting the value.
		inc = inc/10;
	}

	return ans;
}

int main(){

	int n,p;
	cout<<"Enter the number and precision:";
	cin>>n>>p;

	cout<<"square root of "<<n<<" is:"<<square_root(n,p);
	return 0;

}