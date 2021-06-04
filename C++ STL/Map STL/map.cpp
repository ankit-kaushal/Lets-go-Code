#include <iostream>
#include<map>
#include<string>
using namespace std;

/*

Map is an assiciative containers that holds mapping between key and the value pairs. 
We have two maps in C++ - Simple Map and Unordered Map

How does this happens internally?
- A map maintains self balancing BST, to do the work. Here, ordered are defined by keys. So, keys are ordered.

In unordered map keys are not ordered.
*/

int main() {
  
    map<string,int> m;

    //1. Insert
    m.insert(make_pair("Mango",100));

    pair<string,int> p;
    p.first = "Apple";
    p.second = 120;

    m.insert(p);

    m["Banana"] = 20;

    //2. Search
    string fruit; // basically key is taken as input
    cin>>fruit;

    auto it = m.find(fruit);  // find function  returns iterator

    if(it!=m.end()){
        cout<<"price of "<<fruit<<" is"<<m[fruit]<<endl;
    }
    else{
        cout<<"fruit is not present "<<endl;
    }

	//update the price
    m[fruit] += 22;
    


    //3. Erase
    m.erase(fruit);


    //another way to find a particular map
    // map has a special property that, it stores unique keys only once
    //we can use a function count to check whether a key is present inside a map or not
    
    if(m.count(fruit)){			// count function returns integer
        cout<<"Price is "<<m[fruit]<<endl;
    }
    else{
        cout<<"Couldnt find "<<endl;
    }

    m["Litchi"] = 60;
    m["Pineapple"] = 80;

    //Iterate over all the key value pairs
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" and "<<it->second<<endl;
    }

    //for each loop 
    for(auto p:m){
        cout<<p.first<<" : "<<p.second<<endl;
    }
    
    //This will be printed in the form of lexicographically sorted order of keys

    return 0;
}
