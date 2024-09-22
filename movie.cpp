#include<iostream>
using namespace std;
main()
{
string mn;
int s,a,c,remain,ss,d,amount,donation,total;
cout<<"Enter movie name:"<<endl;
cin>>mn;
cout<<"Enter adult ticket price:"<<endl;
cin>>a;
cout<<"Enter the child ticket price:"<<endl;
cin>>c;
cout<<"Enter the no. of adult tickets sold:"<<endl;
cin>>s;
cout<<"Enter the no. of child tickets sold:"<<endl;
cin>>ss;
cout<<"Enter the % of the amount to be donated:"<<endl;
cin>>d;
total=((a*s)+(c*ss));
donation=total/d;
remain=total-donation;
cout<<"Movie: "<< mn << endl;
cout<<"Total amount generated from ticket sales: "<<total<<endl;
cout<<"Donation to charity(10%): "<<donation<<endl;
cout<<"Remaining amount after donation: "<<remain<<endl; 

}