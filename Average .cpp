#include <iostream>
using namespace std;
int main ( ) {
int a,b,c,d,sum,product;
cout<<"enter 1st integer"<<endl;
cin>>a;
cout<<"enter 2nd integer"<<endl;
cin>>b;
cout<<"enter 3rd integer"<<endl;
cin>>c;
cout<<"enter 4th integer"<<endl;
cin>>d;
sum=a+b+c+d;
product=a*b*c*d;
float  avrg=sum/4;
cout<<"sum="<<sum<<endl<<"product="<<product<<endl<<"average="<<avrg<<endl;
return 0; }
