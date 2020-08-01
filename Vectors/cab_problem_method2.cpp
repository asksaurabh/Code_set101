//Sort cabs according to their locations.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Car{

	public:
	string car_name;
	int x,y;

	Car(){

	}

	Car(string name, int x, int y){
		car_name = name;
		this->x = x;
		this->y = y;
	}

	int dist(){
		return x*x + y*y;
	}

};

bool compare(Car A, Car B){
	int da = A.dist();
	int db = B.dist();

	if(da == db){
		return A.car_name.length() < B.car_name.length();
	}
	
	return da<db;
}

int main(){

	vector<Car> v;
	int n;

	cout<<"Enter the number of cars:";
	cin>>n;

	cout<<"Enter name and car coordinates:"<<endl;
	for(int i=0; i<n; i++){
		int x,y;
		string name;
		cin>>name>>x>>y;
		Car temp(name,x,y);
		v.push_back(temp);
	}

	sort(v.begin(), v.end(), compare);

	cout<<"Cars in sorted order:"<<endl;
	for(auto c:v)
		cout<<"Car:"<<c.car_name<<" "<<"Distance:"<<c.dist()<<" "<<"Location:"<<c.x<<" and "<<c.y<<endl;

	return 0;
}