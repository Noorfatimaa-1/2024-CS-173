#include<iostream>
using namespace std;
main()
{
int digit,num,num1,num2;
int  mod,mod1,mod2,sum;
cout<<"Enter a 4-digit number"<<endl;
cin>>digit;
mod=digit%10;
num=digit/10;
mod1=num%10;
num1=num/10;
mod2=num1%10;
num2=num1/10;


sum=(mod+mod1+mod2+num2);
cout<<"sum of individual digits "<<sum;
}