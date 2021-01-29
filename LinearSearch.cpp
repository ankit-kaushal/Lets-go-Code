#include<iostream>
using namespace std;
void linearSearch(int *a,int i,int n,int key)
{
    // If element is not present then it will return -1
    if(i==n)
    {
    cout<<"element not found";
        }
    //If the element is present then it will return the index where the element is present
    if(a[i]==key)
    {
    cout<<"element is found and the element is "<<i;

    }
    cout<<linearSearch(a,i+1,n,key);
}
int main()
{
    int a[6]={1,3,2,5,6,9};
    int n=sizeof(a)/sizeof(int);
    int key = 15;
    linearSearch(a,0,n,key);
    return 0;
}
