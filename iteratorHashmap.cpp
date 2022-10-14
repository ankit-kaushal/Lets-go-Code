#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;

int main()
{
    unordered_map<string,int> ourmap;
    ourmap["abc"]=1;
    ourmap["abc1"]=2;
    ourmap["abc2"]=3;
    ourmap["abc3"]=4;
    ourmap["abc4"]=5;
    ourmap["abc5"]=6;

    //syntax of iterator in unordered map;
    unordered_map<string,int>::iterator it=ourmap.begin();      //it is a pointer which is pointing to ourmap.begin()      
    while(it!=ourmap.end())
    {
        cout<<"key : "<<it->first<<"  value: "<<it->second<<endl;
        it++;

    }

        //syntax of iterator of vector;

    vector<int>v;
    v.push_back(10);
    v.push_back(9);
    v.push_back(8);
    v.push_back(7);
    v.push_back(6);

    vector<int>::iterator it1=v.begin();
    while(it1!=v.end())
    {
        cout<<*it1<<endl;
        it1++;
    }

}