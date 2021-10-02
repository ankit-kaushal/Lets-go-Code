#include <iostream>
using namespace std;

int main() {
    int n,k,s=0;
    cin >> n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int start=0,end=n-1;
    for(int i=0;i<n;i++)
    {
        if(a[start]+a[end]>k)
        {
            end--;
        }
        else if(a[start]+a[end]<k)
        {
            start++;
        }
        else
        {
            
            cout <<"TRUE"<<" "<<endl<<start<<" "<<end<<endl;
            s++;
            break;
        }
    }
    if(s==0)
    cout<<"FALSE";
	return 0;
}
