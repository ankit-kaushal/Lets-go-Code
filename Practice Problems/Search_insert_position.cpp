/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> nums{1,3,5,6};
	int target=7;
	bool present=binary_search(nums.begin(),nums.end(),target);
	
	if(present){
		auto it=find(nums.begin(),nums.end(),target);
		int index=it-nums.begin();
		cout<<index<<endl;
	}
	else{
		nums.push_back(target);
		sort(nums.begin(),nums.end());
		auto it=find(nums.begin(),nums.end(),target);
		int index=it-nums.begin();
		cout<<index<<endl;
	}
	
	/*
	if(index==nums.size()){
		
	}
	else{
		
	}*/
	
}

