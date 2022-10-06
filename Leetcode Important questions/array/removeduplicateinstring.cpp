#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<char> removeDuplicate(string arr)
{
    vector<char>output;
    unordered_map<char,bool>checknum;
    for(int i=0;i<arr.length();i++)
    {
        if(checknum.count(arr[i])>0)
        {
            continue;
        }
        checknum[arr[i]]=true;
        output.push_back(arr[i]);
    }
    
    return output;
}

int main()
{
    string arr="abcdsfdfgdfasaaa";
    // int length=arr.length();
   vector<char>output= removeDuplicate(arr);
    for(int i=0;i<output.size();i++)
    {
        cout<<output[i]<<" ";
    }

}