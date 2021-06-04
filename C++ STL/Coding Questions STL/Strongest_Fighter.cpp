#include<bits/stdc++.h>
using namespace std;

/*

There is a group of MMA fighters standing together in a line. Given the value of their strengths, find the strength of the strongest fighter in continuous sub-groups of size k.

Input Format->
First line contains an integer N, the number of fighters Followed by N integers where i'th integer denotes the strength of i'th fighter. Next line contains the size of sub-group k

Constraints->
1<=N<=10^7
1<=k<=N
1 <= Ai <= 100000

Output Format->
Space separated integers in a single line denoting strength of strongest fighters in the groups.

Sample Input->
5
1 3 1 4 5
3
Sample Output->
3 4 5
Explanation->
First sub-group: 1 3 1 --> Max strength is 3
Second sub-group: 3 1 4 --> Max strength is 4
Third sub-group: 1 4 5 --> Max strength is 5


*/

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
    	int val;
    	cin>>val;
    	v.push_back(val);
    }
    
    int k;
    cin>>k;

    deque<int> dq;
    
    for(int i=0;i<k;i++){
        while(!dq.empty()&&v[i]>v[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    
    for(int i=k;i<n;i++){
        cout<<v[dq.front()]<<" ";

        while ((!dq.empty()&&(dq.front()<=i-k))){
            dq.pop_front();
        }

        while(!dq.empty()&&v[i]>=v[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    
    cout<<v[dq.front()];

    return 0;
}

