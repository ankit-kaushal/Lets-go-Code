/*
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

Follow up: The overall run time complexity should be O(log (m+n)).

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	vector<int> nums1{1,2};
	vector<int> nums2{3,4};
	vector<float> v;
    for(int i=0;i<nums1.size();i++){
        v.push_back(nums1[i]);
    }
    for(int i=0;i<nums2.size();i++){
        v.push_back(nums2[i]);
	}
        
    int n=v.size();
    float median;
    sort(v.begin(),v.end());
    if(n%2==0){
        median=(v[n/2]+v[(n-1)/2])/2;
    }
    else{
        median=v[n/2];
    }
    cout<<median;
}

