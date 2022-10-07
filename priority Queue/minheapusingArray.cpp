#include<iostream>
using namespace std;

 //insertHeapusingArray is a combination of insert and remove
void insertHeapusingArray(int arr[],int n)     
{       
    //insert
    for(int i=1;i<n;i++)
    {
        int CI=i;
        while(CI!=0)
        {
            int PI=(CI-1)/2;
            if(arr[CI]<arr[PI])
            {
                int temp=arr[CI];
                arr[CI]=arr[PI];
                arr[PI]=temp;
            }
            else
            {
                break;
            }
            CI=PI;
        }
    }


        //Remove
        
    int size2=n;
    while(size2>1)
    {
        int temp=arr[0];
        arr[0]=arr[size2-1];
        arr[size2-1]=temp;
        size2--;
         int PI=0;
        int LCI=2*PI+1;
        int RCI=2*PI+2;

        while(LCI<size2)
        {
            int MI=PI;
            if(arr[MI]>arr[LCI])
            {
                MI=LCI;
            }
            if(RCI<size2 && arr[MI]>arr[RCI])
            {
                MI=RCI;
            }
            if(MI==PI)
            {
                break;
            }
        int temp=arr[MI];
        arr[MI]=arr[PI];
        arr[PI]=temp;

        PI=MI;
        LCI=2*PI+1;
        RCI=2*PI+2;

        }



    }


}

int main()
{
    int arr[]={100,10,15,4,17,21,67};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertHeapusingArray(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}
