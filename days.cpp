#include<iostream>
using namespace std;
main()
{
int w,days;
string n;
cout<<"Enter the name of the person"<<endl;
cin>>n;
cout<<"Enter the target weight loss in grams"<<endl;
cin>>w;
days=w*15;
cout<<n <<" will need "<<days <<" to lose "<< w << "kg of weight by following doctors suggestion" ;
}