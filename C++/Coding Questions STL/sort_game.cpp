#include<iostream>
#include<cstring>
#include<queue>
#include<vector>
using namespace std;

/*

Sanju needs your help! He gets a list of employees with their salary. The maximum salary is 100.

Sanju is supposed to arrange the list in such a manner that the list is sorted in decreasing order of salary. And if two employees have the same salary, they should be arranged in lexicographical manner such that the list contains only names of those employees having salary greater than or equal to a given number x.

Help Sanju prepare the same!

Input Format
On the first line of the standard input, there is an integer x. The next line contans integer N, denoting the number of employees. N lines follow, which contain a string and an integer, denoting the name of the employee and his salary.

*/


class emp{
	public:
		string name;
    	int sal;
    emp(){
    	
	}
	emp(string n,int s){
        name = n;
        sal = s;
    }
};

class compare{
public:
    bool operator()(emp A,emp B){
    	if(A.sal==B.sal){
    		return A.name > B.name;
		}
        return A.sal < B.sal;
    }
};


int main()
{
	
	priority_queue<emp,vector<emp>, compare> l;
	priority_queue<emp,vector<emp>, compare> l1;
	int x, n;
	cin>>x>>n;
	for(int i=0;i<n;i++){
		int sal;
		string name;
		cin>>name>>sal;
		emp e(name,sal);
		l.push(e);
	}

	for(int i=0;i<n;i++){
		emp e = l.top();
		emp e1;
		if(e.sal>=x){
			emp e1(e.name,e.sal);
			l1.push(e1);
		}
        l.pop();
	}
	int k=l1.size();

	for(int i=0;i<k;i++){
		emp e1 = l1.top();
		cout<<e1.name<<" "<<e1.sal<<endl;
        l1.pop();
	}
	
    return 0;
}

