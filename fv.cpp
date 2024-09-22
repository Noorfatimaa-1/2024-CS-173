#include<iostream>
using namespace std;
main()
{
int initial_velocity,final_velocity,acceleration,time;
cout<<"enter initial velocity (m/s)"<<endl;
cin>>initial_velocity;
cout<<"enter acceleration (m/s^2)"<<endl;
cin>>acceleration;
cout<<"enter time (s)"<<endl;
cin>>time;
final_velocity=(acceleration*time)+initial_velocity;
cout<<"Final Velocity (m/s) "<< final_velocity;
}