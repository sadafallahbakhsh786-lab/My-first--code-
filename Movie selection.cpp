#include <iostream>
using namespace std;
int main ( ) { 
int movie;
cout<<"1.inception"<<endl<<"2.interstealler"<<endl<<"3.the dark knight"<<endl<<"4.avenger:endgame"<<endl;cout<<"enter the code of movie "<<endl;cin>>movie;
switch (movie) {
case 1:
cout<<"inception"<<endl;
break;
case 2:
cout<<"interstealler"<<endl;
break;
case 3:
cout<<"the dark knight"<<endl;
break;
case 4:
cout<<"avenger:endgame"<<endl;
break;
default:
cout<<"the invalid movie code plz try again"<<endl;
return 0; }
int num;
cout<<"enter number of tickets"<<endl;
cin>>num;
if (num==0) {
	cout<<"invalid ticket no.plz put greater then 0"<<endl; }
else if (num<0) {
cout<<"invalid ticket no.plz put a greater no."<<endl; }
else {	 
cout<<"ticket confirmed!you have booked tickets "<<endl; }
return 0; }     
	      
	    
