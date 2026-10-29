#include <iostream>
using namespace std;
int main ( ) { 
int a,b,c;
cin>>a;
cin>>b;
cin>>c;
int temp1, temp2, temp3;
temp1=a; temp2=b; temp3=c;
b=temp1;
c=temp2;
a=temp3;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
cout<<"c="<<c<<endl;
return 0; }
