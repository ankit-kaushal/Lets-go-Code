#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

class Car{
	public:
		string car_name;
		int x,y;
	Car(){
		
	}
	Car(string n, int x, int y){
		car_name=n;
		this->x=x;
		this->y=y;
	}
	int distance(){
		//returns square of distance from origin
		return x*x+y*y;
	}
};

bool compare(Car A, Car B){
	int da=A.distance();
	int db=B.distance();
	if(da==db){
		return A.car_name.length()<B.car_name.length();
	}
	return da<db;
}

int main() {
    int n ,x, y;
    cin>>n;
	string name;
    vector<Car> v;
    for(int i=0;i<n;i++){
    	cin>>name>>x>>y;
    	Car temp(name,x,y);
    	v.push_back(temp);
	}
	
	sort(v.begin(),v.end(),compare);
	
	for(auto c:v){
		cout<<"Car Name: "<<c.car_name<<" Distance: "<<c.distance()<<" Location: "<<c.x<<", "<<c.y<<endl;
	}
}

