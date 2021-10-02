/*
There are n children who want to go to a giant wheel, and your task is to find a seat for each child.

Each seat may have one or two children in it, and in addition, the total weight in a seat may not exceed x. You know the weight of every child.

What is the minimum number of seats needed for the children?

Input

The first input line contains two integers n and x: the number of children and the maximum allowed weight.

The next line contains n integers p1,p2,…,pn: the weight of each child.

Output

Print one integer: the minimum number of seats.

Constraints
1≤n≤2⋅105
1≤x≤109
1≤pi≤x
Example

Input:
4 10
7 2 3 9

Output:
3
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
//map<ll,bool> m;
 
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
   int n,x;
   cin>>n>>x;
 
   vector<int> v(n);
   int cnt=0;
 
   for(int i=0;i<n;i++)
   cin>>v[i];
 
   sort(v.begin(),v.end());
   bool flag = false;
 
   for(int i=0;i<n;i++) {
       if(v[i]==0)
       continue;
 
       if(flag==true)
       {
           cnt++;
           continue;
       }
 
       int d = x-v[i];
 
       if(d<v[i])
       {
           flag = true;
           cnt++;
           continue;
       }
 
       int ans = -1;
       int l = i+1;
       int h = n-1;
 
       while(l<=h) {
           int mid = l+(h-l)/2;
           if(v[mid]==0) {
               h = mid-1;
               continue;
           }
 
           else if(v[mid]+v[i]<=x) {
               ans = mid;
               l = mid+1;
           }
 
           else {
               h = mid-1;
           }
       }
 
       if(ans==-1)
       cnt++;
 
       else {
           v[ans]=0;
           v[i]=0;
           cnt++;
       }
 
 
   }
   //4cnt++;
   cout<<cnt<<"\n";
    return 0;
}

