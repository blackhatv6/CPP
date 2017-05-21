#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main(){

int no_one,no_two,i,y;
float x;
char a;
line10: cout<<"Please enter the first no :"<<"\t";
cin>>no_one;
cout<<"Please enter the second no : " <<"\t";
cin>>no_two;
cout<<"Please select the operation you want to Perform"<<"\n";
cout<<"1. Average"<<"\n";
cout<<"2. Multiplication"<<"\n";
cout<<"3. Divition"<<"\n";
cout<<"4. Addition"<<"\n";
cout<<"5. Subtraction"<<"\n";
cout<<"\n";
cin>>i;
if(i==1)
 {
 	x= (no_one + no_two)/2 ;
 	cout<<setprecision(2)<<fixed;
 	cout<<"Average is :" <<x << "\n";

 }
 else if(i==2)
 {
 	y = no_one*no_two;
 	cout<<no_one<<"*"<<no_two<<" = "<<y<<"\n";
 }

else if(i==3)
{
	x = no_one/no_two;
	cout<<no_one<<"/"<<no_two<<" = " << x <<"\n";

}
if(i==4){
	y=no_one+no_two;
	cout<<no_one<<"+"<<no_two<<" = " << y <<"\n";
}
if(i==5){
	x=no_one-no_two;
    cout<<no_one<<"-"<<no_two<<" = " << x <<"\n";
}

cout<<"Do you want to restart the program y or n : "<< "\n";
cin>>a;
if(a=='y')
{
    goto line10;
}

}
