#include<bits/stdc++.h>
using namespace std;

//char *strtok(char*s,char *delimiters)
//we use it to break a string into a list of tokens
//returns a token on each subsequent call
//on the first call function should be passed with string argument for 's'
//on subsequent calls we should pass the string argument as null

int main(){
	
	char s[100]= "Today is a rainy day";
	
	
	// Delimeter with " " (space) 
	char *ptr = strtok(s," ");
	cout<<ptr<<endl;
	
	/*
		ptr=strtok(NULL," ");
				// When we pass NULL here the strtok() actually maintains a static array that stores the state of string.
				//It means it maintains state of string internally
		cout<<ptr<<endl;
	*/
	
	while(ptr!=NULL){
		ptr=strtok(NULL," ");
		cout<<ptr<<endl;
	}
	
	cout<<endl;
	
	// Delimeter with "," (comma)
	/*
	char s1[100]= "Today, is a rainy, day";
	
	char *ptr1 = strtok(s1,",");
	cout<<ptr1<<endl;
	
	while(ptr1!=NULL){
		ptr1=strtok(NULL,",");
		cout<<ptr1<<endl;
	}
	*/
	
	return 0;
}

