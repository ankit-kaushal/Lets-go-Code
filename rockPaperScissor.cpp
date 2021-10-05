#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


void game(){
		
   int user;
   srand(time(NULL));
   int comp_num;
   string choice;
   
   cout<<"Select One:"<<endl;
   cout<<"1 For Rock"<<endl;
   cout<<"2 For Paper"<<endl;
   cout<<"3 For Scissor"<<endl;
   cin>>user;
   //User Choosen
   if (user==1){
   		cout<<"You Choosen Rock"<<endl;
   }
   else if(user==2){
   		cout<<"You Choosen Paper"<<endl;
   }
   else if(user==3){
   		cout<<"You Choosen Scissor"<<endl;
   }
   else{
   		cout<<"Wrong Choosen"<<endl;
   }
   
   comp_num=rand()%3+1;
   
   //System Choosen Rock
   if (comp_num==1){
   		cout<<"Computer Choosen Rock"<<endl;
   
   if(user==1){
   		cout<<"Match Tie"<<endl;
   }
   else if(user==2){
   		cout<<"You Win"<<endl;
   }
   else if(user==3){
   		cout<<"You Loose"<<endl;
   }
	}
   
    //System Choosen Paper
   else if (comp_num==2){
   		cout<<"Computer Choosen Paper"<<endl;
   
   if(user==1){
   		cout<<"You Loose"<<endl;
   }
   else if(user==2){
   		cout<<"Match Tie"<<endl;
   }
   else if(user==3){
   		cout<<"You Win"<<endl;
   }
	}
    //System Choosen Scissor
	else if (comp_num==1){
   		cout<<"Computer Choosen Scissor"<<endl;
   
   	if(user==1){
   		cout<<"You Win"<<endl;
   	}
   	else if(user==2){
   		cout<<"You Loose"<<endl;
   	}
   	else if(user==3){
   		cout<<"Match Tie"<<endl;
   	}
	}
	
 cout<<""<<endl;	
 cout<<"Press C To Continue Q to Quit:"<<endl;
 cin>>choice;
 if(choice=="C"||choice=="c"){
 	game();
 }
 else if(choice=="Q"||choice=="q"){
 	exit(1
	 );
 }
   
 }
main(){
	cout<<"WELCOME TO GAME !"<<endl;
	cout<<"//if game don't shows the result simply press 'C'"<<endl;
	game();
}


