#include <iostream>
#include <cstring>
using namespace std;

class Fun{
    public:
        void operator()(string s){
            cout<<"Having Fun with "<<s;
        }
};


int main() {

    Fun f; //Constructor
    f("C++"); //Overloaded () Operator = Function Call where f is an object
    
    // The above statement looks like a function call, 
	//this f, although its an object but its behaving like a function call, so it also called functor

    

return 0;
}
