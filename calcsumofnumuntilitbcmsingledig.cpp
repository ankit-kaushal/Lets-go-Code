#include <iostream>
using namespace std;
int main() {
   int a = 534;
   int sum;
   if(a)
      sum = a % 9 == 0 ? 9 : a % 9 ;
   else
      sum = 0;
   cout<<"The final sum is "<<sum;
   return 0;
}
