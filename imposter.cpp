#include<iostream>
using namespace std;
main()
{
int i,p,chaance;
cout<<" Enter imposter count"<<endl;
cin>>i;
cout<<" Enter player count"<<endl;
cin>>p;
chaance=100*i/p;
cout<<" Chance of being an imposter "<< chaance << "%";
}