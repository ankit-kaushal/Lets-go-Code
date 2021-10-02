#include<climits>
class stackusingarray{
    int *data;
    int nextIndex;
    int capacity;
    public:
      stackusingarray(int totalsize){
         data = new int[totalsize];
         nextIndex = 0;
         capacity = totalsize;          
      }
     // check for empty
      bool isEmpty(){
       return nextIndex ==0;
      }
     // check for size
    int size(){
     return nextIndex+1;
    }
   //push funxction
    void push(int element){
      if(nextIndex == capacity){
       cout << "Stacki is full" << endl;
       return ;
      }
      data[nextIndex++] = element ;
    }
   //pop function
    int pop(){
    if(isEmpty()){
     cout << "Stacki is Empty" << endl;
       return INT_MIN;
    } 
    nextIndex--;
    return datap[nextIndex+1];
    }
   //top element
   int top(){
   if(isEmpty()){
     cout << "Stacki is Empty" << endl;
       return INT_MIN;
    } 
    return data[nextIndex-1];

  }
}
