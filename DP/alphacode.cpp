#include<iostream>
using namespace std;

// int alphacode1helper(int size,int *arr,int *arrhelper)
// {
//     if(size==0 || size==1)
//     {
//         return 1;
//     }
//     if(arrhelper[size]>0)
//     {
//         return arrhelper[size];
//     }
//     int output=alphacode1helper(size-1,arr,arrhelper);
//     if((output[size-2]*10)+output[size-1]<=26)
//     {
//         output+=alphacode1helper(size-2,arr,arrhelper);
//     }
//     arrhelper[size]=output;
//     return output;
// }
// int alphacode1(int size,int *arr)
// {
//     int *arrhelper=new int[size+1];
//     for(int i=0;i<n+1;i++)
//     {
//         arrhelper[i]=0;
//     }
//     return alphacode1helper( size, arr,arrhelper);
// }

int alphacode2(int *arr,int n)
{
    //output[i] represents to find the ith value we have to find (i-1) and (i-2) 
    int *output=new int[n+1];
    output[0]=1;
    output[1]=1;

    for(int i=2;i<n+1;i++)
    {
        output[i]=output[i-1];
        if((arr[i-2]*10)+arr[i-1]<=26)
        {
            output[i]+=output[i-2];
        }
    }
    return output[n];
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    cout<<"enter\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // cout<<"alphacode1: "<<alphacode1(n,arr);
    cout<<"alphacode2: "<<alphacode2(arr,n);

}