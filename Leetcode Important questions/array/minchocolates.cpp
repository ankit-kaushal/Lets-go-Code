#include<iostream>
#include<limits.h>
#include <bits/stdc++.h>
using namespace std;


 int findMinDiff(int arr[],int n , int m)
{
    sort(arr[0],arr[n-1]);
    int j=m-1;
    int d=INT_MAX;
    for(int i=0;i+j<n;i++)
    {
        d=min(d,arr[i+j]-arr[i]);
    }
    return d;
}


int main()
{
    int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30,
                  40, 28, 42, 30, 44, 48, 43, 50 };
    int m = 7; // Number of students
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum difference is "
         << findMinDiff(arr, n, m);
         return 0;
}