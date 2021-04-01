#include <bits/stdc++.h> 
using namespace std; 
  

void InsertionSort(int list[], int n)  
{  
    int i, flag, j;  
    for (i = 1; i < n; i++) 
    {  
        flag = list[i];  
        j = i - 1;  
  
        
        while (j >= 0 && list[j] >flag) 
        {  
            list[j + 1] = list[j];  
            j = j - 1;  
        }  
        list[j + 1] = flag;  
    }  
}  
  
  
void PrintArray(int list[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << list[i] << " ";  
    cout << endl; 
}  
int main()  
{  
    int list[] = { 2, 1, 3, 15, 26 };  
    int n = sizeof(list) / sizeof(list[0]);  
  
    InsertionSort(list, n);  
    PrintArray(list, n);  
  
    return 0;  
}  
  
