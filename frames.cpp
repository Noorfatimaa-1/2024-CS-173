#include<iostream>
using namespace std;
main()
{
int framespersec,total,minutes;
cout<<"enter no. of minutes"<<endl;
cin>>minutes;
cout<<"enter frames per second"<<endl;
cin>>framespersec;
total=framespersec*(minutes*60);
cout<<"Total no. of frames"<<total;
}