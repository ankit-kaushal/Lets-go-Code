#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
	int d1=p1.first*p1.first+p1.second*p1.second;
	int d2=p2.first*p2.first+p2.second*p2.second;
	
	//If two cars have same distance then sort according to x coordinate
	if(d1==d2){
		return p1.first<p2.first;
	}
	
	return d1<d2;
}

int main() {
    int n ,x, y;
    cin>>n;
    
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
    	cin>>x>>y;
    	v.push_back(make_pair(x,y));
	}
	
	sort(v.begin(),v.end(),compare);
	
	for(auto p:v){
		cout<<"Car "<<p.first<<","<<p.second<<endl;
	}
}

