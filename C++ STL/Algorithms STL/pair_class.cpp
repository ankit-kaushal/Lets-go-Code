#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// Pair
	pair<int, char> p;
	p.first=10;
	p.second='A';
	
	// Another way
	pair<int, char> p2(p);
	cout<<p2.first<<" "<<p2.second<<endl;
	
	// We can also use make_pair
	
	pair<int, string> p3=make_pair(100,"Audi");
	cout<<p3.first<<" "<<p3.second<<endl;
	
	// Take input from user
	int a,b;
	cin>>a>>b;
	
	pair<int, int> p4=make_pair(a,b);
	// We can also make array of pairs or vector of pairs
	
	// pair inside another pair
	pair<pair<int,int>,string> car;
	car.second="Audi";
	car.first.first=100;
	car.first.second=200;
	
	cout<<car.first.first<<endl;
	cout<<car.first.second<<endl;
	cout<<car.second<<endl;
	
	return 0;
}


/*
Pair is a container that helps us to bind two values as a single entity
*/

