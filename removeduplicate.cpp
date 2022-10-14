#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> removeDuplicate(int *arr,int size)
{
    vector<int>output;
    unordered_map<int,bool>checknum;
    for(int i=0;i<size;i++)
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
    int arr[]={1,4,3,7,8,9,1,4,2,7,7,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int> output=removeDuplicate(arr,size);
    for(int i=0;i<output.size();i++)
    {
        cout<<output[i]<<endl;
    }

}