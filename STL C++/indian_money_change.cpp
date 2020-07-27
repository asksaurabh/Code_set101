#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int coins[] = {1,2,5,10,20,50,100,200,500,2000};
	int n = sizeof(coins)/sizeof(int);
	int money;

	cout<<"Enter the money You want the change of:";
	cin>>money;

	cout<<"Change using minimum indian coins is: ";

	while(money>0){

		auto lb = lower_bound(coins, coins+n, money);
		auto ub = upper_bound(coins, coins+n, money);

		int diff = ub - lb;
		
		if(diff == 0){
			int index = lb - coins - 1;
			cout<< coins[index]<<" ";
			money = money - coins[index];
		}
		else if(diff == 1){
			int index = lb - coins;
			cout<< coins[index]<<" ";
			break;
		}
	
	}	

	return 0;

}