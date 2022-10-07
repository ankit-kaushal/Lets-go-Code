#include<iostream>
#include<queue>
using namespace std;

void ksmallestelement(int *arr,int n, int k)
{
    priority_queue<int> min1;
    for(int i=0;i<k;i++)
    {
        min1.push(arr[i]);
    }
    for(int i=k;i<n;i++)
    {
        if(min1.top()>arr[i])
        {
            int temp=min1.top();
            min1.push(arr[i]);
            arr[i]=temp;
        }
    }
    while(min1.empty())
    {
        cout<<min1.top()<<" ";
        min1.pop();
    }


}
int main()
{
   int arr[]={5,6,9,12,3,13,12};
    int k=3;
    ksmallestelement(arr,7,k);

}