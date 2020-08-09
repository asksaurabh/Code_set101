#include<iostream>
using namespace std;

# define ll long long
/*
bool isPrime(int n){

	if(n == 1)
		return false;
	if(n == 2)
		return true;

	for(int i=2; i*i < n; i++){
		if(n % i == 0)
			return false;
	}
	return true;
}
*/

//Generate a array which contains a prime number.
void primeSieve(int *p,int n){
	//first mark all odd numbers as prime..
	for(int i=3; i<=n; i += 2){
		p[i] = 1;
		//cout<<"assigning one.";
	}

	//Sieve technique.
	for(ll i=3; i<=n; i += 2){
		if(p[i] == 1){
			//mark all its multiples as not prime.
			for(ll j= i*i; j<= n; j = j+i){
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
	int n,N;
	/*
	cout<<"Enter the number:";
	cin>>n;

	cout<<"Prime check using O(n*root(n)) method:"<<isPrime(n)<<endl;
	*/
	cout<<"Enter the range till N:";
	cin>>N;

	int primes[10000] = {0};
	primeSieve(primes,N);

	cout<<"Prime numbers till N are: ";
	for(int i=0; i<=N; i++){
		if(primes[i] == 1)
			cout<<i<<" ";
	}
	return 0;
}