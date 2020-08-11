// LINK -->> https://hack.codingblocks.com/app/practice/3/1039/problem
#include<iostream>
using namespace std;

# define ll long long

//Generate a array which contains a prime number.
void primeSieve(int *p){
	//first mark all odd numbers as prime..
	for(ll i=3; i<=1000000; i += 2){
		p[i] = 1;
		//cout<<"assigning one.";
	}

	//Sieve technique.
	for(ll i=3; i<=1000000; i += 2){
		if(p[i] == 1){
			//mark all its multiples as not prime.
			for(ll j= i*i; j<= 1000000; j = j+i){
				//cout<<"assigning 0s";
				p[j] = 0;
			}
		}
	}
	//special cases.
	//cout<<"all assigned";
	p[2] = 1;          //2 is always prime
	p[1] = p[0] = 0;
}

int main(){

	int primes[1000005] = {0};
	primeSieve(primes);

	int csum[1000005] = {0};

	//precompute the primes upto an index i

	for(int i=0; i<= 1000000; i++){
		csum[i] = csum[i-1] + primes[i];
	}

	int n;
	cin>>n;

	while(n--){
		int a,b;

		cin>>a>>b;

		cout<<csum[b] - csum[a-1]<<endl;
	} 
	return 0;
}