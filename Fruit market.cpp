#include <iostream>
using namespace std;
int main ( ) {
	int code;
	cout<<"our shop code is 767 plz enter the code shop"<<endl;
int	n=767;
	cin>>code;
	if (code==n) {
	cout<<"welcome to Hadi fruit shop"<<endl;}
	else {
	cout<<"plz put the exact code"<<endl; 
	return 0; }
			int fruits;	
cout<<"the list of fruits with code is given below with prices"<<endl;
cout<<"plz enter the required fruit number"<<endl;
cout<<"1.apple(300perkg)\n2.dates(200perkg)\n3.grapes(400perkg)\n4.banana,s(100perkg)\n5.watermelon(100perkg)\n6.melon(100perkg)\n7.pomegrant(800perkg)\n8.cherry(600perkg)\n9.mango(200perkg)\n10.guave(100perkg)\n11.lemon(400perkg)\n12.peach(500perkg)\n13.strawberry(500perkg)\n14.orange(200perkg)\n15.pineapple(800perkg)\n16.coconut(700perkg)\n17.papaya(700perkg)\n18.java plum(700perkg)\n19.lychee(800perkg)\n20.pear(300perkg)\n21.blueberry(600perkg)\n22.custardapple500perkg)\n23.dragon fruit(800perkg)\n24.apricot(700perkg)\n25.avocado(800perkg)\n26.fig fruit(600perkg)\n27.milberry(100perkg)\n28.rasberry(300perkg)\n29.musk melon(500perkg)\n30.sugarcane(400perkg)"<<endl;

cin>>fruits;
switch (fruits) {
case 1:
cout<<"Apples"<<endl;
break;
case 2:
cout<<"dates"<<endl;
break;
case 3:
cout<<"grapes"<<endl;
break;
case 4:
cout<<"banana,s"<<endl;
break;
case 5:
cout<<"watermelon"<<endl;
break;
case 6:
cout<<"melon"<<endl;
break;
case 7:
cout<<"pomegrant"<<endl;
break;
case 8:
cout<<"cherry"<<endl;
break;
case 9:
cout<<"mango"<<endl;
break;
case 10:
cout<<"guava"<<endl;
break;
case 11:
cout<<"lemon"<<endl;
break;
case 12:
cout<<"peach"<<endl;
break;
case 13:
cout<<"strawberry"<<endl;
break;
case 14:
cout<<"orange"<<endl;
break;
case 15:
cout<<"pineapple"<<endl;
break;
case 16:
cout<<"cocunut"<<endl;
break;
case 17:
cout<<"papaya"<<endl;
break;
case 18:
cout<<"java plum"<<endl;
break;
case 19:
cout<<"lychee"<<endl;
break;
case 20:
cout<<"pear"<<endl;
break;
case 21:
cout<<"blueberry"<<endl;
break;
case 22:
cout<<"custard apple"<<endl;
break;
case 23:
cout<<"dragon fruit"<<endl;
break;
case 24:
cout<<"apricot"<<endl;
break;
case 25:
cout<<"avocado"<<endl;
break;
case 26:
cout<<"fig fruit"<<endl;
break;
case 27:
cout<<"milberry"<<endl;
break;
case 28:
cout<<"rasberry"<<endl;
break;
case 29:
cout<<"musk melon"<<endl;
break;
case 30:
cout<<"sugarcane"<<endl;
break;
default:
cout<<"your required fruit is no available..sorry visit to the next shop"<<endl;
return 0; }
cout<<"the list of available quantity is shown as ....."<<endl;
cout<<"1. 1kg\n2. 2kg\n3. 3kg\n4. 4kg\n5. 5kg"<<endl;
cout<<"plz enter the quantity code"<<endl;
int quantity;
cin>>quantity;
switch (quantity) {
	case 1:
	cout<<"1 kg"<<endl;
	break;
	case 2:
	cout<<"2 kg "<<endl;
	break;
	case 3:
	cout<<" 3 kg"<<endl;
	break;
	case 4:
	cout<<"4 kg"<<endl;
	break;
	case 5:
	cout<<"5 kg"<<endl;
	break;
	default :
		cout<<"sorry large quantity is not available select again"<<endl; 
	return 0; }
	if (quantity<=5) {
	cout<<"your fruits are paked plz pay the payment\n1.easy paisa \n2.jazz cash\n3.raast\n4.qr code scanner"<<endl; }
	else {
		cout<<"sorry large quantity is not available select again"<<endl; 
		return 0; } 		
cout<< "okay thank you ,hope so you will visit again"<<endl;
return 0; }	
