#include<iostream>
#include<vector>
// #include"PriorityQueue1.h"
using namespace std;


class PriorityQueue2        //MAX HEAP
{
    public:
    vector<int>v;
    PriorityQueue1()
    {

    }
    bool isEmpty()
    {
        return v.size()==0;
    }
    int getsize()
    {
        return v.size();
    }
    int getMax()
    {
        return v[0];
    }
    
    void insert(int element)
    {
        
        
        v.push_back(element);
        int CI=v.size()-1;
        while(CI!=0)
        {
            int PI=(CI-1)/2;
            if(v[CI]>v[PI])
            {
                int temp=v[CI];
                v[CI]=v[PI];
                v[PI]=temp;
            }
            else
            {
                break;
            }
            CI=PI;
        }
    }
    int remove()
    {
        if(v.size()==0)
        {
            return 0;
        }
        int size1=v.size()-1;
        int ans=v[0];
        v[0]=v[size1];
        v.pop_back();
        int PI=0;
        int LCI=2*PI+1;
        int RCI=2*PI+2;
        while(LCI<v.size())
        {
            int MI=PI;
            if(v[MI]<v[LCI])
            {
                MI=LCI;
            }
            if(MI<v.size() && v[MI]<v[RCI])
            {
                MI=RCI;
            }
            if(MI==PI)
            {
                break;
            }
            int temp=v[PI];
            v[PI]=v[MI];
            v[MI]=temp;

             PI=MI;
             LCI=2*PI+1;
             RCI=2*PI+2;

        }

        return ans;
    }

};
int main()
{
    PriorityQueue2 PQ;
    PQ.insert(100);
    PQ.insert(10);
    PQ.insert(15);
    PQ.insert(4);
    PQ.insert(170);
    PQ.insert(21);
    PQ.insert(67);

    cout<<PQ.getsize()<<endl;
    cout<<PQ.getMax()<<endl;
    cout<<PQ.remove()<<endl;
    cout<<PQ.isEmpty()<<endl;
}