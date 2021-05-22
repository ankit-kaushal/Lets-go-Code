#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;

//To find(print) largest k numbers when in the input there is -1

void query_print(priority_queue<int,vector<int>,greater<int>> pq){
	//We will print the heap by first copying the heap and then prining and do dop on the copy heap
	while(!pq.empty()){
		cout<<pq.top()<<",";
		pq.pop();
	}
	cout<<endl;
}

int main(){
	int no;
	priority_queue<int,vector<int>,greater<int>> pq;
	
	int cs=0;
	int k=3;
	
	while(scanf("%d",&no)!=EOF){	//This statement to take input in continious stream
		if(no==-1){
			query_print(pq);
		}
		else if(cs<k){
			pq.push(no);
			cs++;
		}
		else{
			if(no>pq.top()){
				pq.pop();
				pq.push(no);
			}
		}
	}
	
    return 0;
}

/*
Input->
1 2 3 4 -1 5 9 10 -1 12 15 8 6 -1
Output->
2,3,4,
5,9,10,
10,12,15,

*/
