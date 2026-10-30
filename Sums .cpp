#include <iostream>
using namespace std;
int main ( ) { 
 int n, a;
 cout<<"enter a number "<<endl;
 cin>>n;
 int sum=0;  
 int sumsquare=0;
 int  sumcubes=0;
 for (a=1;  a<=n; a++)
 sum+=a; sumsquare+=a*a; sumcubes+=a*a*a;
 cout<<"the sum of " <<n<<"  is ="<<sum<<endl;
 cout<<"the sumsquare  of "<<n<<"  is ="<<sumsquare<<endl;
 cout<<"the sumecube of "<<n<<"  is ="<<sumcubes<<endl;
return 0; }
