#include<iostream>
using namespace std;
main()
{
int p,c,a,costperpound,costpersqft;
cout<<"Enter the size of fertilizer bag in pounds"<<endl;
cin>>p;
cout<<"Enter the cost of fertilizer bag"<<endl;
cin>>c;
cout<<"Enter the area in square feet that can be covered by it"<<endl;
cin>>a;
costperpound=c/p;
costpersqft=c/a;
cout<<"Cost of fertilizer per pound"<<"$"<<costperpound<<endl;
cout<<"Cost of fertilizer per square feet"<<"$"<<costpersqft;
}