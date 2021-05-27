#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;

/*
Here we are building a hash table for custom class. Means, the key of the hask table is a custom object.
It is not a standard datatype like string.

In this problem we are making a hash map or unordered map where key is of the type student the value is of the type int. 
1. Here, we need to define our own hash function.
2. In the student class we have to overload the == operator, because when we are traversing the linked list inside the hash map,
and we are given a key, there may be case that multiple students have same name, but two students will have different roll nos,
so we also need to compare. So, we will define a comparision if two students are equal or not.
*/

class Student{
    public:
    	
        string firstname;
        string lastname;
        string rollno;

        Student(string f,string l,string no){
            firstname=f;
            lastname=l;
            rollno=no;
        }
        
        bool operator==(const Student &s) const{
        	return rollno==s.rollno?true:false;
		}
};

class HashFn{
	public:
		size_t operator()(const Student &s) const{
			return s.firstname.length()+s.lastname.length();
		}
};
//This is the one way to convert string into integer, here, we are just adding the length of first name and last name.

int main(){

	unordered_map<Student,int,HashFn> student_map; 
	
    Student s1("Ankit","Kaushal","010");
    Student s2("Rahul","Kumar","023");
    Student s3("Ankit","Singh","030");
    Student s4("Rahul","Kumar","120");
	
	//Add student and their marks to hashmap
	student_map[s1]=100;
	student_map[s2]=120;
	student_map[s3]=11;
	student_map[s4]=45;
	
	//find the marks of student s3
	cout<<student_map[s3]<<endl;
	
	//iterare over all students
	for(auto s:student_map){
		cout<<s.first.firstname<<" "<<s.first.rollno<<endl<<" Marks "<<s.second<<endl;
	}
	
    return 0;
}

