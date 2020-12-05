/*
Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0). Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.

Notice that you may not slant the container.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	vector<int> height{4,3,2,1,4};
	int i=0;
	int j=height.size()-1;
	int water=INT_MIN;
	while(i<j){
		if(height[i]<height[j]){
			water=max(water,height[i]*(j-i));
			i++;
		}
		else{
			water=max(water,height[j]*(j-i));
			j--;
		}
	}
	cout<<water;
}

