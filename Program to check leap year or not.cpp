#include <iostream>
using namespace std;
int main()
{
int year;
char choice='y';
line: if(choice=='y'){
cout<<"Please enter your year in four digits :"<<"\t";
cin>> year;
 if(year%400==0)
    {
        if(year%4==0)
        {
            cout<<"Yes its a leap year"<<"\t";
        }

    }
else
    cout<<"No it is not a leap year"<<"\n";

}
cout<<"Do you want to restart the program y or n:"<<"\n";
char k;
cin>>k;
if (k =='y')
    goto line ;

  return 0;
}
