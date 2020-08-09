//Find number of numbers between 1 to n which are divisible by any of the prime numbers less than 20.
#include<iostream>
using namespace std;

# define ll long long

int main(){

	ll tc;
	cout<<"Enter the number of test cases:";
	cin>>tc;

	ll primes[] = {2,3,5,7,11,13,17,19};

	while(tc>0){
		ll n;
		cout<<"Enter n:";
		cin>>n;

		ll subsets = (1 << 8) - 1;     //Because there are 8 prime no.  so 2^8 - 1.
		ll ans = 0;

		for(ll i = 1; i<= subsets; i++){     //Iterating through the numbers.

			ll denom = 1ll;
			ll setBits = __builtin_popcount(i);      //later used to find if no. is odd or even.

			for(ll pos = 0; pos<=7; pos++){        //Iterating for arrray positions.
				if(i & (1<<pos)){
					denom = denom * primes[pos];
				}
			}

			if(setBits & 1){        //No. of set bits is odd.
				ans += n/denom;
			}
			else
				ans -= n/denom;
		}

		cout<<ans<<endl;
		tc--;
	}
}