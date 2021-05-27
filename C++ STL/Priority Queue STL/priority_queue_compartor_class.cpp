#include <iostream>
#include <cstring>
#include <queue>
using namespace std;


class Person{
public: 
    string name;
    int age;
    
    Person(){

    }
    Person(string n,int a){
        name = n;
        age = a;
    }
};

class PersonCompare{
public:
    bool operator()(Person A,Person B){
        //cout<<"Comparing "<<A.age <<" with "<<B.age<<endl;
        return A.age < B.age; // CHANGE THIS COMPARISION TO GET TOP 3 YOUNG PERSONS
        // Also we can change this to get comparision between names by return A.name < B.name;
    }
};


int main() {

    int n;
    cin>>n;

    priority_queue<Person,vector<Person>, PersonCompare > pq;

    for(int i=0;i<n;i++){
        string name;
        int age;
        cin>>name>>age;
        Person p(name,age);
        pq.push(p);
    }
    
    //find top 3 oldest person
    
    int k = 3;
    for(int i=0;i<k;i++){
        Person p = pq.top();
        cout<<p.name<<" "<<p.age<<endl;
        pq.pop();
    }
return 0;
}


/*
Input->
5 
A 20
B 3
C 40
D 10
E 15

Output->
C 40
A 20
E 15


*/
